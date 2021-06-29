/**
 * @brief   Defines the entry point for the tests.
 *
 * @author  juan.castellanos
 * @date    2021-06-28
 */

#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"

#include "fmt/core.h"

TEST_CASE("test the main", "[foo]")
{
  fmt::print("Test the framework\n");
  REQUIRE(1 == 1);
}
