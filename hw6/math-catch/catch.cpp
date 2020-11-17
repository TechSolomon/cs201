// catch.cpp
// Solomon Himelbloom
// 11 November 2020
// Math catch for CS 201.

// This tells Catch to provide a main() - only do this in one cpp file.
#define CATCH_CONFIG_MAIN
#include "catch_amalgamated.hpp"
#include <cmath>

unsigned int Factorial( unsigned int number ) {
    return number > 1 ? Factorial(number-1)*number : 1;
}

TEST_CASE( "Factorials are computed", "[factorial]" ) {
    REQUIRE( Factorial(0) == 1 );
    REQUIRE( Factorial(1) == 1 );
    REQUIRE( Factorial(2) == 2 );
    REQUIRE( Factorial(3) == 6 );
    REQUIRE( Factorial(10) == 3628800 );
}

TEST_CASE ( "STL Unit Testing: sin(x)", "[sine function]" ) {
    REQUIRE(round(sin(4*M_PI)) == 0);
    REQUIRE(round(sin(8*M_PI/16)) == 1);
    REQUIRE(round(sin(M_PI/6)) == 1/2);
    REQUIRE(round(sin(0)) == 0);
}

TEST_CASE ( "STL Unit Testing: atan2(x)", "[arc-tangant function]" ) {
    REQUIRE(round(atan2(0, 0)) == 0);
    REQUIRE(round(atan2(M_PI, 6)) == 0);
    REQUIRE(round(atan2(M_PI, 2)) == 1);
    REQUIRE(round(atan2(M_PI, 4)) == 1);
}

TEST_CASE ( "STL Unit Testing: accumulate(b,e,i)", "[accumulate function]" ) {
    int fibannaci[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377};
    REQUIRE(std::accumulate(fibannaci+9, fibannaci+10, 0) == 34);
    REQUIRE(std::accumulate(fibannaci+10, fibannaci+11, 0) == 55);
    REQUIRE(std::accumulate(fibannaci+11, fibannaci+12, 0) == 89);
    REQUIRE(std::accumulate(fibannaci+12, fibannaci+13, 0) == 144);
}

TEST_CASE ( "STL Unit Testing: inner_product(b,e,b2,i)", "[inner-product function]" ) {
    int inner_int = 100, even[] = {20, 30, 40}, odd[] = {1, 2, 3};
    REQUIRE(std::inner_product(even, odd+3, odd, inner_int) == 100);
    REQUIRE(std::inner_product(even, odd+3, odd, inner_int) == 100);
    REQUIRE(std::inner_product(even, odd+3, odd, inner_int) == 100);
    REQUIRE(std::inner_product(even, odd+3, odd, inner_int) == 100);
}
