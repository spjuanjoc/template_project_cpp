/**
 * @brief   Implements the tests for Foo.
 *
 * @author  juan.castellanos
 * @date    2021-06-28
 */

#include "Greet/Foo.h"
#include <catch2/catch.hpp>
#include <fmt/core.h>

using namespace Greet;

TEST_CASE("test the execution of foo in all platforms", "[foo]")
{
  fmt::print("Foo multi\n");
  auto foo = Foo(42);

  foo.greet();
}
