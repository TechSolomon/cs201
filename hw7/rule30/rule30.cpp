// rule30.cpp
// Solomon Himelbloom
// 28 November 2020
// Rule 30 example for CS 201.

#include "Color3.hpp"
#include "Image3.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;
using std::sort;
using std::reverse;
using std::ofstream;
using std::ifstream;

/*
    Rule 30 Formula: New = Left XOR (Center OR Right)
*/

// Print 10x10 formatted block of intergers.
void printIntegersToFile() {
    const string file_name = "rule30.txt";

    std::vector<int> square;
    ofstream output (file_name, ofstream::out);

    for (int i = 0; i < 100; i++) {
        square.push_back(1 + i);
    }
    
    for (std::size_t i = 0; i < square.size(); i++) {
        output << std::setw(4) << square[i];
        
        if ((1 + i) % 10 == 0) {
            output << "\n";
        }
    }
}

// Check for errors on file open and print desired text.
void printTextToFile() {
    const string file_name = "rule30.txt";

    ofstream fout(file_name);
    fout << "Hello, input file." << endl;

    if (!fout) {
        cout << "Error opening file." << endl;
    }
}

int main() {
    const string file_name = "rule30.txt";

    std::cout << "Hello, rule 30." << endl;
    printTextToFile();
    std::cout << "Printing process to " << file_name << " complete." << endl;
}
