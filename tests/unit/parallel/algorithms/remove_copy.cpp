//  Copyright (c) 2015 Daniel Bourgeois
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#include <hpx/hpx_init.hpp>
#include <hpx/hpx.hpp>
#include <hpx/include/parallel_remove_copy.hpp>
#include <hpx/util/lightweight_test.hpp>

#include <boost/range/functions.hpp>

#include <numeric>
#include <string>
#include <vector>

#include "test_utils.hpp"

////////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_remove_copy(ExPolicy policy, IteratorTag)
{
    static_assert(
        hpx::parallel::is_execution_policy<ExPolicy>::value,
        "hpx::parallel::is_execution_policy<ExPolicy>::value");

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(c.size()/2);
    std::size_t middle_idx =std::rand() % (c.size()/2);
    auto middle = boost::begin(c) + middle_idx;
    std::fill(boost::begin(c), middle, 1);
    std::fill(middle, boost::end(c), 2);

    hpx::parallel::remove_copy(policy, iterator(boost::begin(c)),
        iterator(boost::end(c)), boost::begin(d), std::size_t(2));

    std::size_t count = 0;
    HPX_TEST(std::equal(boost::begin(c), middle, boost::begin(d),
        [&count](std::size_t v1, std::size_t v2) -> bool {
            HPX_TEST_EQ(v1, v2);
            ++count;
            return v1 == v2;
        }));
    HPX_TEST_EQ(count, middle_idx);
}

template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_async(ExPolicy p, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(c.size()/2);
    std::size_t middle_idx =std::rand() % (c.size()/2);
    auto middle = boost::begin(c) + middle_idx;
    std::fill(boost::begin(c), middle, 1);
    std::fill(middle, boost::end(c), 2);

    auto f =
        hpx::parallel::remove_copy(p, iterator(boost::begin(c)),
            iterator(boost::end(c)), boost::begin(d), std::size_t(2));

    f.wait();

    std::size_t count = 0;
    HPX_TEST(std::equal(boost::begin(c), middle, boost::begin(d),
        [&count](std::size_t v1, std::size_t v2) -> bool {
            HPX_TEST_EQ(v1, v2);
            ++count;
            return v1 == v2;
        }));
    HPX_TEST_EQ(count, middle_idx);
}

template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_outiter(ExPolicy policy, IteratorTag)
{
    static_assert(
        hpx::parallel::is_execution_policy<ExPolicy>::value,
        "hpx::parallel::is_execution_policy<ExPolicy>::value");

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(0);
    std::iota(boost::begin(c), boost::end(c), 0);

    hpx::parallel::remove_copy(policy,
        iterator(boost::begin(c)), iterator(boost::end(c)),
        std::back_inserter(d), std::size_t(3000));

    std::size_t count = 0;
    HPX_TEST(std::equal(boost::begin(c), boost::begin(c) + 3000, boost::begin(d),
        [&count](std::size_t v1, std::size_t v2) -> bool {
            HPX_TEST_EQ(v1, v2);
            ++count;
            return v1 == v2;
        }));
    HPX_TEST(std::equal(boost::begin(c)+3001, boost::end(c),
        boost::begin(d) + 3000,
        [&count](std::size_t v1, std::size_t v2) -> bool {
            HPX_TEST_EQ(v1, v2);
            ++count;
            return v1 == v2;
        }));
    HPX_TEST_EQ(count, d.size());
}

template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_outiter_async(ExPolicy p, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::test_iterator<base_iterator, IteratorTag> iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(0);
    std::iota(boost::begin(c), boost::end(c), 0);

    auto f =
        hpx::parallel::remove_copy(p,
            iterator(boost::begin(c)), iterator(boost::end(c)),
            std::back_inserter(d), std::size_t(3000));
    f.wait();

    std::size_t count = 0;
    HPX_TEST(std::equal(boost::begin(c), boost::begin(c) + 3000, boost::begin(d),
        [&count](std::size_t v1, std::size_t v2) -> bool {
            HPX_TEST_EQ(v1, v2);
            ++count;
            return v1 == v2;
        }));
    HPX_TEST(std::equal(boost::begin(c)+3001, boost::end(c),
        boost::begin(d) + 3000,
        [&count](std::size_t v1, std::size_t v2) -> bool {
            HPX_TEST_EQ(v1, v2);
            ++count;
            return v1 == v2;
        }));
    HPX_TEST_EQ(count, d.size());
}

template <typename IteratorTag>
void test_remove_copy()
{
    using namespace hpx::parallel;
    test_remove_copy(seq, IteratorTag());
    test_remove_copy(par, IteratorTag());
    test_remove_copy(par_vec, IteratorTag());

    test_remove_copy_async(seq(task), IteratorTag());
    test_remove_copy_async(par(task), IteratorTag());

#if defined(HPX_HAVE_GENERIC_EXECUTION_POLICY)
    test_remove_copy(execution_policy(seq), IteratorTag());
    test_remove_copy(execution_policy(par), IteratorTag());
    test_remove_copy(execution_policy(par_vec), IteratorTag());

    test_remove_copy(execution_policy(seq(task)), IteratorTag());
    test_remove_copy(execution_policy(par(task)), IteratorTag());
#endif

    // assure output iterator will work
    test_remove_copy_outiter(seq, IteratorTag());
    test_remove_copy_outiter(par, IteratorTag());
    test_remove_copy_outiter(par_vec, IteratorTag());

    test_remove_copy_outiter_async(seq(task), IteratorTag());
    test_remove_copy_outiter_async(par(task), IteratorTag());

#if defined(HPX_HAVE_GENERIC_EXECUTION_POLICY)
    test_remove_copy_outiter(execution_policy(seq), IteratorTag());
    test_remove_copy_outiter(execution_policy(par), IteratorTag());
    test_remove_copy_outiter(execution_policy(par_vec), IteratorTag());

    test_remove_copy_outiter(execution_policy(seq(task)), IteratorTag());
    test_remove_copy_outiter(execution_policy(par(task)), IteratorTag());
#endif
}

void remove_copy_test()
{
    test_remove_copy<std::random_access_iterator_tag>();
    test_remove_copy<std::forward_iterator_tag>();
    test_remove_copy<std::input_iterator_tag>();
}

///////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_exception(ExPolicy policy, IteratorTag)
{
    static_assert(
        hpx::parallel::is_execution_policy<ExPolicy>::value,
        "hpx::parallel::is_execution_policy<ExPolicy>::value");

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), 0);

    bool caught_exception = false;
    try {
        hpx::parallel::remove_copy(policy,
            decorated_iterator(
                boost::begin(c),
                [](){ throw std::runtime_error("test"); }),
            decorated_iterator(boost::end(c)),
            boost::begin(d), std::size_t(3000));
        HPX_TEST(false);
    }
    catch (hpx::exception_list const& e) {
        caught_exception = true;
        test::test_num_exceptions<ExPolicy, IteratorTag>::call(policy, e);
    }
    catch (...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_exception);
}

template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_exception_async(ExPolicy p, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), 0);

    bool caught_exception = false;
    bool returned_from_algorithm = false;
    try {
        auto f =
            hpx::parallel::remove_copy(p,
                decorated_iterator(
                    boost::begin(c),
                    [](){ throw std::runtime_error("test"); }),
                decorated_iterator(boost::end(c)),
                boost::begin(d), std::size_t(3000));
        returned_from_algorithm = true;
        f.get();

        HPX_TEST(false);
    }
    catch (hpx::exception_list const& e) {
        caught_exception = true;
        test::test_num_exceptions<ExPolicy, IteratorTag>::call(p, e);
    }
    catch (...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_exception);
    HPX_TEST(returned_from_algorithm);
}

template <typename IteratorTag>
void test_remove_copy_exception()
{
    using namespace hpx::parallel;

    // If the execution policy object is of type vector_execution_policy,
    // std::terminate shall be called. therefore we do not test exceptions
    // with a vector execution policy
    test_remove_copy_exception(seq, IteratorTag());
    test_remove_copy_exception(par, IteratorTag());

    test_remove_copy_exception_async(seq(task), IteratorTag());
    test_remove_copy_exception_async(par(task), IteratorTag());

#if defined(HPX_HAVE_GENERIC_EXECUTION_POLICY)
    test_remove_copy_exception(execution_policy(seq), IteratorTag());
    test_remove_copy_exception(execution_policy(par), IteratorTag());

    test_remove_copy_exception(execution_policy(seq(task)), IteratorTag());
    test_remove_copy_exception(execution_policy(par(task)), IteratorTag());
#endif
}

void remove_copy_exception_test()
{
    test_remove_copy_exception<std::random_access_iterator_tag>();
    test_remove_copy_exception<std::forward_iterator_tag>();
    test_remove_copy_exception<std::input_iterator_tag>();
}

//////////////////////////////////////////////////////////////////////////////
template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_bad_alloc(ExPolicy policy, IteratorTag)
{
    static_assert(
        hpx::parallel::is_execution_policy<ExPolicy>::value,
        "hpx::parallel::is_execution_policy<ExPolicy>::value");

    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), 0);

    bool caught_bad_alloc = false;
    try {
        hpx::parallel::remove_copy(policy,
            decorated_iterator(
                boost::begin(c),
                [](){ throw std::bad_alloc(); }),
            decorated_iterator(boost::end(c)),
            boost::begin(d), std::size_t(3000));
        HPX_TEST(false);
    }
    catch (std::bad_alloc const&) {
        caught_bad_alloc = true;
    }
    catch (...) {
        HPX_TEST(false);
    }

    HPX_TEST(caught_bad_alloc);
}

template <typename ExPolicy, typename IteratorTag>
void test_remove_copy_bad_alloc_async(ExPolicy p, IteratorTag)
{
    typedef std::vector<std::size_t>::iterator base_iterator;
    typedef test::decorated_iterator<base_iterator, IteratorTag>
        decorated_iterator;

    std::vector<std::size_t> c(10007);
    std::vector<std::size_t> d(c.size());
    std::iota(boost::begin(c), boost::end(c), 0);

    bool caught_bad_alloc = false;
    bool returned_from_algorithm = false;
    try {
        auto f =
            hpx::parallel::remove_copy(p,
                decorated_iterator(
                    boost::begin(c),
                    [](){ throw std::bad_alloc(); }),
                decorated_iterator(boost::end(c)),
                boost::begin(d), std::size_t(3000));
        returned_from_algorithm = true;
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
    HPX_TEST(returned_from_algorithm);
}

template <typename IteratorTag>
void test_remove_copy_bad_alloc()
{
    using namespace hpx::parallel;

    // If the execution policy object is of type vector_execution_policy,
    // std::terminate shall be called. therefore we do not test exceptions
    // with a vector execution policy
    test_remove_copy_bad_alloc(seq, IteratorTag());
    test_remove_copy_bad_alloc(par, IteratorTag());

    test_remove_copy_bad_alloc_async(seq(task), IteratorTag());
    test_remove_copy_bad_alloc_async(par(task), IteratorTag());

#if defined(HPX_HAVE_GENERIC_EXECUTION_POLICY)
    test_remove_copy_bad_alloc(execution_policy(seq), IteratorTag());
    test_remove_copy_bad_alloc(execution_policy(par), IteratorTag());

    test_remove_copy_bad_alloc(execution_policy(seq(task)), IteratorTag());
    test_remove_copy_bad_alloc(execution_policy(par(task)), IteratorTag());
#endif
}

void remove_copy_bad_alloc_test()
{
    test_remove_copy_bad_alloc<std::random_access_iterator_tag>();
    test_remove_copy_bad_alloc<std::forward_iterator_tag>();
    test_remove_copy_bad_alloc<std::input_iterator_tag>();
}

int hpx_main(boost::program_options::variables_map& vm)
{
    unsigned int seed = (unsigned int)std::time(nullptr);
    if (vm.count("seed"))
        seed = vm["seed"].as<unsigned int>();

    std::cout << "using seed: " << seed << std::endl;
    std::srand(seed);

    remove_copy_test();
    remove_copy_exception_test();
    remove_copy_bad_alloc_test();
    return hpx::finalize();
}

int main(int argc, char* argv[])
{
    // add command line option which controls the random number generator seed
    using namespace boost::program_options;
    options_description desc_commandline(
        "Usage: " HPX_APPLICATION_STRING " [options]");

    desc_commandline.add_options()
        ("seed,s", value<unsigned int>(),
        "the random number generator seed to use for this run")
        ;

    // By default this test should run on all available cores
    std::vector<std::string> const cfg = {
        "hpx.os_threads=" +
            std::to_string(hpx::threads::hardware_concurrency())
    };

    // Initialize and run HPX
    HPX_TEST_EQ_MSG(hpx::init(desc_commandline, argc, argv, cfg), 0,
        "HPX main exited with non-zero status");

    return hpx::util::report_errors();
}
