// formatted_output.cpp
// Solomon Himelbloom
// 21 October 2020
// Formatted output example for CS 201.

#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <math.h>
#include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::setw;

int main() {
    std::cout << std::fixed;

	for (int degree = 0; degree <= 180; degree += 5) {
            std::cout << std::setw(4) << degree << "  " << 
            std::setprecision(8) << std::setw(11) << cos(M_PI / 180 * degree) << endl;
	}

    return 0;
}