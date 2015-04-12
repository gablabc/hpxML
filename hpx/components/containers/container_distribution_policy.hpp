//  Copyright (c) 2014 Bibek Ghimire
//  Copyright (c) 2014-2015 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef HPX_CONTAINER_DISTRIBUTION_POLICY_HPP
#define HPX_CONTAINER_DISTRIBUTION_POLICY_HPP

#include <hpx/config.hpp>
#include <hpx/runtime/components/default_distribution_policy.hpp>
#include <hpx/traits/is_distribution_policy.hpp>

#include <hpx/runtime/serialization/serialize.hpp>
#include <hpx/runtime/serialization/vector.hpp>

#include <algorithm>
#include <type_traits>

namespace hpx
{
    ///////////////////////////////////////////////////////////////////////////
    // This class specifies the block chunking policy parameters to use for the
    // partitioning of the data in a hpx::vector
    struct container_distribution_policy : components::default_distribution_policy
    {
    public:
        container_distribution_policy()
          : num_partitions_(std::size_t(-1))
        {}

        container_distribution_policy operator()(std::size_t num_partitions) const
        {
            return container_distribution_policy(num_partitions, localities_);
        }

        container_distribution_policy operator()(
            std::vector<id_type> const& localities) const
        {
            if (num_partitions_ != std::size_t(-1))
                return container_distribution_policy(num_partitions_, localities);
            return container_distribution_policy(localities.size(), localities);
        }

        container_distribution_policy operator()(std::size_t num_partitions,
            std::vector<id_type> const& localities) const
        {
            return container_distribution_policy(num_partitions, localities);
        }

        ///////////////////////////////////////////////////////////////////////
        std::size_t get_num_partitions() const
        {
            std::size_t num_parts = (num_partitions_ == std::size_t(-1)) ?
                localities_.size() : num_partitions_;
            return (std::max)(num_parts, std::size_t(1));
        }

        std::vector<hpx::id_type> const& get_localities() const
        {
            return localities_;
        }

    private:
        friend class hpx::serialization::access;

        template <typename Archive>
        void serialize(Archive & ar, const unsigned int version)
        {
            ar & localities_ & num_partitions_;
        }

        container_distribution_policy(std::size_t num_partitions,
                std::vector<id_type> const& localities)
          : components::default_distribution_policy(localities),
            num_partitions_(num_partitions)
        {}

    private:
        std::size_t num_partitions_;        // number of chunks to create
    };

    static container_distribution_policy const layout;

    ///////////////////////////////////////////////////////////////////////////
    namespace traits { namespace detail
    {
        template <>
        struct is_distribution_policy<container_distribution_policy>
          : std::true_type
        {};
    }}
}

#endif
