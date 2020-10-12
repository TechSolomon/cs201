// reading_main.cpp
// Solomon Himelbloom
// 12 October 2020
// Reading from a string example for CS 201.

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>
#include <sstream>

#include "reading.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istringstream;

int main() {
    vector<string> readingVector = { "69", "69a", "a69", "5.6", "68", "\t11", "68 69", "0xA" };
    for (string s : readingVector) {
        bool checksum = readingStrings(s);

        if (!checksum) {
            cout << "Error: please pass in valid parameters." << endl;
        }
    }
}