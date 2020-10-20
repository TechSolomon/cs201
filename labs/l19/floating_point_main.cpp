// floating_point_main.cpp
// Solomon Himelbloom
// 19 October 2020
// Floating point example for CS 201.

/**
 * @file     L19_Floating_Point.cpp
 * @author   Solomon Himelbloom
 * @version  Jan 28, 2019
 * John Quan 
 *
 * Useful trigonometric functions.
 */

#include <iostream>
#include <vector>
// using sin, cos
#include <cmath>
#include <cstdlib>

#include "floating_point.hpp"

using std::size_t

int main() {
	// TODO Turn on "error on warnings" so this doesn't*****************
	// compile.  Make it compile by using std::size_t
	// You can comment this for loop out after that.
	std::vector<int> v { 1, 2, 3, 4, 5 };
	for (size_t int i = 2; i < v.size(); ++i) {
		++v[i];
		std::cout << v[i] << std::endl;
	}
	std::cout << std::endl << std::endl;
	// *****************************************************************

	// TODO Declare and initialize a vector of radians by calling*******
	//        degreesToRadians(360).
	//      Print degree,cos(radian),sin(radian) as a comma separated
	//        values (CSV) list.
	degreesToRadians(360);

	// *****************************************************************

	return 0;
}
