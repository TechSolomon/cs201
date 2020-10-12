// reading.cpp
// Solomon Himelbloom
// 12 October 2020
// Reading from a string [source file] example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>

#include "reading.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;

bool readingStrings(string str) {
    // string text("692");

    istringstream instream(str);
    int num;
    instream >> num;

    if (!instream) {
        cout << "No, text needs an int." << endl;
        return false;
    }

    else {
        cout << "num is: " << num << endl;
        return true;
    }
}