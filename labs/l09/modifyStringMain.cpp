// modifyString.hpp
// Solomon Himelbloom
// 28 September 2020
// Passing by reference main example for CS 201.

#include "modifyString.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char * argv[]) {
    cout << "Hello, string." << endl;

    std::string str = "Hello, world.";

    cout << "String #1: " << modifyString(str, 1) << endl;
    cout << "String #2: " << modifyString(str, 2) << endl;
    cout << "String #3: " << modifyString(str, 3) << endl;
}