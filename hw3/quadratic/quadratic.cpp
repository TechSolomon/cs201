// quadratic.cpp
// Solomon Himelbloom
// 23 September 2020
// Quadratic formula for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

void quadraticFormula(int a, int b, int c) {
    cout << "This is what a quadratic formula looks like..." << endl;
    cout << "x = -b +/- sqrt(b^2-4ac)/(2a)" << endl;
    cout << " " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}

int main() {
    quadraticFormula(1, 2, 3);
}