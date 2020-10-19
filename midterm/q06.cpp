// midterm.cpp
// Solomon Himelbloom
// 18 October 2020
// Code for the CS 201 midterm exam.

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Question #6: Why can conversion from a double to an int be a bad thing?
// Why is conversion from int to double ok?

int main() {
    cout << "double --> int conversion:" << endl;
    double x = 250;
    cout << "double = " << x << endl;
    x += 0.5;
    int y = int(x);
    cout << "int = " << y << endl;


    cout << "" << endl;
    cout << "int --> double conversion:" << endl;
    int i = 750;
    cout << "int = " << i << endl;
    i += 0.5;
    double j = double(i);
    cout << "double = " << j << endl;
}