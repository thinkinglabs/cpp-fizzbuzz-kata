#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <iostream>

std::string fizzbuzz(int i) {
  return "1";
}

TEST_CASE("should return 1 when 1") {
  REQUIRE(fizzbuzz(1) == std::string("1"));
}

void hello(){
    #ifdef NDEBUG
    std::cout << "Hello World Release!" <<std::endl;
    #else
    std::cout << "Hello World Debug!" <<std::endl;
    #endif
}
