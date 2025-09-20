/**
 * @brief   Implements the tests for Windows.
 *
 * @author  spjuanjoc
 * @date    2021-06-28
 */

#include "Greet/Foo.h"

#include <fmt/core.h>

#include <memory>
#include <string_view>

#include <catch2/catch_test_macros.hpp>

using namespace Greet;

TEST_CASE("test the execution of foo in Windows", "[foo]")
{
  const auto foo = std::make_unique<Foo>(42);

  foo->greetFromPlatform();
  const std::string_view platform = foo->getPlatform();
/*
  fmt::print("Foo in {}\n", platform);
*/
  REQUIRE(platform == "Windows");
}
