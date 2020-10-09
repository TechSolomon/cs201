// substrings.cpp
// Solomon Himelbloom
// 9 October 2020
// Substrings example for CS 201.

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string>

#include "substrings.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	std::string user_input = "";
    cout << "Enter a word to be printed in shrinking form: ";
    cin >> user_input;

	shrinkingPrintForm(user_input);
}
