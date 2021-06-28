#include "catch2/catch.hpp"
#include "fmt/core.h"

TEST_CASE("test the execution of foo in Linux", "[foo]")
{
  fmt::print("Foo in Linux\n");
  REQUIRE( 1 == 1);
}

