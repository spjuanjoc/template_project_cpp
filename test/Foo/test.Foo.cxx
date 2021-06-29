/**
 * @brief   Implements the tests for Windows.
 *
 * @author  juan.castellanos
 * @date    2021-06-28
 */

#include "Greet/Foo.h"
#include <catch2/catch.hpp>
#include <fmt/core.h>

using namespace Greet;

TEST_CASE("test the execution of foo in Windows", "[foo]")
{
  auto foo = std::make_unique<Foo>(42);

  foo->greetFromPlatform();
  auto platform = foo->getPlatform();

  fmt::print("Foo in {}\n", platform);
  REQUIRE(platform == "Windows");
}
