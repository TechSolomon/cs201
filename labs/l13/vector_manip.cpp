// userInput.hpp
// Solomon Himelbloom
// 7 October 2020
// Programming with vectors example for CS 201.

#include "vector_manip.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void firstLetterChange(std::vector<std::string> & strVec, const char & c) {
    for (string & word:strVec) {
        string letter_change = word;
        letter_change[0];
        cout << word << " ";
    }
}

void addUserStrings(std::vector<std::string> & strVec, const std::string sentinel) {

}