// statistics.cpp
// Solomon Himelbloom
// 7 November 2020 (Final Project)
// Readability statistics source file for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <random>
#include <fstream>
#include <sstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

#include "statistics.hpp"

// Neatly organizes the key and associated value pairs.
void tableFormat() {
    cout << "VALUE (#) | KEY (word)" << endl;
    cout << std::setfill('-') << std::setw(22) << "-" <<endl;
}

// TODO: Find the total amount of characters in a given file.
// (https://www.cplusplus.com/reference/istream/istream/gcount/)
void countCharacters() {
    cout << "TODO: Counted characters here." << endl;
}