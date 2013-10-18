// Copyright (c) 2007-2013 Hartmut Kaiser
// Copyright (c) 2012-2013 Thomas Heller
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor1;
            template < typename F , typename A0 , typename Arg0 > struct bound_functor1< F(A0) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 > struct bound_functor1< F(A0 , A1) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3 , A4) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 > struct bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0
            >
            struct bound_functor1<
                F()
              , Arg0, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0
            >
            struct bound_functor1<
                F()
              , Arg0
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0
        >
        struct bound_functor1
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor1<
                        F()
                      , Arg0
                    >::type
                    type;
            };
            
            bound_functor1()
            {}
            template <typename A0>
            bound_functor1(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0))
            {}
            template <typename A0>
            bound_functor1(
                F const & f_
              , BOOST_FWD_REF(A0) a0
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0))
            {}
            bound_functor1(
                    bound_functor1 const & other)
                : f(other.f)
                , arg0(other.arg0)
            {}
            bound_functor1(
                    BOOST_RV_REF(bound_functor1) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor1<
                F()
              , Arg0
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor1<
                F()
              , Arg0
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor1< F(A0), Arg0, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor1< F(A0 , A1), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor1< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0)); }
            typename decay<Arg0>::type arg0;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0
            >
            struct eval<
                Env
              , detail::bound_functor1<
                    F
                  , Arg0
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor1<
                                F
                              , Arg0
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor1<
                    F
                  , Arg0
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor1<
                F
              , Arg0
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor1<
                        F
                      , Arg0
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor1<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_functor1<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor1<
            F
          , Arg0
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0
    >
    struct result_of<
        hpx::util::detail::bound_functor1<
            F
          , Arg0
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor1<
                    F()
                  , Arg0
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor1<
            F, Arg0
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0;
    }
    template <typename F, typename Arg0>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor1<
            F, Arg0
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0
      , typename A0
    >
    detail::bound_functor1<
        R(*)(T0)
      , typename util::remove_reference<A0>::type
    >
    bind(
        R(*f)(T0)
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_functor1<
                R(*)(T0)
              , typename util::remove_reference<A0>::type
            >
            (f, boost::forward<A0>( a0 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , 
       typename A0
    >
    detail::bound_functor1<
        detail::mem_fn<
            R(C::*)()
        >
        , typename util::remove_reference<A0>::type
    >
    bind(
        R(C::*f)()
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_functor1<
                detail::mem_fn<
                    R(C::*)()
                >
                , typename util::remove_reference<A0>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ));
    }
    template <
        typename R
      , typename C
      , 
       typename A0
    >
    detail::bound_functor1<
        detail::mem_fn<
            R(C::*)() const
        >
        , typename util::remove_reference<A0>::type
    >
    bind(
        R(C::*f)() const
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_functor1<
                detail::mem_fn<
                    R(C::*)() const
                >
                , typename util::remove_reference<A0>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename A0
    >
    detail::bound_functor1<
        detail::mem_fn<
            R C::*
        >
        , typename util::remove_reference<A0>::type
    >
    bind(
        R C::*f
      , BOOST_FWD_REF(A0) a0
    )
    {
        return
            detail::bound_functor1<
                detail::mem_fn<
                    R C::*
                >
                , typename util::remove_reference<A0>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor2;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 > struct bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1
            >
            struct bound_functor2<
                F()
              , Arg0 , Arg1, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1
            >
            struct bound_functor2<
                F()
              , Arg0 , Arg1
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1
        >
        struct bound_functor2
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor2<
                        F()
                      , Arg0 , Arg1
                    >::type
                    type;
            };
            
            bound_functor2()
            {}
            template <typename A0 , typename A1>
            bound_functor2(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            template <typename A0 , typename A1>
            bound_functor2(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1))
            {}
            bound_functor2(
                    bound_functor2 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1)
            {}
            bound_functor2(
                    BOOST_RV_REF(bound_functor2) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor2<
                F()
              , Arg0 , Arg1
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor2<
                F()
              , Arg0 , Arg1
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor2< F(A0), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor2< F(A0 , A1), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor2< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1
            >
            struct eval<
                Env
              , detail::bound_functor2<
                    F
                  , Arg0 , Arg1
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor2<
                                F
                              , Arg0 , Arg1
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor2<
                    F
                  , Arg0 , Arg1
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor2<
                F
              , Arg0 , Arg1
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor2<
                        F
                      , Arg0 , Arg1
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor2<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_functor2<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor2<
            F
          , Arg0 , Arg1
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1
    >
    struct result_of<
        hpx::util::detail::bound_functor2<
            F
          , Arg0 , Arg1
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor2<
                    F()
                  , Arg0 , Arg1
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor2<
            F, Arg0 , Arg1
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1;
    }
    template <typename F, typename Arg0 , typename Arg1>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor2<
            F, Arg0 , Arg1
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1
      , typename A0 , typename A1
    >
    detail::bound_functor2<
        R(*)(T0 , T1)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
    >
    bind(
        R(*f)(T0 , T1)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_functor2<
                R(*)(T0 , T1)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0
      , typename A0 , typename A1
    >
    detail::bound_functor2<
        detail::mem_fn<
            R(C::*)(T0)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
    >
    bind(
        R(C::*f)(T0)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_functor2<
                detail::mem_fn<
                    R(C::*)(T0)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
    }
    template <
        typename R
      , typename C
      , typename T0
      , typename A0 , typename A1
    >
    detail::bound_functor2<
        detail::mem_fn<
            R(C::*)(T0) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
    >
    bind(
        R(C::*f)(T0) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1
    )
    {
        return
            detail::bound_functor2<
                detail::mem_fn<
                    R(C::*)(T0) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor3;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg2>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg2>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg2>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg2>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg2>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg2>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 > struct bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg2>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg2>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        struct bound_functor3
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor3<
                        F()
                      , Arg0 , Arg1 , Arg2
                    >::type
                    type;
            };
            
            bound_functor3()
            {}
            template <typename A0 , typename A1 , typename A2>
            bound_functor3(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            template <typename A0 , typename A1 , typename A2>
            bound_functor3(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2))
            {}
            bound_functor3(
                    bound_functor3 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2)
            {}
            bound_functor3(
                    BOOST_RV_REF(bound_functor3) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor3<
                F()
              , Arg0 , Arg1 , Arg2
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor3< F(A0), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor3< F(A0 , A1), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor3< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1; typename decay<Arg2>::type arg2;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2
            >
            struct eval<
                Env
              , detail::bound_functor3<
                    F
                  , Arg0 , Arg1 , Arg2
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor3<
                                F
                              , Arg0 , Arg1 , Arg2
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor3<
                    F
                  , Arg0 , Arg1 , Arg2
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor3<
                F
              , Arg0 , Arg1 , Arg2
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor3<
                        F
                      , Arg0 , Arg1 , Arg2
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor3<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_functor3<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor3<
            F
          , Arg0 , Arg1 , Arg2
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2
    >
    struct result_of<
        hpx::util::detail::bound_functor3<
            F
          , Arg0 , Arg1 , Arg2
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor3<
                    F()
                  , Arg0 , Arg1 , Arg2
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor3<
            F, Arg0 , Arg1 , Arg2
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor3<
            F, Arg0 , Arg1 , Arg2
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1 , typename T2
      , typename A0 , typename A1 , typename A2
    >
    detail::bound_functor3<
        R(*)(T0 , T1 , T2)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
    >
    bind(
        R(*f)(T0 , T1 , T2)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_functor3<
                R(*)(T0 , T1 , T2)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0 , typename T1
      , typename A0 , typename A1 , typename A2
    >
    detail::bound_functor3<
        detail::mem_fn<
            R(C::*)(T0 , T1)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
    >
    bind(
        R(C::*f)(T0 , T1)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_functor3<
                detail::mem_fn<
                    R(C::*)(T0 , T1)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1
      , typename A0 , typename A1 , typename A2
    >
    detail::bound_functor3<
        detail::mem_fn<
            R(C::*)(T0 , T1) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
    >
    bind(
        R(C::*f)(T0 , T1) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2
    )
    {
        return
            detail::bound_functor3<
                detail::mem_fn<
                    R(C::*)(T0 , T1) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor4;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg3>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg3>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg3>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg3>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg3>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg3>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 > struct bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg3>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg3>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        struct bound_functor4
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor4<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3
                    >::type
                    type;
            };
            
            bound_functor4()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_functor4(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3>
            bound_functor4(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3))
            {}
            bound_functor4(
                    bound_functor4 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3)
            {}
            bound_functor4(
                    BOOST_RV_REF(bound_functor4) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor4<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor4< F(A0), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor4< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor4< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1; typename decay<Arg2>::type arg2; typename decay<Arg3>::type arg3;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
            >
            struct eval<
                Env
              , detail::bound_functor4<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor4<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor4<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor4<
                F
              , Arg0 , Arg1 , Arg2 , Arg3
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor4<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor4<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_functor4<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor4<
            F
          , Arg0 , Arg1 , Arg2 , Arg3
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3
    >
    struct result_of<
        hpx::util::detail::bound_functor4<
            F
          , Arg0 , Arg1 , Arg2 , Arg3
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor4<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor4<
            F, Arg0 , Arg1 , Arg2 , Arg3
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor4<
            F, Arg0 , Arg1 , Arg2 , Arg3
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    detail::bound_functor4<
        R(*)(T0 , T1 , T2 , T3)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_functor4<
                R(*)(T0 , T1 , T2 , T3)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    detail::bound_functor4<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_functor4<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2
      , typename A0 , typename A1 , typename A2 , typename A3
    >
    detail::bound_functor4<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3
    )
    {
        return
            detail::bound_functor4<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor5;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg4>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg4>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg4>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg4>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg4>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg4>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 > struct bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg4>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg4>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        struct bound_functor5
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor5<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                    >::type
                    type;
            };
            
            bound_functor5()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_functor5(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
            bound_functor5(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4))
            {}
            bound_functor5(
                    bound_functor5 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4)
            {}
            bound_functor5(
                    BOOST_RV_REF(bound_functor5) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor5<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor5< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor5< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor5< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1; typename decay<Arg2>::type arg2; typename decay<Arg3>::type arg3; typename decay<Arg4>::type arg4;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
            >
            struct eval<
                Env
              , detail::bound_functor5<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor5<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor5<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor5<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor5<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor5<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_functor5<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor5<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4
    >
    struct result_of<
        hpx::util::detail::bound_functor5<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor5<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor5<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor5<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    detail::bound_functor5<
        R(*)(T0 , T1 , T2 , T3 , T4)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_functor5<
                R(*)(T0 , T1 , T2 , T3 , T4)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    detail::bound_functor5<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_functor5<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4
    >
    detail::bound_functor5<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4
    )
    {
        return
            detail::bound_functor5<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor6;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg5>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg5>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg5>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg5>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg5>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg5>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 > struct bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg5>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg5>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        struct bound_functor6
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor6<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                    >::type
                    type;
            };
            
            bound_functor6()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_functor6(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
            bound_functor6(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5))
            {}
            bound_functor6(
                    bound_functor6 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5)
            {}
            bound_functor6(
                    BOOST_RV_REF(bound_functor6) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor6<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor6< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor6< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor6< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1; typename decay<Arg2>::type arg2; typename decay<Arg3>::type arg3; typename decay<Arg4>::type arg4; typename decay<Arg5>::type arg5;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
            >
            struct eval<
                Env
              , detail::bound_functor6<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor6<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor6<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor6<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor6<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor6<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_functor6<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor6<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5
    >
    struct result_of<
        hpx::util::detail::bound_functor6<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor6<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor6<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor6<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    detail::bound_functor6<
        R(*)(T0 , T1 , T2 , T3 , T4 , T5)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4 , T5)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_functor6<
                R(*)(T0 , T1 , T2 , T3 , T4 , T5)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    detail::bound_functor6<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3 , T4)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_functor6<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3 , T4)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5
    >
    detail::bound_functor6<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3 , T4) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5
    )
    {
        return
            detail::bound_functor6<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3 , T4) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor7;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg6>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg6>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg6>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg6>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg6>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg6>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 > struct bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg6>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg6>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        struct bound_functor7
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor7<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                    >::type
                    type;
            };
            
            bound_functor7()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_functor7(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
            bound_functor7(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6))
            {}
            bound_functor7(
                    bound_functor7 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6)
            {}
            bound_functor7(
                    BOOST_RV_REF(bound_functor7) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor7<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor7< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor7< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor7< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1; typename decay<Arg2>::type arg2; typename decay<Arg3>::type arg3; typename decay<Arg4>::type arg4; typename decay<Arg5>::type arg5; typename decay<Arg6>::type arg6;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
            >
            struct eval<
                Env
              , detail::bound_functor7<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor7<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor7<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor7<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor7<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor7<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_functor7<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor7<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6
    >
    struct result_of<
        hpx::util::detail::bound_functor7<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor7<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor7<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor7<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    detail::bound_functor7<
        R(*)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_functor7<
                R(*)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    detail::bound_functor7<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3 , T4 , T5)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_functor7<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3 , T4 , T5)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6
    >
    detail::bound_functor7<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3 , T4 , T5) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6
    )
    {
        return
            detail::bound_functor7<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3 , T4 , T5) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ));
    }
}}
namespace hpx { namespace util
{
    namespace detail
    {
        namespace result_of
        {
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
              , typename Enable = typename boost::mpl::fold<
                    boost::mpl::vector<Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7>
                  , boost::mpl::false_
                  , boost::mpl::or_<
                        placeholders::is_placeholder<boost::mpl::_2>
                      , boost::mpl::_1
                    >
                >::type
            >
            struct bound_functor8;
            template < typename F , typename A0 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type >)) , typename decay<Arg7>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type >)) , typename decay<Arg7>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type >)) , typename decay<Arg7>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type >)) , typename decay<Arg7>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3 , A4) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type >)) , typename decay<Arg7>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type >)) , typename decay<Arg7>::type >::type ) >::type type; }; template < typename F , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 > struct bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6) , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7 , boost::mpl::false_ > { typedef typename util::invoke_result_of< typename boost::remove_reference< typename detail::result_of::eval< hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > , F >::type >::type( typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( (hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type >)) , typename decay<Arg7>::type >::type ) >::type type; };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>
            {
                typedef
                    typename util::invoke_result_of<
                        typename boost::remove_reference<
                            typename detail::result_of::eval<
                                hpx::util::tuple<>
                              , F
                            >::type
                        >::type(
                            typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg0>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg1>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg2>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg3>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg4>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg5>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg6>::type >::type , typename detail::result_of::eval< HPX_UTIL_STRIP( hpx::util::tuple<>) , typename decay<Arg7>::type >::type
                        )
                    >::type
                    type;
            };
            template <
                typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
              , boost::mpl::true_
            >
            {
                typedef
                    detail::not_enough_parameters
                    type;
            };
        }
        template <
            typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        struct bound_functor8
        {
            F f;
            template <typename Sig>
            struct result;
            template <typename This>
            struct result<This()>
            {
                typedef
                    typename result_of::bound_functor8<
                        F()
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                    >::type
                    type;
            };
            
            bound_functor8()
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_functor8(
                BOOST_RV_REF(F) f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(boost::move(f_))
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
            bound_functor8(
                F const & f_
              , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
            )
                : f(f_)
                , arg0(boost::forward<A0>(a0)) , arg1(boost::forward<A1>(a1)) , arg2(boost::forward<A2>(a2)) , arg3(boost::forward<A3>(a3)) , arg4(boost::forward<A4>(a4)) , arg5(boost::forward<A5>(a5)) , arg6(boost::forward<A6>(a6)) , arg7(boost::forward<A7>(a7))
            {}
            bound_functor8(
                    bound_functor8 const & other)
                : f(other.f)
                , arg0(other.arg0) , arg1(other.arg1) , arg2(other.arg2) , arg3(other.arg3) , arg4(other.arg4) , arg5(other.arg5) , arg6(other.arg6) , arg7(other.arg7)
            {}
            bound_functor8(
                    BOOST_RV_REF(bound_functor8) other)
                : f(boost::move(other.f))
                , arg0(boost::move(other.arg0)) , arg1(boost::move(other.arg1)) , arg2(boost::move(other.arg2)) , arg3(boost::move(other.arg3)) , arg4(boost::move(other.arg4)) , arg5(boost::move(other.arg5)) , arg6(boost::move(other.arg6)) , arg7(boost::move(other.arg7))
            {}
            BOOST_FORCEINLINE
            typename result_of::bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            >::type
            operator()()
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            BOOST_FORCEINLINE
            typename result_of::bound_functor8<
                F()
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            >::type
            operator()() const
            {
                typedef hpx::util::tuple<> env_type;
                env_type env;
                return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7));
            }
            template <typename This, typename A0> struct result<This(A0)> { typedef typename result_of::bound_functor8< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type > env_type; env_type env(boost::forward<A0>( a0 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1> struct result<This(A0 , A1)> { typedef typename result_of::bound_functor8< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2> struct result<This(A0 , A1 , A2)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3> struct result<This(A0 , A1 , A2 , A3)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4> struct result<This(A0 , A1 , A2 , A3 , A4)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> struct result<This(A0 , A1 , A2 , A3 , A4 , A5)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename This, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> struct result<This(A0 , A1 , A2 , A3 , A4 , A5 , A6)> { typedef typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type type; }; template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) const { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); } template <typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6> BOOST_FORCEINLINE typename result_of::bound_functor8< F(A0 , A1 , A2 , A3 , A4 , A5 , A6), Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7, boost::mpl::false_>::type operator()(BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6) { typedef hpx::util::tuple< typename detail::env_value_type<A0>::type , typename detail::env_value_type<A1>::type , typename detail::env_value_type<A2>::type , typename detail::env_value_type<A3>::type , typename detail::env_value_type<A4>::type , typename detail::env_value_type<A5>::type , typename detail::env_value_type<A6>::type > env_type; env_type env(boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 )); return util::invoke(f, ::hpx::util::detail::eval(env, arg0) , ::hpx::util::detail::eval(env, arg1) , ::hpx::util::detail::eval(env, arg2) , ::hpx::util::detail::eval(env, arg3) , ::hpx::util::detail::eval(env, arg4) , ::hpx::util::detail::eval(env, arg5) , ::hpx::util::detail::eval(env, arg6) , ::hpx::util::detail::eval(env, arg7)); }
            typename decay<Arg0>::type arg0; typename decay<Arg1>::type arg1; typename decay<Arg2>::type arg2; typename decay<Arg3>::type arg3; typename decay<Arg4>::type arg4; typename decay<Arg5>::type arg5; typename decay<Arg6>::type arg6; typename decay<Arg7>::type arg7;
        };
        namespace result_of
        {
            template <typename Env
              , typename F
              , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
            >
            struct eval<
                Env
              , detail::bound_functor8<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >
            >
            {
                typedef
                    typename boost::result_of<
                        boost::fusion::fused<
                            detail::bound_functor8<
                                F
                              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                            >
                        >(Env &)
                    >::type
                    type;
            };
        }
        template <
            typename Env
          , typename F
          , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
        >
        typename boost::result_of<
            boost::fusion::fused<
                detail::bound_functor8<
                    F
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >
            >(Env &)
        >::type
        eval(
            Env & env
          , detail::bound_functor8<
                F
              , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
            > const & f
        )
        {
            return
                boost::fusion::fused<
                    detail::bound_functor8<
                        F
                      , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                    >
                >(f)(
                    env
                 );
        }
    }
    template <typename F
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    typename boost::disable_if<
        hpx::traits::is_action<typename util::remove_reference<F>::type>
      , detail::bound_functor8<
            typename util::decay<F>::type
          , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
        >
    >::type
    bind(
        BOOST_FWD_REF(F) f
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_functor8<
                typename util::decay<F>::type
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
            >(
                boost::forward<F>(f)
              , boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 )
            );
    }
}}
namespace hpx { namespace traits
{
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
    >
    struct is_bind_expression<
        hpx::util::detail::bound_functor8<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >
    > : boost::mpl::true_
    {};
}}
namespace boost {
    template <
        typename F
      , typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7
    >
    struct result_of<
        hpx::util::detail::bound_functor8<
            F
          , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >()
    >
    {
        typedef
            typename hpx::util::detail::result_of::
                bound_functor8<
                    F()
                  , Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
                >::type
            type;
    };
}
namespace boost { namespace serialization
{
    
    
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    void serialize(hpx::util::portable_binary_iarchive& ar
      , hpx::util::detail::bound_functor8<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6; ar & bound.arg7;
    }
    template <typename F, typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
    void serialize(hpx::util::portable_binary_oarchive& ar
      , hpx::util::detail::bound_functor8<
            F, Arg0 , Arg1 , Arg2 , Arg3 , Arg4 , Arg5 , Arg6 , Arg7
        >& bound
      , unsigned int const)
    {
        ar & bound.f;
        ar & bound.arg0; ar & bound.arg1; ar & bound.arg2; ar & bound.arg3; ar & bound.arg4; ar & bound.arg5; ar & bound.arg6; ar & bound.arg7;
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6 , typename T7
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    detail::bound_functor8<
        R(*)(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7)
      , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
    >
    bind(
        R(*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_functor8<
                R(*)(T0 , T1 , T2 , T3 , T4 , T5 , T6 , T7)
              , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
            >
            (f, boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
    }
}}
namespace hpx { namespace util
{
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    detail::bound_functor8<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_functor8<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3 , T4 , T5 , T6)
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
    }
    template <
        typename R
      , typename C
      , typename T0 , typename T1 , typename T2 , typename T3 , typename T4 , typename T5 , typename T6
      , typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7
    >
    detail::bound_functor8<
        detail::mem_fn<
            R(C::*)(T0 , T1 , T2 , T3 , T4 , T5 , T6) const
        >
        , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
    >
    bind(
        R(C::*f)(T0 , T1 , T2 , T3 , T4 , T5 , T6) const
      , BOOST_FWD_REF(A0) a0 , BOOST_FWD_REF(A1) a1 , BOOST_FWD_REF(A2) a2 , BOOST_FWD_REF(A3) a3 , BOOST_FWD_REF(A4) a4 , BOOST_FWD_REF(A5) a5 , BOOST_FWD_REF(A6) a6 , BOOST_FWD_REF(A7) a7
    )
    {
        return
            detail::bound_functor8<
                detail::mem_fn<
                    R(C::*)(T0 , T1 , T2 , T3 , T4 , T5 , T6) const
                >
                , typename util::remove_reference<A0>::type , typename util::remove_reference<A1>::type , typename util::remove_reference<A2>::type , typename util::remove_reference<A3>::type , typename util::remove_reference<A4>::type , typename util::remove_reference<A5>::type , typename util::remove_reference<A6>::type , typename util::remove_reference<A7>::type
            >
            (util::mem_fn(f), boost::forward<A0>( a0 ) , boost::forward<A1>( a1 ) , boost::forward<A2>( a2 ) , boost::forward<A3>( a3 ) , boost::forward<A4>( a4 ) , boost::forward<A5>( a5 ) , boost::forward<A6>( a6 ) , boost::forward<A7>( a7 ));
    }
}}
