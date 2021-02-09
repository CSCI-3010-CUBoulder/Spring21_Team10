#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

test_case("computed factorial", "[factorial]"){
    REQUIRE( Factorial(1) == 1);

}