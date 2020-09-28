// modifyString.hpp
// Solomon Himelbloom
// 28 September 2020
// Passing by reference example for CS 201.

#include "modifyString.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int modifyString(std::string & referencedString, int n) {
    // cout << "Hello, string." << endl;

    for (int i = 0; i < n; i++) {
        referencedString += referencedString;
    }

    return referencedString.length();
}