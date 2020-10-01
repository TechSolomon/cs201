// boxer.cpp
// Solomon Himelbloom
// 30 September 2020
// Text in a box [source file] example for CS 201.

#include "boxer.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void boxPrinter(std::string name, int boarder) {
    cout << "" << endl;
    cout << "BOX INPUT TEXT: " << name << endl;
    cout << "# OF LAYERS: " << boarder << endl;
    cout << "STRING LENGTH: " << name.size() << endl;
    cout << "" << endl;

    int i = 0;
    
    while (i < boarder) {
        int j = 1;
        while (j < boarder) {
            cout << "*";
            j++;
        }
    
        cout << "*";
        cout << "\n";
        i++;
    }
}