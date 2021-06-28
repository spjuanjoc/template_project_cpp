#include "catch2/catch.hpp"
#include "fmt/core.h"

TEST_CASE("test the execution of foo in OSX", "[foo]")
{
  fmt::print("Foo in OSX\n");
  REQUIRE(1 == 1);
}
