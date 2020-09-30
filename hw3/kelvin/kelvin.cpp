// kelvin.cpp
// Solomon Himelbloom
// 23 September 2020
// Broken Kelvin example for CS 201.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// // ORIGINAL: Converts Celsius to Kelvin
// double ctok(double c) {
//     int k = c + 273.15;
//     return int;
// }

// int main() {
//     double c = 0;
//     cin >> d;
//     double k = ctok("c");
//     cout << k << '/n';
// }

// FINAL: Converts Celsius to Kelvin

// changed from double to void
double ctok(double c) {
    // changed operation from addition to subtraction
    int k = c;
    c -= 273.15;
    // needs to return ctok instead of int
    return c;
}

int main() {
    double c = 0;
    // d is not defined; changed to the double c
    cin >> c;
    // new mention of k: needs to be initialized
    double k;
    // c is passed into the ctok function w/o quotes
    k = ctok(c);
    // escape character was facing the wrong direction
    cout << k << '\n';
}

