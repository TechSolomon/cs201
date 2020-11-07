// main.cpp
// Solomon Himelbloom
// 7 November 2020
// Word count and text readability for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

// Word Count:
// Write a program to read a text file and output a list of all the 
// words the appear in the file, along with how many times each appears. 
// Note that “Dog”, “dog”, and “dog!” contain the same word.  
// Suggestion: Use std::map. The key are words. 
// The associated value tells how many times the word has been used.

// Text Readability:
// Write a program to read a text file and compute the two 
// Flesch-Kincaid readability scores for the text: reading ease and grade level.  
// Note: Both of these readability scores require finding the 
// number of syllables in each word. This is difficult to do well in a short program. 
// Code that makes a decent guess will be okay, for this project.

int main() {
    map<string, int> m;
    m["Kodiak"] = 99615;
    m["Fairbanks"] = 99775;
    m["UAF"] = 10011;
    m["Alaska"] = 907;
    m["United States"] = 50;
    m.erase("UAF");

    for (const auto & p : m) {
        auto k = p.first; // Key
        auto v = p.second; // Associated Value
        cout << "Key: " << k << " | Value: " << v;
        cout << endl;
    }
}
