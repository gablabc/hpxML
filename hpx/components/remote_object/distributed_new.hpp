//  Copyright (c) 2011-2012 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#ifndef HPX_COMPONENTS_DISTRIBUTED_NEW_HPP
#define HPX_COMPONENTS_DISTRIBUTED_NEW_HPP

#include <hpx/hpx_fwd.hpp>
#include <hpx/components/remote_object/new.hpp>

namespace hpx { namespace components {

    template <typename T, typename ...Ts>
    std::vector<lcos::future<object<T> > >
    distributed_new(std::size_t count, Ts&&... vs)
    {
        hpx::components::component_type type
            = hpx::components::get_component_type<hpx::components::server::remote_object>();

        std::vector<naming::id_type> prefixes = find_all_localities(type);

        std::vector<naming::id_type>::size_type objs_per_loc = count / prefixes.size();

        std::size_t created_count = 0;
        std::size_t excess = count - objs_per_loc*prefixes.size();

        std::vector<lcos::future<object<T> > > res;

        res.reserve(count);

        BOOST_FOREACH(naming::id_type const & prefix, prefixes)
        {
            std::size_t numcreate = objs_per_loc;

            if (excess != 0) {
                --excess;
                ++numcreate;
            }

            if (created_count + numcreate > count)
                numcreate = count - created_count;

            if (numcreate == 0)
                break;

            for (std::size_t i = 0; i < numcreate; ++i) {
                res.push_back(new_<T>(prefix, std::forward<Ts>(vs)...));
            }

            created_count += numcreate;
            if (created_count >= count)
                break;
        }

        return res;
    }
}}

#endif
