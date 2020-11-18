// iterators.cpp
// Solomon Himelbloom
// 18 November 2020
// File input example for CS 201.

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

// Print 10x10 formatted block of intergers.
void printIntegersToFile() {
    std::vector<int> square;
    ofstream output ("output.txt", ofstream::out);

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
    ofstream fout("input.txt");
    fout << "Hello, input file." << endl;

    if (!fout) {
        cout << "Error opening file." << endl;
    }
}

int main() {
    printTextToFile();
    printIntegersToFile();
}
