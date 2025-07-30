/**
 * @brief   Implements the tests for Linux.
 *
 * @author  spjuanjoc
 * @date    2021-06-28
 */

#include "Greet/Foo.h"

#include <fmt/core.h>

#include <memory>

#include <catch2/catch_test_macros.hpp>

using namespace Greet;

TEST_CASE("test the execution of foo in Linux", "[foo]")
{
  auto foo = std::make_unique<Foo>(42);

  foo->greetFromPlatform();
  auto platform = foo->getPlatform();

  fmt::print("Foo in {}\n", platform);
  REQUIRE(platform == "Linux");
}
