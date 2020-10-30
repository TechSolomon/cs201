// truncstruct_main.cpp
// Solomon Himelbloom
// 30 October 2020
// Programming with a struct example for CS 201.

#include <string>
#include <iostream>
#include <iomanip>
#include <stdio.h>
using std::cout;
using std::endl;
using std::cin;
using std::setw;

#include "truncstruct.hpp"

int main () {
    std::string user_input;
    int user_number;

    std::cout << "String input: ";
    cin >> user_input;
    std::cout << "Integer input: ";
    cin >> user_number;
    std::cout << "" << endl;

    StringInfo input = trunc8(user_input);

    StringInfo requirements{user_input, static_cast<size_t>(user_number)};
    StringInfo output = trunc(requirements);

    std::cout << "[Structured Data Output]\n" << endl;
    std::cout << "String (trunc8): " << input.str << endl;
    std::cout << "String (trunc): " << output.str << endl;
    std::cout << "String Length (trunc8): " << input.len << endl;
    std::cout << "String Length (trunc): " << output.len << endl;
}

