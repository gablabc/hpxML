//  copyright (c) 2014 Grant Mercer
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_init.hpp>
#include <hpx/hpx.hpp>
#include <hpx/include/algorithm.hpp>
#include <hpx/util/lightweight_test.hpp>

#include "test_utils.hpp"

////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_find(ExPolicy const& policy, IteratorTag)
{
    BOOST_STATIC_ASSERT(hpx::parallel::is_execution_policy<ExPolicy>::value);

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10007);
    std::iota(boost::begin(c), boost::end(c), std::rand()+1);
    c[c.size()/2] = 0;

    iterator index = hpx::parallel::find(policy,
        iterator(boost::begin(c)), iterator(boost::end(c)), 0);

    base_iterator test_index = boost::begin(c) + c.size()/2;

    std::cout << *test_index << " " << *index << std::endl;
   

    HPX_TEST(index == iterator(test_index));
}

template <typename IteratorTag>
void test_find(hpx::parallel::task_execution_policy, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10007);
    std::iota(boost::begin(c), boost::end(c), std::rand()+1);
    c[c.size()/2] = 0;

    hpx::future<iterator> f =
        hpx::parallel::find(hpx::parallel::task,
            iterator(boost::begin(c)), iterator(boost::end(c)),
            0);
    f.wait();

    base_iterator test_index = boost::begin(c) + c.size()/2;

    HPX_TEST(f.get() == iterator(test_index));
}

template <typename IteratorTag>
void test_find()
{
    using namespace hpx::parallel;
    test_find(seq, IteratorTag());
    test_find(par, IteratorTag());
    test_find(par_vec, IteratorTag());
    test_find(task, IteratorTag());

    test_find(execution_policy(seq), IteratorTag());
    test_find(execution_policy(par), IteratorTag());
    test_find(execution_policy(par_vec), IteratorTag());
    test_find(execution_policy(task), IteratorTag());
}

void find_test()
{
    test_find<std::random_access_iterator_tag>();
    test_find<std::forward_iterator_tag>();
}

///////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_find_exception(ExPolicy const& policy, IteratorTag)
{
    BOOST_STATIC_ASSERT(hpx::parallel::is_execution_policy<ExPolicy>::value);

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;
    std::vector<std::size_t> c(10007);
    std::iota(boost::begin(c), boost::end(c), std::rand()+1);
    c[c.size()/2]=0;

    bool caught_exception = false;
    try {
        hpx::parallel::find(policy,
            decorated_iterator(
                boost::begin(c),
                [](){ throw std::runtime_error("test"); }),
            decorated_iterator(boost::end(c), [](){}),
            0);
        HPX_TEST(false);
    }
    catch(hpx::exception_list const& e) {
        caught_exception = true;
        test::test_num_exeptions<ExPolicy, IteratorTag>::call(policy, e);
    }
    catch(...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_exception);
}

template <typename IteratorTag>
void test_find_exception(hpx::parallel::task_execution_policy, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(10007);
    std::iota(boost::begin(c), boost::end(c), std::rand()+1);
    c[c.size()/2]=0;

    bool caught_exception = false;
    try {
        hpx::future<decorated_iterator> f =
            hpx::parallel::find(hpx::parallel::task,
                decorated_iterator(
                    boost::begin(c),
                    [](){ throw std::runtime_error("test"); }),
                decorated_iterator(boost::end(c), [](){}),
                0);
        f.get();

        HPX_TEST(false);
    }
    catch(hpx::exception_list const& e) {
        caught_exception = true;
        test::test_num_exeptions<
            hpx::parallel::task_execution_policy, IteratorTag
        >::call(hpx::parallel::task, e);
    }
    catch(...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_exception);
}

template <typename IteratorTag>
void test_find_exception()
{
    using namespace hpx::parallel;
    //If the execution policy object is of type vector_execution_policy,
    //  std::terminate shall be called. therefore we do not test exceptions
    //  with a vector execution policy
    test_find_exception(seq, IteratorTag());
    test_find_exception(par, IteratorTag());
    test_find_exception(task, IteratorTag());

    test_find_exception(execution_policy(seq), IteratorTag());
    test_find_exception(execution_policy(par), IteratorTag());
    test_find_exception(execution_policy(task), IteratorTag());
}

void find_exception_test()
{
    test_find_exception<std::random_access_iterator_tag>();
    test_find_exception<std::forward_iterator_tag>();
}

//////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_find_bad_alloc(ExPolicy const& policy, IteratorTag)
{
    BOOST_STATIC_ASSERT(hpx::parallel::is_execution_policy<ExPolicy>::value);

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(100007);
    std::iota(boost::begin(c), boost::end(c), std::rand()+1);
    c[c.size()/2]=0;

    bool caught_bad_alloc = false;
    try {
        hpx::parallel::find(policy,
            decorated_iterator(
                boost::begin(c),
                [](){ throw std::bad_alloc(); }),
            decorated_iterator(boost::end(c), [](){}),
            0);
        HPX_TEST(false);
    }
    catch(std::bad_alloc const&) {
        caught_bad_alloc = true;
    }
    catch(...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_bad_alloc);
}

template <typename IteratorTag>
void test_find_bad_alloc(hpx::parallel::task_execution_policy, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(10007);
    std::iota(boost::begin(c), boost::end(c), std::rand()+1);
    c[c.size()/2] = 0;

    bool caught_bad_alloc = false;
    try {
        hpx::future<decorated_iterator> f =
            hpx::parallel::find(hpx::parallel::task,
                decorated_iterator(
                    boost::begin(c),
                    [](){ throw std::bad_alloc(); }),
                decorated_iterator(boost::end(c), [](){}),
                0);

        f.get();

        HPX_TEST(false);
    }
    catch(std::bad_alloc const&) {
        caught_bad_alloc = true;
    }
    catch(...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_bad_alloc);
}

template <typename IteratorTag>
void test_find_bad_alloc()
{
    using namespace hpx::parallel;
    //If the execution policy object is of type vector_execution_policy,
    //  std::terminate shall be called. therefore we do not test exceptions
    //  with a vector execution policy
    test_find_bad_alloc(seq, IteratorTag());
    test_find_bad_alloc(par, IteratorTag());
    test_find_bad_alloc(task, IteratorTag());

    test_find_bad_alloc(execution_policy(seq), IteratorTag());
    test_find_bad_alloc(execution_policy(par), IteratorTag());
    test_find_bad_alloc(execution_policy(task), IteratorTag());
}

void find_bad_alloc_test()
{
    test_find_bad_alloc<std::random_access_iterator_tag>();
    test_find_bad_alloc<std::forward_iterator_tag>();
}

int hpx_main()
{
    find_test();
    find_exception_test();
    find_bad_alloc_test();
    return hpx::finalize();
}

int main(int argc, char* argv[])
{
    std::vector<std::string> cfg;
    cfg.push_back("hpx.os_threads=" +
        boost::lexical_cast<std::string>(hpx::threads::hardware_concurrency()));

    HPX_TEST_EQ_MSG(hpx::init(argc, argv, cfg), 0,
        "HPX main exited with non-zero status");

    return hpx::util::report_errors();

}