#include "catch2/catch.hpp"
#include "fmt/core.h"

TEST_CASE("test the execution of foo", "[foo]")
{
  fmt::print("Test the execution of foo\n");
  REQUIRE( 1 == 1);
}
