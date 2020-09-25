// lab8.cpp
// Solomon Himelbloom
// 25 September 2020
// "Functions That Return a Value" – example for CS 201.

#include "lab8.hpp"
#include "intio.hpp"
#include <math.h>
#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;
using std::cin;


int doInput () {
    return getInt();
}

int compute (int n) {
    return pow(n, 2);
}

int main() {
    cout << "Type in an integer:";
    cout << " ";

    int d = doInput();
    cout << "integer = " << d << endl;

    int e = compute(d);
    cout << "(integer)^2 = " << e << endl;

    return 0;
}