#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

//./test -s [factorial]

TEST_CASE("Sums elements of vector", "[sum]"){
    std::vector<int> numbers1 = {1,2,3,4,5}
    std::vector<int> numbers2 = {-1,2,3}
    CHECK(Sum(numbers1) == 15)
    CHECK(Sum(numbers2) == 4)
}

TEST_CASE("Multiplies elements of vector", "[product]"){
    std::vector<int> numbers1 = {1,2,3}
    std::vector<int> numbers2 = {-1,4,5}
    CHECK(Product(numbers1) = 6)
    REQUIRE(Product(numbers2) = -20)
}