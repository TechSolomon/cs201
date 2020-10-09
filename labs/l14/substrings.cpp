// substrings.cpp
// Solomon Himelbloom
// 9 October 2020
// Substrings example [source file] for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

#include "substrings.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void shrinkingPrintForm(std::string s) {
    for (int i = s.size(); i > 0; i--) {
        cout << s.substr(0, i) << endl;
    }

    cout << endl;
}