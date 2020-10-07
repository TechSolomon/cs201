// userInput.hpp
// Solomon Himelbloom
// 5 October 2020
// User input with vectors example for CS 201.

#include "userInput.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void getUserStrings(std::vector<std::string> & words) {
    while (true) {
        std::string user_input;
        cin >> user_input;
        // cout << "You typed in: " << user_input << endl;

        if (user_input == "end") {
            break;
        }

        else {
            words.push_back(user_input);
        }
    }
}

bool hasChar(const std::string & str, const char & c) {
    // warning: range-based for loop is a C++11 extension [-Wc++11-extensions]
    for (char x:str) {
        if (x == c) {
            return true;
        }
    }

    return false;
}