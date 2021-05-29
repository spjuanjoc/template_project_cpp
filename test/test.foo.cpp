#include "catch2/catch.hpp"
#include "fmt/core.h"

TEST_CASE("test the execution of foo", "[foo]")
{
  fmt::print("Test the execution of foo\n");
  REQUIRE( 1 == 1);
}

TEST_CASE("test the execution of bar", "[bar]")
{
  fmt::print("Test the execution of bar\n");
  REQUIRE( 1 == 1);
}
