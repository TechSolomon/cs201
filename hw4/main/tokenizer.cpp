// tokenizer.cpp
// Solomon Himelbloom
// 7 October 2020
// Tokenizer [source file] example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <sstream>
#include <cctype>

#include "tokenizer.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::istringstream;

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
    std::istringstream();
    std::vector<std::string> tokenSearchCompletion;
    for (int i = 0; i < input.size(); i++) {
        tokens.push_back(tokenSearchCompletion[i]);
    }
    tokens.push_back("\n");
    return tokens.size();
}

// Determine type of token (integer/identifier/string/whitespace/character/unknown).
void AnalyzeTokens(const std::vector<std::string> &tokens) {
    for (int i = 0; i < tokens.size(); i++) {
        std::string searchToken = tokens[i];
        if (std::isdigit(searchToken.at(0)) != 0) {
            cout << "[ integer ] " << endl;
        }
        else if (std::isdigit(searchToken.at(0)) != 0 || 
        std::isalpha(searchToken.at(0)) != 0) {
            cout << "[ identifer ] " << endl;
        }
        else if (searchToken == "\"") {
            cout << "[ string ] " << endl;
        }
        else if (std::isspace(searchToken.at(0))) {
            cout << "[ whitespace ] " << endl;
        }
        else if (searchToken == "+" || searchToken == "-" || searchToken == "*" || 
        searchToken == "/" || searchToken == "=" || searchToken == "%") {
            cout << "[ special_character ] " << endl;
        }
        else {
            cout << "[ unknown ] " << endl;
        }
    }
}