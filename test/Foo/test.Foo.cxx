#include "catch2/catch.hpp"
#include "fmt/core.h"

TEST_CASE("test the execution of foo in Windows", "[foo]")
{
  fmt::print("Foo in windows\n");
  REQUIRE( 1 == 1);
}
