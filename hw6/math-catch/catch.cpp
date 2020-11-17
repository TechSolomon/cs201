// catch.cpp
// Solomon Himelbloom
// 11 November 2020
// Math catch for CS 201.

#include <cmath>
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch_amalgamated.hpp"

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
           
