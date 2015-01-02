//  Copyright (c) 2014 Thomas Heller
//  Copyright (c) 2015 Anton Bikineev
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

/// \file base_object.hpp

#ifndef HPX_SERIALIZATION_BASE_OBJECT_HPP
#define HPX_SERIALIZATION_BASE_OBJECT_HPP

#include <hpx/config.hpp>

#include <hpx/serialization/serialize.hpp>
#include <hpx/serialization/string.hpp>

namespace hpx { namespace serialization {

    template <typename Derived, typename Base>
    struct base_object_type
    {
        base_object_type(Derived & d) : d_(d) {}
        Derived & d_;

        template <class Archive>
        void save(Archive & ar, unsigned) const
        {
            access::save_base_object(ar, static_cast<const Base&>(d_), 0);
        }

        template <class Archive>
        void load(Archive & ar, unsigned)
        {
            access::load_base_object(ar, static_cast<Base&>(d_), 0);
        }
        HPX_SERIALIZATION_SPLIT_MEMBER();
    };

    template <typename Base, typename Derived>
    base_object_type<Derived, Base> base_object(Derived & d)
    {
        return base_object_type<Derived, Base>(d);
    }
}}

#endif
