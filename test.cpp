#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

//./test -s [factorial]

TEST_CASE("Factorials are computed", "[factorial]"){
    CHECK( Factorial(0) == 1);
    REQUIRE( Factorial(1) == 1);
}