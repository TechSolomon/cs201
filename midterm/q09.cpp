// midterm.cpp
// Solomon Himelbloom
// 18 October 2020
// CS 201 Midterm Exam

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void PrintSubStrings(std::string input, int permutations) {
    for (int i = 0; i < permutations; i++) {
        for (int length = 1; length <= permutations - i; length++) {
            cout << input.substr(i, length) << " ";
        }
    }
}

// Question #9: Write a C++ function PrintSubStrings that take a string 
// and prints all substrings in that string. 
// E.g. PrintSubStrings(“abc”) would output a b c ab bc abc.
int main() {
    std::string output = "abc";
    PrintSubStrings(output, output.length());
    return 0;
}