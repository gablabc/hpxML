// Copyright (c) 2007-2012 Hartmut Kaiser
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

// This file has been automatically generated using the Boost.Wave tool.
// Do not edit manually.


    template <typename T, typename A0>
    struct ctor_fun<T, A0>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0)
            : a0(boost::forward<Arg0>(arg0))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1>
    struct ctor_fun<T, A0 , A1>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2>
    struct ctor_fun<T, A0 , A1 , A2>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3>
    struct ctor_fun<T, A0 , A1 , A2 , A3>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23 , typename Arg24>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23 , BOOST_FWD_REF(Arg24) arg24)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23)) , a24(boost::forward<Arg24>(arg24))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23) , a24(rhs. a24)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23)) , a24(boost::move(rhs. a24))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23; a24 = rhs.a24;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23); a24 = boost::move(rhs.a24);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23; ar & a24;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23; typename hpx::util::detail::remove_reference<A24>::type a24;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23 , typename Arg24 , typename Arg25>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23 , BOOST_FWD_REF(Arg24) arg24 , BOOST_FWD_REF(Arg25) arg25)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23)) , a24(boost::forward<Arg24>(arg24)) , a25(boost::forward<Arg25>(arg25))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23) , a24(rhs. a24) , a25(rhs. a25)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23)) , a24(boost::move(rhs. a24)) , a25(boost::move(rhs. a25))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23; a24 = rhs.a24; a25 = rhs.a25;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23); a24 = boost::move(rhs.a24); a25 = boost::move(rhs.a25);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23; ar & a24; ar & a25;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23; typename hpx::util::detail::remove_reference<A24>::type a24; typename hpx::util::detail::remove_reference<A25>::type a25;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23 , typename Arg24 , typename Arg25 , typename Arg26>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23 , BOOST_FWD_REF(Arg24) arg24 , BOOST_FWD_REF(Arg25) arg25 , BOOST_FWD_REF(Arg26) arg26)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23)) , a24(boost::forward<Arg24>(arg24)) , a25(boost::forward<Arg25>(arg25)) , a26(boost::forward<Arg26>(arg26))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23) , a24(rhs. a24) , a25(rhs. a25) , a26(rhs. a26)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23)) , a24(boost::move(rhs. a24)) , a25(boost::move(rhs. a25)) , a26(boost::move(rhs. a26))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23; a24 = rhs.a24; a25 = rhs.a25; a26 = rhs.a26;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23); a24 = boost::move(rhs.a24); a25 = boost::move(rhs.a25); a26 = boost::move(rhs.a26);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23; ar & a24; ar & a25; ar & a26;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23; typename hpx::util::detail::remove_reference<A24>::type a24; typename hpx::util::detail::remove_reference<A25>::type a25; typename hpx::util::detail::remove_reference<A26>::type a26;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23 , typename Arg24 , typename Arg25 , typename Arg26 , typename Arg27>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23 , BOOST_FWD_REF(Arg24) arg24 , BOOST_FWD_REF(Arg25) arg25 , BOOST_FWD_REF(Arg26) arg26 , BOOST_FWD_REF(Arg27) arg27)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23)) , a24(boost::forward<Arg24>(arg24)) , a25(boost::forward<Arg25>(arg25)) , a26(boost::forward<Arg26>(arg26)) , a27(boost::forward<Arg27>(arg27))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23) , a24(rhs. a24) , a25(rhs. a25) , a26(rhs. a26) , a27(rhs. a27)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23)) , a24(boost::move(rhs. a24)) , a25(boost::move(rhs. a25)) , a26(boost::move(rhs. a26)) , a27(boost::move(rhs. a27))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23; a24 = rhs.a24; a25 = rhs.a25; a26 = rhs.a26; a27 = rhs.a27;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23); a24 = boost::move(rhs.a24); a25 = boost::move(rhs.a25); a26 = boost::move(rhs.a26); a27 = boost::move(rhs.a27);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26 , a27);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23; ar & a24; ar & a25; ar & a26; ar & a27;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23; typename hpx::util::detail::remove_reference<A24>::type a24; typename hpx::util::detail::remove_reference<A25>::type a25; typename hpx::util::detail::remove_reference<A26>::type a26; typename hpx::util::detail::remove_reference<A27>::type a27;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23 , typename Arg24 , typename Arg25 , typename Arg26 , typename Arg27 , typename Arg28>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23 , BOOST_FWD_REF(Arg24) arg24 , BOOST_FWD_REF(Arg25) arg25 , BOOST_FWD_REF(Arg26) arg26 , BOOST_FWD_REF(Arg27) arg27 , BOOST_FWD_REF(Arg28) arg28)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23)) , a24(boost::forward<Arg24>(arg24)) , a25(boost::forward<Arg25>(arg25)) , a26(boost::forward<Arg26>(arg26)) , a27(boost::forward<Arg27>(arg27)) , a28(boost::forward<Arg28>(arg28))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23) , a24(rhs. a24) , a25(rhs. a25) , a26(rhs. a26) , a27(rhs. a27) , a28(rhs. a28)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23)) , a24(boost::move(rhs. a24)) , a25(boost::move(rhs. a25)) , a26(boost::move(rhs. a26)) , a27(boost::move(rhs. a27)) , a28(boost::move(rhs. a28))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23; a24 = rhs.a24; a25 = rhs.a25; a26 = rhs.a26; a27 = rhs.a27; a28 = rhs.a28;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23); a24 = boost::move(rhs.a24); a25 = boost::move(rhs.a25); a26 = boost::move(rhs.a26); a27 = boost::move(rhs.a27); a28 = boost::move(rhs.a28);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26 , a27 , a28);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23; ar & a24; ar & a25; ar & a26; ar & a27; ar & a28;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23; typename hpx::util::detail::remove_reference<A24>::type a24; typename hpx::util::detail::remove_reference<A25>::type a25; typename hpx::util::detail::remove_reference<A26>::type a26; typename hpx::util::detail::remove_reference<A27>::type a27; typename hpx::util::detail::remove_reference<A28>::type a28;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
    template <typename T, typename A0 , typename A1 , typename A2 , typename A3 , typename A4 , typename A5 , typename A6 , typename A7 , typename A8 , typename A9 , typename A10 , typename A11 , typename A12 , typename A13 , typename A14 , typename A15 , typename A16 , typename A17 , typename A18 , typename A19 , typename A20 , typename A21 , typename A22 , typename A23 , typename A24 , typename A25 , typename A26 , typename A27 , typename A28 , typename A29>
    struct ctor_fun<T, A0 , A1 , A2 , A3 , A4 , A5 , A6 , A7 , A8 , A9 , A10 , A11 , A12 , A13 , A14 , A15 , A16 , A17 , A18 , A19 , A20 , A21 , A22 , A23 , A24 , A25 , A26 , A27 , A28 , A29>
    {
        typedef void result_type;
        ctor_fun() {}
        template <typename Arg0 , typename Arg1 , typename Arg2 , typename Arg3 , typename Arg4 , typename Arg5 , typename Arg6 , typename Arg7 , typename Arg8 , typename Arg9 , typename Arg10 , typename Arg11 , typename Arg12 , typename Arg13 , typename Arg14 , typename Arg15 , typename Arg16 , typename Arg17 , typename Arg18 , typename Arg19 , typename Arg20 , typename Arg21 , typename Arg22 , typename Arg23 , typename Arg24 , typename Arg25 , typename Arg26 , typename Arg27 , typename Arg28 , typename Arg29>
        ctor_fun(BOOST_FWD_REF(Arg0) arg0 , BOOST_FWD_REF(Arg1) arg1 , BOOST_FWD_REF(Arg2) arg2 , BOOST_FWD_REF(Arg3) arg3 , BOOST_FWD_REF(Arg4) arg4 , BOOST_FWD_REF(Arg5) arg5 , BOOST_FWD_REF(Arg6) arg6 , BOOST_FWD_REF(Arg7) arg7 , BOOST_FWD_REF(Arg8) arg8 , BOOST_FWD_REF(Arg9) arg9 , BOOST_FWD_REF(Arg10) arg10 , BOOST_FWD_REF(Arg11) arg11 , BOOST_FWD_REF(Arg12) arg12 , BOOST_FWD_REF(Arg13) arg13 , BOOST_FWD_REF(Arg14) arg14 , BOOST_FWD_REF(Arg15) arg15 , BOOST_FWD_REF(Arg16) arg16 , BOOST_FWD_REF(Arg17) arg17 , BOOST_FWD_REF(Arg18) arg18 , BOOST_FWD_REF(Arg19) arg19 , BOOST_FWD_REF(Arg20) arg20 , BOOST_FWD_REF(Arg21) arg21 , BOOST_FWD_REF(Arg22) arg22 , BOOST_FWD_REF(Arg23) arg23 , BOOST_FWD_REF(Arg24) arg24 , BOOST_FWD_REF(Arg25) arg25 , BOOST_FWD_REF(Arg26) arg26 , BOOST_FWD_REF(Arg27) arg27 , BOOST_FWD_REF(Arg28) arg28 , BOOST_FWD_REF(Arg29) arg29)
            : a0(boost::forward<Arg0>(arg0)) , a1(boost::forward<Arg1>(arg1)) , a2(boost::forward<Arg2>(arg2)) , a3(boost::forward<Arg3>(arg3)) , a4(boost::forward<Arg4>(arg4)) , a5(boost::forward<Arg5>(arg5)) , a6(boost::forward<Arg6>(arg6)) , a7(boost::forward<Arg7>(arg7)) , a8(boost::forward<Arg8>(arg8)) , a9(boost::forward<Arg9>(arg9)) , a10(boost::forward<Arg10>(arg10)) , a11(boost::forward<Arg11>(arg11)) , a12(boost::forward<Arg12>(arg12)) , a13(boost::forward<Arg13>(arg13)) , a14(boost::forward<Arg14>(arg14)) , a15(boost::forward<Arg15>(arg15)) , a16(boost::forward<Arg16>(arg16)) , a17(boost::forward<Arg17>(arg17)) , a18(boost::forward<Arg18>(arg18)) , a19(boost::forward<Arg19>(arg19)) , a20(boost::forward<Arg20>(arg20)) , a21(boost::forward<Arg21>(arg21)) , a22(boost::forward<Arg22>(arg22)) , a23(boost::forward<Arg23>(arg23)) , a24(boost::forward<Arg24>(arg24)) , a25(boost::forward<Arg25>(arg25)) , a26(boost::forward<Arg26>(arg26)) , a27(boost::forward<Arg27>(arg27)) , a28(boost::forward<Arg28>(arg28)) , a29(boost::forward<Arg29>(arg29))
        {}
        ctor_fun(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
            : a0(rhs. a0) , a1(rhs. a1) , a2(rhs. a2) , a3(rhs. a3) , a4(rhs. a4) , a5(rhs. a5) , a6(rhs. a6) , a7(rhs. a7) , a8(rhs. a8) , a9(rhs. a9) , a10(rhs. a10) , a11(rhs. a11) , a12(rhs. a12) , a13(rhs. a13) , a14(rhs. a14) , a15(rhs. a15) , a16(rhs. a16) , a17(rhs. a17) , a18(rhs. a18) , a19(rhs. a19) , a20(rhs. a20) , a21(rhs. a21) , a22(rhs. a22) , a23(rhs. a23) , a24(rhs. a24) , a25(rhs. a25) , a26(rhs. a26) , a27(rhs. a27) , a28(rhs. a28) , a29(rhs. a29)
        {}
        ctor_fun(BOOST_RV_REF(ctor_fun) rhs)
            : a0(boost::move(rhs. a0)) , a1(boost::move(rhs. a1)) , a2(boost::move(rhs. a2)) , a3(boost::move(rhs. a3)) , a4(boost::move(rhs. a4)) , a5(boost::move(rhs. a5)) , a6(boost::move(rhs. a6)) , a7(boost::move(rhs. a7)) , a8(boost::move(rhs. a8)) , a9(boost::move(rhs. a9)) , a10(boost::move(rhs. a10)) , a11(boost::move(rhs. a11)) , a12(boost::move(rhs. a12)) , a13(boost::move(rhs. a13)) , a14(boost::move(rhs. a14)) , a15(boost::move(rhs. a15)) , a16(boost::move(rhs. a16)) , a17(boost::move(rhs. a17)) , a18(boost::move(rhs. a18)) , a19(boost::move(rhs. a19)) , a20(boost::move(rhs. a20)) , a21(boost::move(rhs. a21)) , a22(boost::move(rhs. a22)) , a23(boost::move(rhs. a23)) , a24(boost::move(rhs. a24)) , a25(boost::move(rhs. a25)) , a26(boost::move(rhs. a26)) , a27(boost::move(rhs. a27)) , a28(boost::move(rhs. a28)) , a29(boost::move(rhs. a29))
        {}
        ctor_fun& operator=(BOOST_COPY_ASSIGN_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = rhs.a0; a1 = rhs.a1; a2 = rhs.a2; a3 = rhs.a3; a4 = rhs.a4; a5 = rhs.a5; a6 = rhs.a6; a7 = rhs.a7; a8 = rhs.a8; a9 = rhs.a9; a10 = rhs.a10; a11 = rhs.a11; a12 = rhs.a12; a13 = rhs.a13; a14 = rhs.a14; a15 = rhs.a15; a16 = rhs.a16; a17 = rhs.a17; a18 = rhs.a18; a19 = rhs.a19; a20 = rhs.a20; a21 = rhs.a21; a22 = rhs.a22; a23 = rhs.a23; a24 = rhs.a24; a25 = rhs.a25; a26 = rhs.a26; a27 = rhs.a27; a28 = rhs.a28; a29 = rhs.a29;
            }
            return *this;
        }
        ctor_fun& operator=(BOOST_RV_REF(ctor_fun) rhs)
        {
            if (this != &rhs) {
                a0 = boost::move(rhs.a0); a1 = boost::move(rhs.a1); a2 = boost::move(rhs.a2); a3 = boost::move(rhs.a3); a4 = boost::move(rhs.a4); a5 = boost::move(rhs.a5); a6 = boost::move(rhs.a6); a7 = boost::move(rhs.a7); a8 = boost::move(rhs.a8); a9 = boost::move(rhs.a9); a10 = boost::move(rhs.a10); a11 = boost::move(rhs.a11); a12 = boost::move(rhs.a12); a13 = boost::move(rhs.a13); a14 = boost::move(rhs.a14); a15 = boost::move(rhs.a15); a16 = boost::move(rhs.a16); a17 = boost::move(rhs.a17); a18 = boost::move(rhs.a18); a19 = boost::move(rhs.a19); a20 = boost::move(rhs.a20); a21 = boost::move(rhs.a21); a22 = boost::move(rhs.a22); a23 = boost::move(rhs.a23); a24 = boost::move(rhs.a24); a25 = boost::move(rhs.a25); a26 = boost::move(rhs.a26); a27 = boost::move(rhs.a27); a28 = boost::move(rhs.a28); a29 = boost::move(rhs.a29);
            }
            return *this;
        }
        void operator()(void ** p) const
        {
            T * t = new T(a0 , a1 , a2 , a3 , a4 , a5 , a6 , a7 , a8 , a9 , a10 , a11 , a12 , a13 , a14 , a15 , a16 , a17 , a18 , a19 , a20 , a21 , a22 , a23 , a24 , a25 , a26 , a27 , a28 , a29);
            *p = t;
        }
        template <typename Archive>
        void serialize(Archive & ar, unsigned)
        {
            ar & a0; ar & a1; ar & a2; ar & a3; ar & a4; ar & a5; ar & a6; ar & a7; ar & a8; ar & a9; ar & a10; ar & a11; ar & a12; ar & a13; ar & a14; ar & a15; ar & a16; ar & a17; ar & a18; ar & a19; ar & a20; ar & a21; ar & a22; ar & a23; ar & a24; ar & a25; ar & a26; ar & a27; ar & a28; ar & a29;
        }
        typename hpx::util::detail::remove_reference<A0>::type a0; typename hpx::util::detail::remove_reference<A1>::type a1; typename hpx::util::detail::remove_reference<A2>::type a2; typename hpx::util::detail::remove_reference<A3>::type a3; typename hpx::util::detail::remove_reference<A4>::type a4; typename hpx::util::detail::remove_reference<A5>::type a5; typename hpx::util::detail::remove_reference<A6>::type a6; typename hpx::util::detail::remove_reference<A7>::type a7; typename hpx::util::detail::remove_reference<A8>::type a8; typename hpx::util::detail::remove_reference<A9>::type a9; typename hpx::util::detail::remove_reference<A10>::type a10; typename hpx::util::detail::remove_reference<A11>::type a11; typename hpx::util::detail::remove_reference<A12>::type a12; typename hpx::util::detail::remove_reference<A13>::type a13; typename hpx::util::detail::remove_reference<A14>::type a14; typename hpx::util::detail::remove_reference<A15>::type a15; typename hpx::util::detail::remove_reference<A16>::type a16; typename hpx::util::detail::remove_reference<A17>::type a17; typename hpx::util::detail::remove_reference<A18>::type a18; typename hpx::util::detail::remove_reference<A19>::type a19; typename hpx::util::detail::remove_reference<A20>::type a20; typename hpx::util::detail::remove_reference<A21>::type a21; typename hpx::util::detail::remove_reference<A22>::type a22; typename hpx::util::detail::remove_reference<A23>::type a23; typename hpx::util::detail::remove_reference<A24>::type a24; typename hpx::util::detail::remove_reference<A25>::type a25; typename hpx::util::detail::remove_reference<A26>::type a26; typename hpx::util::detail::remove_reference<A27>::type a27; typename hpx::util::detail::remove_reference<A28>::type a28; typename hpx::util::detail::remove_reference<A29>::type a29;
    private:
        BOOST_COPYABLE_AND_MOVABLE(ctor_fun);
    };
