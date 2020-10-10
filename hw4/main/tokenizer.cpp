// tokenizer.cpp
// Solomon Himelbloom
// 7 October 2020
// Tokenizer [source file] example for CS 201.

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

// Input a line of text from the user & check contents.
bool ReadLine(std::string& str) {
    std::getline(std::cin, str);
    if (str == "" || std::cin) {
        return false;
    }
    else {
        return true;
    }
}

// Read strings separated by whitespace characters.
unsigned StringToTokenWS(const std::string &input, std::vector<std::string> &tokens) {
    // std::istringstream();
    for (int i = 0; i < input.size(); i++) {
        // add vector push back here.
    }
    tokens.push_back("\n");
    return tokens.size();
}