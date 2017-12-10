#define BOOST_TEST_MODULE test_hello
//------------------------------------------------------
#include "lib.h"
//------------------------------------------------------
#include <boost/test/unit_test.hpp>
//------------------------------------------------------
BOOST_AUTO_TEST_SUITE(test_hello)
//------------------------------------------------------
BOOST_AUTO_TEST_CASE(test_valid_hello_message)
{
  BOOST_CHECK(generateHelloMessage().empty() == false);
}
//------------------------------------------------------
BOOST_AUTO_TEST_SUITE_END()
//------------------------------------------------------
