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
    std::string str;
    std::string exit_code;
    std::string user_input = "";
    std::vector<std::string> tokens;

    cout << "Please type in some text. When you are done, type “End”, “end” or “END”: ";

    do {
        cin >> exit_code;

        if (ReadLine(str)) {
            StringToTokenWS(str, tokens);
        }

    } while (exit_code != "End" && exit_code != "end" && exit_code != "END");
    
    cout << "\n" << "TOKENIZER OUTPUT:" 
    << "\n" << "\n" << exit_code << "\n" << endl;
    
    TokenOutput();
    AnalyzeTokens(tokens);

    return 0;
}