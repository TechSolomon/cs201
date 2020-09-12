// dotcross.cpp
// Solomon Himelbloom
// 11 September 2020
// Dot cross example for CS 201.

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;

int main() {
    float Ax, Ay, Az, Bx, By, Bz;
    float dot_product = 0;
    float cross_x, cross_y, cross_z = 0;
    
    // User Input: 3 floating-point numbers for x, y, z – each for vector A and B.
    cout << "Enter Ax: ";
    cin >> Ax;

    cout << "Enter Ay: ";
    cin >> Ay;

    cout << "Enter Az: ";
    cin >> Az;

    cout << "Enter Bx: ";
    cin >> Bx;

    cout << "Enter By: ";
    cin >> By;

    cout << "Enter Bz: ";
    cin >> Bz;

    dot_product = (Ax * Bx + Ay * By + Az * Bz);

    cout << " " << endl;
    cout << "Dot product calculation: " << std::setprecision(5) << dot_product << endl;

    cross_x = (Ay * Bz - Az * By);
    cross_y = (Az * Bx - Ax * Bz);
    cross_z = (Ax * By - Ay * Bx);

    cout << " " << endl;
    cout << "Cross product (x): " << std::setprecision(5) << cross_x << endl;
    cout << "Cross product (y): " << std::setprecision(5) << cross_y << endl;
    cout << "Cross product (z): " << std::setprecision(5) << cross_z << endl;

    // Additional Printed Results [A dot B = answer; A cross B = (x, y, z)]:
    cout << " " << endl;
    cout << "A dot B = " << std::setprecision(5) << dot_product << endl;
    cout << "A cross B = (" << std::setprecision(5) << cross_x << ", " << 
        std::setprecision(5) << cross_y << ", " << std::setprecision(5) << cross_z << ")" << endl;
}