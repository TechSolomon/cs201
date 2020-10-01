// quadratic.cpp
// Solomon Himelbloom
// 23 September 2020
// Quadratic formula for CS 201.

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

void quadraticFormula(int a, int b, int c) {
    float discriminant;
    discriminant = b*b - 4*a*c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "discriminant = " << discriminant << endl;

    cout << " " << endl;
}

// QUADRATIC FORMULA: x = -b +/- sqrt(b^2-4ac)/(2a)
int main() {
    cout << "" << endl;

    quadraticFormula(1, 2, 3);
    quadraticFormula(4, 5, 6);
    quadraticFormula(7, 8, 9);
}