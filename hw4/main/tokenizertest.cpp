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
    std::string exit_code;
    std::vector<std::string> tokens;

    cout << "Please type in some text. When you are done, type “End”, “end” or “END”: ";

    do {
        cin >> exit_code;
    } while (exit_code != "End" && exit_code != "end" && exit_code != "END");

    AnalyzeTokens(tokens);

    return 0;
}