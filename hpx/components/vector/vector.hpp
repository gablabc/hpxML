//  Copyright (c) 2014 Anuj R. Sharma
//  Copyright (c) 2014 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// \file hpx/components/vector/vector.hpp

#ifndef HPX_VECTOR_HPP
#define HPX_VECTOR_HPP

/// \brief The hpx::vector and its API's are defined here.
///
/// The hpx::vector is a segmented data structure which is a collection of one
/// or more hpx::partition_vectors. The hpx::vector stores the global IDs of each
/// hpx::partition_vector and the index (with respect to whole vector) of the first
/// element in that hpx::partition_vector. These two are stored in std::pair.

#include <hpx/include/lcos.hpp>
#include <hpx/include/util.hpp>
#include <hpx/include/components.hpp>

#include <hpx/components/vector/segmented_iterator.hpp>
#include <hpx/components/vector/partition_vector_component.hpp>
#include <hpx/components/vector/vector_configuration.hpp>
#include <hpx/components/vector/distribution_policy.hpp>

#include <cstdint>
#include <iostream>
#include <memory>

#include <boost/format.hpp>
#include <boost/cstdint.hpp>

namespace hpx
{
    ///////////////////////////////////////////////////////////////////////////
    /// \brief This is the vector class which define hpx::vector functionality.
    ///
    ///  This contains the client side implementation of the hpx::vector. This
    ///  class defines the synchronous and asynchronous API's for each of the
    ///  exposed functionalities.
    ///
    template <typename T>
    class vector
      : hpx::components::client_base<vector<T>, server::vector_configuration>
    {
    public:
        typedef std::allocator<T> allocator_type;

        typedef std::size_t size_type;
        typedef std::ptrdiff_t difference_type;

        typedef T value_type;
        typedef T reference;
        typedef T const const_reference;
        typedef typename std::allocator_traits<allocator_type>::pointer pointer;
        typedef typename std::allocator_traits<allocator_type>::const_pointer
            const_pointer;

    private:
        typedef hpx::components::client_base<
                vector, server::vector_configuration
            > base_type;

        typedef hpx::server::partition_vector<T> partition_vector_server;
        typedef hpx::partition_vector<T> partition_vector_client;

        struct partition_data : server::vector_configuration::partition_data
        {
            typedef server::vector_configuration::partition_data base_type;

            partition_data(future<id_type> && part, std::size_t size,
                    boost::uint32_t locality_id)
              : base_type(std::move(part), size, locality_id)
            {}

            partition_data(id_type const& part, std::size_t size,
                    boost::uint32_t locality_id)
              : base_type(part, size, locality_id)
            {}

            partition_data(base_type && base)
              : base_type(std::move(base))
            {}

            boost::shared_ptr<partition_vector_server> local_data_;
        };

        // The list of partitions belonging to this vector.
        // Each partition is described by it's corresponding client object, its
        // size, and locality id.
        typedef std::vector<partition_data> partitions_vector_type;

        size_type size_;                // overall size of the vector
        size_type block_size_;          // cycle stride

        // This is the vector representing the base_index and corresponding
        // global ID's of the underlying partition_vectors.
        partitions_vector_type partitions_;

        // parameters taken from distribution policy
        BOOST_SCOPED_ENUM(distribution_policy) policy_;     // policy to use

        // will be set for created (non-attached) objects
        std::string registered_name_;

    public:
        typedef vector_iterator<T> iterator;
        typedef const_vector_iterator<T> const_iterator;
        typedef std::reverse_iterator<iterator> reverse_iterator;
        typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

        typedef local_vector_iterator<T> local_iterator;
        typedef const_local_vector_iterator<T> const_local_iterator;

        typedef segment_vector_iterator<
                T, typename partitions_vector_type::iterator
            > segment_iterator;
        typedef const_segment_vector_iterator<
                T, typename partitions_vector_type::const_iterator
            > const_segment_iterator;

    private:
        friend class vector_iterator<T>;
        friend class const_vector_iterator<T>;

        std::size_t get_partition_size() const
        {
            std::size_t num_parts = partitions_.size();
            return num_parts ? ((size_ + num_parts - 1) / num_parts) : 0;
        }

        std::size_t get_global_index(std::size_t segment,
            std::size_t part_size, size_type local_index,
            BOOST_SCOPED_ENUM(distribution_policy) policy) const
        {
            switch (policy)
            {
            case distribution_policy::block:
                return segment * part_size + local_index;

            case distribution_policy::cyclic:
                return segment + local_index * (part_size - 1);

            case distribution_policy::block_cyclic:
                return (segment * part_size/block_size_) + local_index * (part_size - 1);

            default:
                break;
            }
            return std::size_t(-1);
        }

        void verify_consistency()
        {
            // verify consistency of parameters
            switch (policy_)
            {
            case distribution_policy::block:
                break;      // no limitations apply

            case distribution_policy::cyclic:
                // overall size must be multiple of partition size
                {
                    std::size_t part_size = get_partition_size();
                    if (part_size != std::size_t(-1) &&
                        (size_ % part_size) != 0)
                    {
                        HPX_THROW_EXCEPTION(bad_parameter,
                            "hpx::vector::create",
                            boost::str(boost::format(
                                "cyclic distribution policy requires that the "
                                "overall size(%1%) of the vector must be a "
                                "multiple of the partition size(%2%)"
                            ) % size_ % part_size));
                    }
                }
                break;

            case distribution_policy::block_cyclic:
                {
                    if (block_size_ == std::size_t(-1))
                        block_size_ = get_partition_size();

                    std::size_t part_size = get_partition_size();
                    if (part_size != std::size_t(-1) &&
                        (size_ % part_size) != 0)
                    {
                        HPX_THROW_EXCEPTION(bad_parameter,
                            "hpx::vector::create",
                            boost::str(boost::format(
                                "block_cyclic distribution policy requires "
                                "that the overall size(%1%) of the vector must "
                                "be a multiple of the partition size(%2%)"
                            ) % size_ % part_size));
                        break;
                    }

                    HPX_ASSERT(block_size_ != 0);
                    if ((part_size % block_size_) != 0)
                    {
                        HPX_THROW_EXCEPTION(bad_parameter,
                            "hpx::vector::create",
                            boost::str(boost::format(
                                "block_cyclic distribution policy requires "
                                "that the overall partition size(%1%) of the "
                                "vector must be a multiple of the block "
                                "size(%2%)"
                            ) % part_size % block_size_));
                        break;
                    }
                }
                break;

            default:
                break;
            }
        }

        ///////////////////////////////////////////////////////////////////////
        // Connect this vector to the existing vector using the given symbolic
        // name.
        void get_data_helper(id_type id,
            future<server::vector_configuration::config_data> f)
        {
            server::vector_configuration::config_data data = f.get();

            partitions_.clear();
            partitions_.reserve(data.partitions_.size());

            size_ = data.size_;
            block_size_ = data.block_size_;
            std::move(data.partitions_.begin(), data.partitions_.end(),
                std::back_inserter(partitions_));

            policy_ = static_cast<BOOST_SCOPED_ENUM(distribution_policy)>(
                data.policy_);

            base_type::reset(std::move(id));
        }

        // this will be called by the base class once the registered id becomes
        // available
        future<void> connect_to_helper(future<id_type> f)
        {
            using util::placeholders::_1;
            typedef typename server::vector_configuration::get_action act;

            id_type id = f.get();
            return async(act(), id).then(
                util::bind(&vector::get_data_helper, this, id, _1));
        }

    public:
        future<void> connect_to(std::string const& symbolic_name)
        {
            using util::placeholders::_1;
            return base_type::connect_to(symbolic_name,
                util::bind(&vector::connect_to_helper, this, _1));
        }

        // Register this vector with AGAS using the given symbolic name
        future<void> register_as(std::string const& symbolic_name)
        {
            std::vector<server::vector_configuration::partition_data> partitions;
            partitions.reserve(partitions_.size());

            std::copy(partitions_.begin(), partitions_.end(),
                std::back_inserter(partitions));

            server::vector_configuration::config_data data(
                size_, block_size_, std::move(partitions), int(policy_));
            base_type::reset(hpx::new_<server::vector_configuration>(
                hpx::find_here(), std::move(data)));

            registered_name_ = symbolic_name;
            return base_type::register_as(symbolic_name);
        }

    public:
        // Return the sequence number of the segment corresponding to the
        // given global index
        std::size_t get_partition(size_type global_index) const
        {
            if (global_index == size_)
                return std::size_t(-1);

            switch (policy_)
            {
            case distribution_policy::block:
                {
                    std::size_t part_size = get_partition_size();
                    if (part_size != 0)
                        return global_index / part_size;
                }
                break;

            case distribution_policy::cyclic:
                {
                    std::size_t num_parts = partitions_.size();
                    if (num_parts != 0)
                        return global_index % num_parts;
                }
                break;

            case distribution_policy::block_cyclic:
                {
                    HPX_ASSERT(block_size_ != 0);
                    std::size_t num_blocks = size_ / block_size_;
                    if (num_blocks != 0)
                    {
                        std::size_t num_parts = partitions_.size();
                        if (num_parts != 0)
                        {
                            std::size_t block_num = global_index % num_blocks;
                            return block_num / (num_blocks / num_parts);
                        }
                    }
                }
                break;

            default:
                break;
            }
            return std::size_t(-1);
        }

        // Return the local index inside the segment corresponding to the
        // given global index
        std::size_t get_local_index(size_type global_index) const
        {
            if (global_index == size_)
                return std::size_t(-1);

            switch (policy_)
            {
            case distribution_policy::block:
                {
                    std::size_t part_size = get_partition_size();
                    if (part_size != 0)
                        return global_index % part_size;
                }
                break;

            case distribution_policy::cyclic:
                {
                    std::size_t num_parts = partitions_.size();
                    if (num_parts != 0)
                        return global_index / num_parts;
                }
                break;

            case distribution_policy::block_cyclic:
                {
                    HPX_ASSERT(block_size_ != 0);
                    std::size_t num_blocks = size_ / block_size_;
                    if (num_blocks != 0)
                    {
                        std::size_t num_parts = partitions_.size();
                        if (num_parts != 0)
                        {
                            // block number inside its partitions
                            std::size_t block_num = global_index % num_blocks;
                            block_num %= (num_blocks / num_parts);

                            // blocks below current index + index inside block
                            std::size_t block_idx = global_index / num_blocks;
                            return block_size_ * block_num + block_idx;
                        }
                    }
                }
                break;

            default:
                break;
            }
            return std::size_t(-1);
        }

        // Return the global index corresponding to the local index inside the
        // given segment.
        std::size_t get_global_index(segment_iterator const& it,
            size_type local_index,
            BOOST_SCOPED_ENUM(distribution_policy) policy)
        {
            std::size_t part_size = get_partition_size();
            if (part_size == 0)
                return std::size_t(-1);

            std::size_t segment = std::distance(partitions_.begin(), it.base());
            return get_global_index(segment, part_size, local_index, policy);
        }

        std::size_t get_global_index(segment_iterator const& it,
            size_type local_index)
        {
            return get_global_index(it, local_index, policy_);
        }

        std::size_t get_global_index(const_segment_iterator const& it,
            size_type local_index,
            BOOST_SCOPED_ENUM(distribution_policy) policy) const
        {
            std::size_t part_size = get_partition_size();
            if (part_size == 0)
                return std::size_t(-1);

            std::size_t segment = std::distance(partitions_.cbegin(), it.base());
            return get_global_index(segment, part_size, local_index, policy);
        }

        std::size_t get_global_index(const_segment_iterator const& it,
            size_type local_index) const
        {
            return get_global_index(it, local_index, policy_);
        }

        std::size_t get_partition(segment_iterator const& it) const
        {
            return std::distance(partitions_.begin(), it.base());
        }

        // Return the local iterator referencing an element inside a segment
        // based on the given global index.
        local_iterator get_local_iterator(size_type global_index) const
        {
            std::size_t part = get_partition(global_index);
            if (part == std::size_t(-1))
                return local_iterator();

            std::size_t local_index = get_local_index(global_index);
            HPX_ASSERT(local_index != std::size_t(-1));

            return local_iterator(partitions_[part].partition_, local_index,
                partitions_[part].local_data_);
        }

        const_local_iterator get_const_local_iterator(size_type global_index) const
        {
            std::size_t part = get_partition(global_index);
            if (part == std::size_t(-1))
                return const_local_iterator();

            std::size_t local_index = get_local_index(global_index);
            HPX_ASSERT(local_index != std::size_t(-1));

            return const_local_iterator(partitions_[part].partition_,
                local_index, partitions_[part].local_data_);
        }

        // Return the segment iterator referencing a segment based on the
        // given global index.
        segment_iterator get_segment_iterator(size_type global_index)
        {
            std::size_t part = get_partition(global_index);
            if (part == std::size_t(-1) || part == partitions_.size())
                return segment_iterator(this, partitions_.end());

            return segment_iterator(this, partitions_.begin() + part,
                partitions_.end());
        }

        const_segment_iterator get_const_segment_iterator(
            size_type global_index) const
        {
            std::size_t part = get_partition(global_index);
            if (part == std::size_t(-1))
                return const_segment_iterator(this, partitions_.cend());

            return const_segment_iterator(this, partitions_.cbegin() + part,
                partitions_.cend());
        }

    protected:
        future<std::vector<id_type> >
        create_helper1(id_type const& locality, std::size_t count,
            std::size_t size)
        {
            return partition_vector_client::bulk_create_async(
                locality, count, size);
        }

        future<std::vector<id_type> >
        create_helper2(id_type const& locality, std::size_t count,
            std::size_t size, T const& val)
        {
            return partition_vector_client::bulk_create_async(
                locality, count, size, val);
        }

        void get_ptr_helper(std::size_t loc,
            future<boost::shared_ptr<partition_vector_server> > && f)
        {
            partitions_[loc].local_data_ = f.get();
        }

        template <typename DistPolicy, typename Create>
        void create(std::vector<id_type> const& localities,
            DistPolicy const& policy, Create && creator)
        {
            std::size_t num_parts = policy.get_num_partitions();
            std::size_t part_size = (size_ + num_parts - 1) / num_parts;
            std::size_t num_localities = localities.size();
            std::size_t num_parts_per_loc =
                (num_parts + num_localities - 1) / num_localities;

            // create as many partitions as required
            std::vector<future<std::vector<id_type> > > ids;
            ids.reserve(num_localities);
            for (std::size_t loc = 0; loc != num_localities; ++loc)
            {
                // create as many partitions on a given locality as required
                ids.push_back(
                    creator(localities[loc], num_parts_per_loc, part_size)
                );
            }
            hpx::wait_all(ids);

            // now initialize our data structures
            boost::uint32_t this_locality = get_locality_id();
            std::vector<future<void> > ptrs;

            std::size_t num_part = 0;
            std::size_t allocated_size = 0;
            for (std::size_t loc = 0; loc != num_localities; ++loc)
            {
                boost::uint32_t locality =
                    naming::get_locality_id_from_id(localities[loc]);
                std::vector<id_type> objs = ids[loc].get();

                HPX_ASSERT(objs.size() == num_parts_per_loc);
                for (std::size_t l = 0; l != num_parts_per_loc; ++l)
                {
                    std::size_t size = (std::min)(part_size, size_-allocated_size);
                    partitions_.push_back(partition_data(objs[l], size, locality));

                    if (locality == this_locality)
                    {
                        using util::placeholders::_1;
                        ptrs.push_back(get_ptr<partition_vector_server>(
                            partitions_.back().partition_.get()).then(
                                util::bind(&vector::get_ptr_helper, this, l, _1)));
                    }

                    allocated_size += size;
                    if (++num_part == num_parts)
                    {
                        HPX_ASSERT(allocated_size == size_);

                        // shrink last partition, if appropriate
                        if (size != part_size)
                        {
                            partition_vector_client(
                                    partitions_.back().partition_
                                ).resize(size);
                        }
                        break;
                    }
                    else
                    {
                        HPX_ASSERT(size == part_size);
                    }
                }
            }

            wait_all(ptrs);
        }

        template <typename DistPolicy>
        void create(std::vector<id_type> const& localities,
            DistPolicy const& policy)
        {
            using util::placeholders::_1;
            using util::placeholders::_2;
            using util::placeholders::_3;

            create(localities, policy, util::bind(
                &vector::create_helper1, this, _1, _2, _3));
        }

        template <typename DistPolicy>
        void create(T const& val, std::vector<id_type> const& localities,
            DistPolicy const& policy)
        {
            using util::placeholders::_1;
            using util::placeholders::_2;
            using util::placeholders::_3;

            create(localities, policy, util::bind(
                &vector::create_helper2, this, _1, _2, _3, boost::ref(val)));
        }

        // This function is called when we are creating the vector. It
        // initializes the partitions based on the give parameters.
        template <typename DistPolicy>
        void create(DistPolicy const& policy)
        {
            std::vector<id_type> const& localities = policy.get_localities();
            if (localities.empty())
                create(std::vector<id_type>(1, find_here()), policy);
            else
                create(localities, policy);

            verify_consistency();
        }

        template <typename DistPolicy>
        void create(T const& val, DistPolicy const& policy)
        {
            std::vector<id_type> const& localities = policy.get_localities();
            if (localities.empty())
                create(val, std::vector<id_type>(1, find_here()), policy);
            else
                create(val, localities, policy);

            verify_consistency();
        }

        // Perform a deep copy from the given vector
        void copy_from(vector const& rhs)
        {
            typedef typename partitions_vector_type::const_iterator const_iterator;

            std::vector<future<id_type> > objs;
            const_iterator end = rhs.partitions_.end();
            for (const_iterator it = rhs.partitions_.begin(); it != end; ++it)
            {
                typedef typename partition_vector_client::server_component_type
                    component_type;
                objs.push_back(hpx::components::copy<component_type>(
                    it->partition_.get()));
            }
            wait_all(objs);

            boost::uint32_t this_locality = get_locality_id();
            std::vector<future<void> > ptrs;

            partitions_vector_type partitions;
            partitions.reserve(rhs.partitions_.size());
            for (std::size_t i = 0; i != rhs.partitions_.size(); ++i)
            {
                boost::int32_t locality = rhs.partitions_[i].locality_id_;

                partitions.push_back(partition_data(std::move(objs[i]),
                    rhs.partitions_[i].size_, locality));

                if (locality == this_locality)
                {
                    using util::placeholders::_1;
                    ptrs.push_back(get_ptr<partition_vector_server>(
                        partitions_[i].partition_.get()).then(
                            util::bind(&vector::get_ptr_helper, this, i, _1)));
                }
            }

            wait_all(ptrs);

            size_ = rhs.size_;
            block_size_ = rhs.block_size_;
            policy_ = rhs.policy_;
            std::swap(partitions_, partitions);
            registered_name_.clear();
        }

    public:
        /// Default Constructor which create hpx::vector with
        /// \a num_partitions = 1 and \a partition_size = 0. Hence overall size
        /// of the vector is 0.
        ///
        vector()
          : size_(0),
            block_size_(std::size_t(-1)),
            policy_(distribution_policy::block)
        {}

        /// Construct a new vector representation from the data associated with
        /// the given symbolic name.
        vector(std::string const& symbolic_name)
          : size_(0),
            block_size_(std::size_t(-1)),
            policy_(distribution_policy::block)
        {
            connect_to(symbolic_name).get();
        }

        /// Constructor which create hpx::vector with the given overall \a size
        ///
        /// \param size             The overall size of the vector
        ///
        vector(size_type size)
          : size_(size),
            block_size_(std::size_t(-1)),
            policy_(distribution_policy::block)
        {
            if (size != 0)
                create(hpx::block);
        }

        /// Constructor which create and initialize vector with the
        /// given \a where all elements are initialized with \a val.
        ///
        /// \param size             The overall size of the vector
        /// \param val              Default value for the elements in vector
        /// \param symbolic_name    The (optional) name to register the newly
        ///                         created vector
        ///
        vector(size_type size, T const& val)
          : size_(size),
            block_size_(std::size_t(-1)),
            policy_(distribution_policy::block)
        {
            if (size != 0)
                create(val, hpx::block);
        }
        vector(size_type size, T const& val, std::string const& symbolic_name)
          : size_(size),
            block_size_(std::size_t(-1)),
            policy_(distribution_policy::block)
        {
            if (size != 0)
                create(val, hpx::block);

            register_as(symbolic_name).get();
        }

        /// Constructor which create and initialize vector of size
        /// \a size using the given distribution policy.
        ///
        /// \param size             The overall size of the vector
        /// \param policy           The distribution policy to use (default: block)
        /// \param symbolic_name    The (optional) name to register the newly
        ///                         created vector
        ///
        template <typename DistPolicy>
        vector(size_type size, DistPolicy const& policy)
          : size_(size),
            block_size_(policy.get_block_size()),
            policy_(policy.get_policy_type())
        {
            if (size != 0)
                create(policy);
        }
        template <typename DistPolicy>
        vector(size_type size, DistPolicy const& policy,
                std::string const& symbolic_name)
          : size_(size),
            block_size_(policy.get_block_size()),
            policy_(policy.get_policy_type())
        {
            if (size != 0)
                create(policy);

            register_as(symbolic_name).get();
        }

        /// Constructor which create and initialize vector with the
        /// given \a where all elements are initialized with \a val and
        /// using the given distribution policy.
        ///
        /// \param size             The overall size of the vector
        /// \param val              Default value for the elements in vector
        /// \param policy           The distribution policy to use (default: block)
        /// \param symbolic_name    The (optional) name to register the newly
        ///                         created vector
        ///
        template <typename DistPolicy>
        vector(size_type size, T const& val, DistPolicy const& policy)
          : size_(size),
            block_size_(policy.get_block_size()),
            policy_(policy.get_policy_type())
        {
            if (size != 0)
                create(val, policy);
        }
        template <typename DistPolicy>
        vector(size_type size, T const& val, DistPolicy const& policy,
                std::string const& symbolic_name)
          : size_(size),
            block_size_(policy.get_block_size()),
            policy_(policy.get_policy_type())
        {
            if (size != 0)
                create(val, policy);

            register_as(symbolic_name).get();
        }

        ~vector()
        {
            if (!registered_name_.empty())
            {
                error_code ec;      // ignore all exceptions
                agas::unregister_name_sync(registered_name_, ec);
            }
        }

        /// Copy construction performs a deep copy of the right hand side
        /// vector.
        vector(vector const& rhs)
          : size_(0),
            block_size_(std::size_t(-1)),
            policy_(distribution_policy::block)
        {
            if (rhs.size_ != 0)
                copy_from(rhs);
        }

        vector(vector && rhs)
          : size_(rhs.size_),
            block_size_(rhs.block_size_),
            partitions_(std::move(rhs.partitions_)),
            policy_(rhs.policy_),
            registered_name_(std::move(rhs.registered_name_))
        {
            rhs.size_ = 0;
            rhs.block_size_ = std::size_t(-1);
            rhs.policy_ = distribution_policy::block;
        }

    public:
        /// \brief Array subscript operator. This does not throw any exception.
        ///
        /// \param pos Position of the element in the vector [Note the first
        ///            position in the partition is 0]
        ///
        /// \return Returns the value of the element at position represented by
        ///         \a pos.
        ///
        /// \note The non-const version of is operator returns a proxy object
        ///       instead of a real reference to the element.
        ///
        detail::vector_value_proxy<T> operator[](size_type pos)
        {
            return detail::vector_value_proxy<T>(*this, pos);
        }
        T operator[](size_type pos) const
        {
            return get_value_sync(pos);
        }

        /// Copy assignment operator, performs deep copy of the right hand side
        /// vector.
        ///
        /// \param rhs    This the hpx::vector object which is to be copied
        ///
        vector& operator=(vector const& rhs)
        {
            if (this != &rhs && rhs.size_ != 0)
                copy_from(rhs);
            return *this;
        }

        vector& operator=(vector && rhs)
        {
            if (this != &rhs)
            {
                size_ = rhs.size_;
                block_size_ = rhs.block_size_;
                partitions_ = std::move(rhs.partitions_);
                policy_ = rhs.policy_;
                registered_name_ = std::move(rhs.registered_name_);

                rhs.size_ = 0;
                rhs.block_size_ = std::size_t(-1);
                rhs.policy_ = distribution_policy::block;
            }
            return *this;
        }

        ///////////////////////////////////////////////////////////////////////
        // Capacity related API's in vector class
        ///////////////////////////////////////////////////////////////////////

        /// \brief Compute the size as the number of elements it contains.
        ///
        /// \return Return the number of elements in the vector
        ///
        size_type size() const
        {
            return size_;
        }

        /// Compute the distribution policy type used to create this vector.
        ///
        /// \return Return the distribution policy type used to create this
        ///         vector instance
        ///
        BOOST_SCOPED_ENUM(distribution_policy) get_policy() const
        {
            return policy_;
        }

        //
        //  Element access API's in vector class
        //

        /// Returns the element at position \a pos in the vector container.
        ///
        /// \param pos Position of the element in the vector
        ///
        /// \return Returns the value of the element at position represented by
        ///         \a pos.
        ///
        T get_value_sync(size_type pos) const
        {
            return get_value(pos).get();
        }

        /// Returns the element at position \a pos in the vector container.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the partition
        ///
        /// \return Returns the value of the element at position represented by
        ///         \a pos.
        ///
        T get_value_sync(size_type part, size_type pos) const
        {
            return get_value(part, pos).get();
        }

        /// Returns the element at position \a pos in the vector container
        /// asynchronously.
        ///
        /// \param pos Position of the element in the vector
        ///
        /// \return Returns the hpx::future to value of the element at position
        ///         represented by \a pos.
        ///
        future<T> get_value(size_type pos) const
        {
            return get_value(get_partition(pos), get_local_index(pos));
        }

        /// Returns the element at position \a pos in the given partition in
        /// the vector container asynchronously.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the partition
        ///
        /// \return Returns the hpx::future to value of the element at position
        ///         represented by \a pos.
        ///
        future<T> get_value(size_type part, size_type pos) const
        {
            if (partitions_[part].local_data_)
            {
                return make_ready_future(
                    partitions_[part].local_data_->get_value(pos));
            }

            return partition_vector_client(partitions_[part].partition_)
                .get_value(pos);
        }

        /// Returns the elements at the positions \a pos from the given
        /// partition in the vector container.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the partition
        ///
        /// \return Returns the value of the element at position represented by
        ///         \a pos.
        ///
        std::vector<T>
        get_values_sync(size_type part, std::vector<size_type> const& pos) const
        {
            return get_values(part, pos).get();
        }

        /// Asynchronously returns the elements at the positions \a pos from
        /// the given partition in the vector container.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Positions of the elements in the vector
        ///
        /// \return Returns the hpx::future to values of the elements at the
        ///         given positions represented by \a pos.
        ///
        future<std::vector<T> >
        get_values(size_type part, std::vector<size_type> const& pos) const
        {
            if (partitions_[part].local_data_)
            {
                return make_ready_future(
                    partitions_[part].local_data_->get_values(pos));
            }

            return partition_vector_client(partitions_[part].partition_)
                .get_values(pos);
        }

//         //FRONT (never throws exception)
//         /** @brief Access the value of first element in the vector.
//          *
//          *  Calling the function on empty container cause undefined behavior.
//          *
//          * @return Return the value of the first element in the vector
//          */
//         VALUE_TYPE front() const
//         {
//             return partition_vector_stub::front_async(
//                                     (partitions_.front().first).get()
//                                                   ).get();
//         }//end of front_value
//
//         /** @brief Asynchronous API for front().
//          *
//          *  Calling the function on empty container cause undefined behavior.
//          *
//          * @return Return the hpx::future to return value of front()
//          */
//         hpx::future< VALUE_TYPE > front_async() const
//         {
//             return partition_vector_stub::front_async(
//                                     (partitions_.front().first).get()
//                                                   );
//         }//end of front_async
//
//         //BACK (never throws exception)
//         /** @brief Access the value of last element in the vector.
//          *
//          *  Calling the function on empty container cause undefined behavior.
//          *
//          * @return Return the value of the last element in the vector
//          */
//         VALUE_TYPE back() const
//         {
//             // As the LAST pair is there and then decrement operator to that
//             // LAST is undefined hence used the end() function rather than back()
//             return partition_vector_stub::back_async(
//                             ((partitions_.end() - 2)->first).get()
//                                                  ).get();
//         }//end of back_value
//
//         /** @brief Asynchronous API for back().
//          *
//          *  Calling the function on empty container cause undefined behavior.
//          *
//          * @return Return hpx::future to the return value of back()
//          */
//         hpx::future< VALUE_TYPE > back_async() const
//         {
//             //As the LAST pair is there
//             return partition_vector_stub::back_async(
//                             ((partitions_.end() - 2)->first).get()
//                                                  );
//         }//end of back_async
//
//         //
//         // Modifier component action
//         //
//
//         //ASSIGN
//         /** @brief Assigns new contents to each partition, replacing its
//          *          current contents and modifying each partition size
//          *          accordingly.
//          *
//          *  @param n     New size of each partition
//          *  @param val   Value to fill the partition with
//          *
//          *  @exception hpx::invalid_vector_error If the \a n is equal to zero
//          *              then it throw \a hpx::invalid_vector_error exception.
//          */
//         void assign(size_type n, VALUE_TYPE const& val)
//         {
//             if(n == 0)
//                 HPX_THROW_EXCEPTION(
//                     hpx::invalid_vector_error,
//                     "assign",
//                     "Invalid Vector: new_partition_size should be greater than zero"
//                                     );
//
//             std::vector<future<void>> assign_lazy_sync;
//             BOOST_FOREACH(partition_description_type const& p,
//                           std::make_pair(partitions_.begin(),
//                                          partitions_.end() - 1)
//                           )
//             {
//                 assign_lazy_sync.push_back(
//                     partition_vector_stub::assign_async((p.first).get(), n, val)
//                                           );
//             }
//             hpx::wait_all(assign_lazy_sync);
//             adjust_base_index(partitions_.begin(),
//                               partitions_.end() - 1,
//                               n);
//         }//End of assign
//
//         /** @brief Asynchronous API for assign().
//          *
//          *  @param n     New size of each partition
//          *  @param val   Value to fill the partition with
//          *
//          *  @exception hpx::invalid_vector_error If the \a n is equal to zero
//          *              then it throw \a hpx::invalid_vector_error exception.
//          *
//          *  @return This return the hpx::future of type void [The void return
//          *           type can help to check whether the action is completed or
//          *           not]
//          */
//         future<void> assign_async(size_type n, VALUE_TYPE const& val)
//         {
//             return hpx::async(launch::async,
//                               hpx::util::bind(&vector::assign,
//                                               this,
//                                               n,
//                                               val)
//                               );
//         }
//
//         //PUSH_BACK
//         /** @brief Add new element at the end of vector. The added element
//          *          contain the \a val as value.
//          *
//          *  The value is added to the back to the last partition.
//          *
//          *  @param val Value to be copied to new element
//          */
//         void push_back(VALUE_TYPE const& val)
//         {
//             partition_vector_stub::push_back_async(
//                             ((partitions_.end() - 2 )->first).get(),
//                                                 val
//                                                 ).get();
//         }

        /// Copy the value of \a val in the element at position \a pos in
        /// the vector container.
        ///
        /// \param pos   Position of the element in the vector
        /// \param val   The value to be copied
        ///
        template <typename T_>
        void set_value_sync(size_type pos, T_ && val)
        {
            set_value(pos, std::forward<T_>(val)).get();
        }

        /// Copy the value of \a val in the element at position \a pos in
        /// the vector container.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the partition
        /// \param val   The value to be copied
        ///
        template <typename T_>
        void set_value_sync(size_type part, size_type pos, T_ && val)
        {
            set_value(part, pos, std::forward<T_>(val)).get();
        }

        /// Asynchronous set the element at position \a pos of the partition
        /// \a part to the given value \a val.
        ///
        /// \param pos   Position of the element in the vector
        /// \param val   The value to be copied
        ///
        /// \return This returns the hpx::future of type void which gets ready
        ///         once the operation is finished.
        ///
        template <typename T_>
        future<void> set_value(size_type pos, T_ && val)
        {
            return set_value(get_partition(pos), get_local_index(pos),
                std::forward<T_>(val));
        }

        /// Asynchronously set the element at position \a pos in
        /// the partition \part to the given value \a val.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the partition
        /// \param val   The value to be copied
        ///
        /// \return This returns the hpx::future of type void which gets ready
        ///         once the operation is finished.
        ///
        template <typename T_>
        future<void> set_value(size_type part, size_type pos, T_ && val)
        {
            if (partitions_[part].local_data_)
            {
                partitions_[part].local_data_->
                    set_value(pos, std::forward<T_>(val));
                return make_ready_future();
            }

            return partition_vector_client(partitions_[part].partition_)
                .set_value(pos, std::forward<T_>(val));
        }

        /// Copy the values of \a val to the elements at positions \a pos in
        /// the partition \part of the vector container.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the vector
        /// \param val   The value to be copied
        ///
        void set_values_sync(size_type part, std::vector<size_type> const& pos,
            std::vector<T> const& val)
        {
            set_value(pos, val).get();
        }

        /// Asynchronously set the element at position \a pos in
        /// the partition \part to the given value \a val.
        ///
        /// \param part  Sequence number of the partition
        /// \param pos   Position of the element in the partition
        /// \param val   The value to be copied
        ///
        /// \return This returns the hpx::future of type void which gets ready
        ///         once the operation is finished.
        ///
        future<void>
        set_values(size_type part, std::vector<size_type> const& pos,
            std::vector<T> const& val)
        {
            HPX_ASSERT(pos.size() == val.size());

            if (partitions_[part].local_data_)
            {
                partitions_[part].local_data_->set_values(pos, val);
                return make_ready_future();
            }

            return partition_vector_client(partitions_[part].partition_)
                .set_values(pos, val);
        }

//             //CLEAR
//             //TODO if number of partitions is kept constant every time then
//             // clear should modified (clear each partition_vector one by one).
// //            void clear()
// //            {
// //                //It is keeping one gid hence iterator does not go in an invalid state
// //                partitions_.erase(partitions_.begin() + 1,
// //                                           partitions_.end()-1);
// //                partition_vector_stub::clear_async((partitions_[0].second).get()).get();
// //                HPX_ASSERT(partitions_.size() > 1); //As this function changes the size we should have LAST always.
// //            }

        ///////////////////////////////////////////////////////////////////////
        /// Return the iterator at the beginning of the first segment located
        /// on the given locality.
        iterator
        begin(boost::uint32_t id = naming::invalid_locality_id)
        {
            return iterator(this, get_global_index(segment_begin(id), 0,
                distribution_policy::block));
        }

        /// \brief Return the const_iterator at the beginning of the vector.
        const_iterator
        begin(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_iterator(this, get_global_index(segment_cbegin(id), 0,
                distribution_policy::block));
        }

        /// \brief Return the const_iterator at the beginning of the vector.
        const_iterator
        cbegin(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_iterator(this, get_global_index(segment_cbegin(id), 0,
                distribution_policy::block));
        }

        /// \brief Return the iterator at the end of the vector.
        iterator
        end(boost::uint32_t id = naming::invalid_locality_id)
        {
            return iterator(this, get_global_index(segment_end(id), 0,
                distribution_policy::block));
        }

        /// \brief Return the const_iterator at the end of the vector.
        const_iterator
        end(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_iterator(this, get_global_index(segment_cend(id), 0,
                distribution_policy::block));
        }

        /// \brief Return the const_iterator at the end of the vector.
        const_iterator
        cend(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_iterator(this, get_global_index(segment_cend(id), 0,
                distribution_policy::block));
        }

        /// Return the iterator at the beginning of the first segment located
        /// on the given locality.
        iterator begin(id_type const& id)
        {
            HPX_ASSERT(naming::is_locality(id));
            return begin(naming::get_locality_from_id(id));
        }

        /// \brief Return the const_iterator at the beginning of the vector.
        const_iterator begin(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return begin(naming::get_locality_from_id(id));
        }

        /// \brief Return the const_iterator at the beginning of the vector.
        const_iterator cbegin(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return cbegin(naming::get_locality_from_id(id));
        }

        /// \brief Return the iterator at the end of the vector.
        iterator end(id_type const& id)
        {
            HPX_ASSERT(naming::is_locality(id));
            return end(naming::get_locality_from_id(id));
        }

        /// \brief Return the const_iterator at the end of the vector.
        const_iterator end(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return end(naming::get_locality_from_id(id));
        }

        /// \brief Return the const_iterator at the end of the vector.
        const_iterator cend(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return cend(naming::get_locality_from_id(id));
        }

        ///////////////////////////////////////////////////////////////////////
        segment_iterator
        segment_begin(boost::uint32_t id = naming::invalid_locality_id)
        {
            return segment_iterator(this, partitions_.begin(),
                partitions_.end(), id);
        }

        const_segment_iterator
        segment_begin(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_segment_iterator(this, partitions_.cbegin(),
                partitions_.cend(), id);
        }

        const_segment_iterator
        segment_cbegin(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_segment_iterator(this, partitions_.cbegin(),
                partitions_.cend(), id);
        }

        segment_iterator
        segment_end(boost::uint32_t id = naming::invalid_locality_id)
        {
            return segment_iterator(this, partitions_.end());
        }

        const_segment_iterator
        segment_end(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_segment_iterator(this, partitions_.cend());
        }

        const_segment_iterator
        segment_cend(boost::uint32_t id = naming::invalid_locality_id) const
        {
            return const_segment_iterator(this, partitions_.cend());
        }

        ///////////////////////////////////////////////////////////////////////
        segment_iterator segment_begin(id_type const& id)
        {
            HPX_ASSERT(naming::is_locality(id));
            return segment_begin(naming::get_locality_from_id(id));
        }

        const_segment_iterator
        segment_begin(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return segment_begin(naming::get_locality_from_id(id));
        }

        const_segment_iterator
        segment_cbegin(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return segment_cbegin(naming::get_locality_from_id(id));
        }

        segment_iterator
        segment_end(id_type const& id)
        {
            HPX_ASSERT(naming::is_locality(id));
            return segment_end(naming::get_locality_from_id(id));
        }

        const_segment_iterator
        segment_end(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return segment_end(naming::get_locality_from_id(id));
        }

        const_segment_iterator
        segment_cend(id_type const& id) const
        {
            HPX_ASSERT(naming::is_locality(id));
            return segment_cend(naming::get_locality_from_id(id));
        }
    };
}

#endif // VECTOR_HPP
