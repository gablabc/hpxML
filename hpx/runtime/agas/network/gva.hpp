////////////////////////////////////////////////////////////////////////////////
//  Copyright (c)      2011 Bryce Lelbach
//  Copyright (c) 2007-2011 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
////////////////////////////////////////////////////////////////////////////////

#if !defined(HPX_83DB815F_26D5_4525_AC5B_E702FBD886D4)
#define HPX_83DB815F_26D5_4525_AC5B_E702FBD886D4

#include <boost/io/ios_state.hpp>
#include <boost/cstdint.hpp>
#include <boost/serialization/serialization.hpp>
#include <boost/serialization/split_member.hpp>

#include <hpx/exception.hpp>
#include <hpx/runtime/components/component_type.hpp>
#include <hpx/runtime/agas/traits.hpp>
#include <hpx/runtime/naming/name.hpp>
#include <hpx/runtime/naming/locality.hpp>
#include <hpx/util/safe_bool.hpp>

namespace hpx { namespace agas
{

template <typename Protocol>
struct gva 
{
    typedef naming::locality endpoint_type;
    typedef int component_type;
    typedef boost::uint64_t lva_type;
    typedef boost::uint64_t count_type;
    typedef boost::uint64_t offset_type;

    gva()
      : endpoint(),
        type(components::component_invalid),
        count(0),
        lva_(0),
        offset(0) {}

    gva(endpoint_type const& ep,
        component_type t = components::component_invalid, count_type c = 1,
        lva_type a = 0, offset_type o = 0)
      : endpoint(ep),
        type(t),
        count(c),
        lva_(a),
        offset(o) {}

    gva(endpoint_type const& ep, component_type t, count_type c, void* a,
        offset_type o = 0)
      : endpoint(ep),
        type(t),
        count(c),
        lva_(reinterpret_cast<lva_type>(a)),
        offset(o) {}

    gva(lva_type a)
      : endpoint(),
        type(components::component_invalid),
        count(0),
        lva_(a),
        offset(0) {}

    gva(void* a)
      : endpoint(),
        type(components::component_invalid), 
        count(0),
        lva_(reinterpret_cast<lva_type>(a)),
        offset(0) {}
 
    gva& operator=(lva_type a)
    {
        endpoint = endpoint();
        type = components::component_invalid;
        count = 0;
        lva_ = a;
        offset = 0;
        return *this;
    }
    
    gva& operator=(void* a)
    {
        endpoint = endpoint();
        type = components::component_invalid;
        count = 0;
        lva_ = reinterpret_cast<lva_type>(a);
        offset = 0;
        return *this;
    }
    
    gva& operator=(gva const& other)
    {
        endpoint = other.endpoint; 
        type = other.type; 
        count = other.count;
        lva_ = other.lva_; 
        offset = other.offset;
        return *this;
    }

    bool operator==(gva const& rhs) const
    {
        return type     == rhs.type
            && count    == rhs.count
            && lva_     == rhs.lva_ 
            && offset   == rhs.offset
            && endpoint == rhs.endpoint;
    }

    bool operator!=(gva const& rhs) const
    { return !(*this == rhs); }
    
    void lva(lva_type a)
    { lva_ = a; }

    void lva(void* a)
    { lva_ = reinterpret_cast<lva_type>(a); }
    
    lva_type lva(naming::gid_type const& gid = naming::invalid_gid,
                 naming::gid_type const& gidbase = naming::invalid_gid) const
    {
        // Make sure that the credit has been stripped.
        naming::gid_type raw_gid = gid
                       , raw_gidbase = gidbase;
        naming::strip_credit_from_gid(raw_gid); 
        naming::strip_credit_from_gid(raw_gidbase); 

        lva_type l = lva_;
        l += (raw_gid.get_lsb() - raw_gidbase.get_lsb()) * offset;
        return l;
    }
    
    gva resolve(naming::gid_type const& gid,
                naming::gid_type const& gidbase) const
    {
        // Make sure that the credit has been stripped.
        naming::gid_type raw_gid = gid
                       , raw_gidbase = gidbase;
        naming::strip_credit_from_gid(raw_gid); 
        naming::strip_credit_from_gid(raw_gidbase); 

        gva g(*this);
        g.lva_ = g.lva(raw_gid, raw_gidbase);

        // This is a hack to make sure that if resolve() or lva() is called on
        // the returned GVA, an exact copy will be returned (see the last two
        // lines of lva() above.
        g.offset = 0;
        return g;
    }
    
    endpoint_type endpoint;
    component_type type;
    count_type count;

  private:
    lva_type lva_;

  public:
    offset_type offset; 

  private:
    friend class boost::serialization::access;

    template<class Archive>
    void save(Archive& ar, const unsigned int version) const
    { ar << endpoint << type << count << lva_ << offset; }

    template<class Archive>
    void load(Archive& ar, const unsigned int version)
    {
        if (version > traits::serialization_version<Protocol>::value) {
            throw exception(version_too_new, 
                "trying to load GVA with unknown version");
        }
        ar >> endpoint >> type >> count >> lva_ >> offset; 
    }

    BOOST_SERIALIZATION_SPLIT_MEMBER()
};

template <typename Char, typename Traits, typename Protocol>
inline std::basic_ostream<Char, Traits>&
operator<< (std::basic_ostream<Char, Traits>& os, gva<Protocol> const& addr)
{
    boost::io::ios_flags_saver ifs(os); 
    os << "(" << traits::network::name<Protocol>() << " "
       << addr.endpoint << " " 
       << components::get_component_type_name(addr.type) << " "
       << addr.count << " "
       << std::showbase << std::hex << addr.lva() << " "
       << addr.offset << ")"; 
    return os;
} 

}}

#endif // HPX_83DB815F_26D5_4525_AC5B_E702FBD886D4

