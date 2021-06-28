#include "catch2/catch.hpp"
#include "fmt/core.h"

TEST_CASE("test the execution of foo in all platforms", "[foo]")
{
  fmt::print("Foo multi\n");
  REQUIRE( 1 == 1);
}
