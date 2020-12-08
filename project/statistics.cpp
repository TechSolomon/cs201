// statistics.cpp
// Solomon Himelbloom
// 7 November 2020 (Final Project)
// Readability statistics source file for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <random>
#include <fstream>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::ofstream;
using std::ifstream;
using std::istringstream;
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;

#include "statistics.hpp"

// Neatly organizes the key and associated value pairs.
void tableFormat() {
    cout << "VALUE (#) | KEY (word)" << endl;
}

// TODO: Strip characters and symbols from writing sample.
void countWords(const string & filename) {
    ifstream file(filename);
    if (!file) {
        if (file.eof()) {
            std::cout << "Finished reading file." << std::endl;
        }
        else {
            std::cout << "Error during transit." << std::endl;
            exit(1);
        }
    }

    map<string, int> total;
    string word;
}

// TODO: Find the total amount of characters in a given file.
// (https://www.cplusplus.com/reference/istream/istream/gcount/)
void countCharacters() {
    cout << "Counted characters here." << endl;
}

// int main() {
//     // File to read and ingest for readability statistics. 
//     const string fname = "writing-samples/university-of-alaska.txt";
    
//     tableFormat();
//     countWords(fname);
//     countCharacters();

//     return 0;
// }