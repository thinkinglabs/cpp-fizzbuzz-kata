#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>
#include "fizzbuzz.h"

TEST_CASE("should return 1 when 1") {
  REQUIRE(fizzbuzz(1) == std::string("1"));
}

TEST_CASE("should return 2 when 2") {
  REQUIRE(fizzbuzz(2) == std::string("2"));
}

