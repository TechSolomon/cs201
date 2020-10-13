// tokenizertest.cpp
// Solomon Himelbloom
// 7 October 2020
// Tokenizer example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

#include "tokenizer.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main() {
    std::string user_input = "";
    std::vector<std::string> searchTokens;

    cout << "Please type in some text." << endl;
    cout << "When you are done, type “End”, “end” or “END”: ";
    cin >> user_input;

    cout << "\n" << "User Input: " << user_input << endl;
}