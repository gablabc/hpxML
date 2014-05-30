//  Copyright (c) 2014 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_init.hpp>
#include <hpx/hpx.hpp>
#include <hpx/include/algorithm.hpp>
#include <hpx/util/lightweight_test.hpp>

#include "test_iterator.hpp"

///////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_transform(ExPolicy const& policy, IteratorTag)
{
    BOOST_STATIC_ASSERT(hpx::parallel::is_execution_policy<ExPolicy>::value);

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10000);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), std::rand());

    hpx::parallel::transform(policy,
        iterator(boost::begin(c)), iterator(boost::end(c)), boost::begin(d),
        [](std::size_t& v) {
            return v + 1;
        });

    // verify values
    std::size_t count = 0;
    HPX_TEST(std::equal(boost::begin(c), boost::end(c), boost::begin(d),
        [&count](std::size_t v1, std::size_t v2) {
            HPX_TEST_EQ(v1 + 1, v2);
            ++count;
            return v1 + 1 == v2;
        }));
    HPX_TEST_EQ(count, d.size());
}

template <typename IteratorTag>
void test_transform(hpx::parallel::task_execution_policy, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10000);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), std::rand());

    hpx::future<void> f =
        hpx::parallel::transform(hpx::parallel::task,
            iterator(boost::begin(c)), iterator(boost::end(c)), boost::begin(d),
            [](std::size_t& v) {
                return v + 1;
            });
    f.wait();

    // verify values
    std::size_t count = 0;
    HPX_TEST(std::equal(boost::begin(c), boost::end(c), boost::begin(d),
        [&count](std::size_t v1, std::size_t v2) {
            HPX_TEST_EQ(v1 + 1, v2);
            ++count;
            return v1 + 1 == v2;
        }));
    HPX_TEST_EQ(count, d.size());
}

template <typename IteratorTag>
void test_transform()
{
    using namespace hpx::parallel;

    test_transform(seq, IteratorTag());
    test_transform(par, IteratorTag());
    test_transform(vec, IteratorTag());
    test_transform(task, IteratorTag());

    test_transform(execution_policy(seq), IteratorTag());
    test_transform(execution_policy(par), IteratorTag());
    test_transform(execution_policy(vec), IteratorTag());
    test_transform(execution_policy(task), IteratorTag());
}

void for_each_test()
{
    test_transform<std::random_access_iterator_tag>();
    test_transform<std::forward_iterator_tag>();
    test_transform<std::input_iterator_tag>();
}

///////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_transform_exception(ExPolicy const& policy, IteratorTag)
{
    BOOST_STATIC_ASSERT(hpx::parallel::is_execution_policy<ExPolicy>::value);

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10000);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), std::rand());

    bool caught_exception = false;
    try {
        hpx::parallel::transform(policy,
            iterator(boost::begin(c)), iterator(boost::end(c)), boost::begin(d),
            [](std::size_t v) {
                throw std::runtime_error("test");
                return v;
            });

        HPX_TEST(false);
    }
    catch(hpx::exception_list const&) {
        caught_exception = true;
        boost::exception_ptr e = boost::current_exception();
    }
    catch(...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_exception);
}

template <typename IteratorTag>
void test_transform_exception(hpx::parallel::task_execution_policy, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10000);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), std::rand());

    bool caught_exception = false;
    try {
        hpx::future<void> f =
            hpx::parallel::transform(hpx::parallel::task,
                iterator(boost::begin(c)), iterator(boost::end(c)),
                boost::begin(d),
                [](std::size_t v) {
                    throw std::runtime_error("test");
                    return v;
                });
        f.get();

        HPX_TEST(false);
    }
    catch(hpx::exception_list const&) {
        caught_exception = true;
        boost::exception_ptr e = boost::current_exception();
    }
    catch(...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_exception);
}

template <typename IteratorTag>
void test_transform_exception()
{
    using namespace hpx::parallel;

    test_transform_exception(seq, IteratorTag());
    test_transform_exception(par, IteratorTag());
    test_transform_exception(vec, IteratorTag());
    test_transform_exception(task, IteratorTag());

    test_transform_exception(execution_policy(seq), IteratorTag());
    test_transform_exception(execution_policy(par), IteratorTag());
    test_transform_exception(execution_policy(vec), IteratorTag());
    test_transform_exception(execution_policy(task), IteratorTag());
}

void for_each_exception_test()
{
    test_transform_exception<std::random_access_iterator_tag>();
    test_transform_exception<std::forward_iterator_tag>();
    test_transform_exception<std::input_iterator_tag>();
}

///////////////////////////////////////////////////////////////////////////////
int hpx_main()
{
    for_each_test();
    for_each_exception_test();
    return hpx::finalize();
}

int main(int argc, char* argv[])
{
    // Initialize and run HPX
    HPX_TEST_EQ_MSG(hpx::init(argc, argv), 0,
        "HPX main exited with non-zero status");

    return hpx::util::report_errors();
}


