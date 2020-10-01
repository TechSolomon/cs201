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
    float discriminant, x1, x2;
    discriminant = b*b - 4*a*c;
    x1 = (-b + sqrt(discriminant)) / (2*a);
    x2 = (-b - sqrt(discriminant)) / (2*a);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "discriminant = " << discriminant << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;

    cout << " " << endl;
}

// QUADRATIC FORMULA: x = -b +/- sqrt(b^2-4ac)/(2a)
int main() {
    cout << "" << endl;

    quadraticFormula(1, 4, 3);
    quadraticFormula(1, -9, 8);
    quadraticFormula(-1, 8, -15);
}