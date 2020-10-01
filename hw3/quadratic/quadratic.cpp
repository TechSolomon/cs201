// quadratic.cpp
// Solomon Himelbloom
// 23 September 2020
// Quadratic formula for CS 201.

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

// QUADRATIC FORMULA: x = -b +/- sqrt(b^2-4ac)/(2a)
void quadraticFormula(int a, int b, int c) {
    float discriminant, x1, x2;
    discriminant = b*b - 4*a*c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    if (discriminant == 0) {
        cout << "Error: The resulting discriminant (b^2-4ac) is zero." << endl;
        cout << "Please try again." << endl;
        cout << " " << endl;
    }

    else if (discriminant < 0) {
        cout << "Fail: The resulting discriminant (b^2-4ac) is negative." << endl;
        cout << "The quadratic equation has no real roots." << endl;
        cout << " " << endl;
    }
    
    else {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << " " << endl;
    }
    
}

int main() {
    // Pass: Discriminant is positive.
    quadraticFormula(1, 4, 3);

    // Fail: Discriminant is negative.
    quadraticFormula(-5, 1, -8);

    // Check: Discriminant is zero.
    quadraticFormula(0, 0, 1);
}