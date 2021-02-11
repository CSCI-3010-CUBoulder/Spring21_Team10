#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>


TEST_CASE("check Sign", "[Sign]"){
	REQUIRE( Sign(1) == 1);
};


