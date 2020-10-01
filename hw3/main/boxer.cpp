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
        while (j < name.size() + 2 + (boarder * 2)) {
            cout << "*";
            j++;
        }
    
        cout << "*";
        cout << "\n";
        i++;
    }
    
    int left1 = 0;
    while (left1 < boarder) {
        cout << "*";
        left1++;
    }

    int center1 = 0;
    while (center1 < name.size() + 2) {
        cout << " ";
        center1++;
    }

    int right1 = 0;
    while (right1 < boarder) {
        cout << "*";
        right1++;
    }
    
    cout << " " << endl;

    int left_spaces = 0;
    while (left_spaces < boarder) {
        cout << "*";
        left_spaces++;
    }
    
    cout << " ";
    cout << name;
    cout << " ";

    int right_spaces = 0;
    while (right_spaces < boarder) {
        cout << "*";
        right_spaces++;
    }

    cout << " " << endl;

    int left2 = 0;
    while (left2 < boarder) {
        cout << "*";
        left2++;
    }

    int center2 = 0;
    while (center2 < name.size() + 2) {
        cout << " ";
        center2++;
    }

    int right2 = 0;
    while (right2 < boarder) {
        cout << "*";
        right2++;
    }

    cout << " " << endl;

    int k = 0;

    while (k < boarder) {
        int l = 1;
        while (l < name.size() + 2 + (boarder * 2)) {
            cout << "*";
            l++;
        }
    
        cout << "*";
        cout << "\n";
        k++;
    }
}