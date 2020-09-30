// std_lib_facilities_test.cpp
// Solomon Himelbloom
// 23 September 2020
// Standard Template Library (STL) example for CS 201.

// #include "std_lib_facilities.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>
// #include <map>
// #include <cstdio>
// #include <cstdlib>
// #include <cmath>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

inline void keep_window_open() {
    std::string tmp;
    cin.clear();

    cout << "Press ENTER to exit the program." << endl;
    std::getline(cin, tmp);
}

int main() {
    cout << "Standard Template Library (STL)." << endl;
}