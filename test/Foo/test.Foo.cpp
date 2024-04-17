/**
 * @brief   Implements the tests for Foo.
 *
 * @author  spjuanjoc
 * @date    2021-06-28
 */

#include <fmt/core.h>

#include "Greet/Foo.h"

#include <catch2/catch_test_macros.hpp>

using namespace Greet;

TEST_CASE("test the execution of foo in all platforms", "[foo]")
{
  fmt::print("Foo multi\n");
  auto foo = Foo(42);

  foo.greet();
}
