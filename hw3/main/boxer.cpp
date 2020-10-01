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

int main() {
    std::string name = "Dog-Cat-Moose";
    int number = 4;
    cout << "str: " << name << endl;
    cout << "str len: " << name.size() << endl;
    cout << "number: " << number << endl;
    cout << "" << endl;

    int i = 0;
        
    while (i < number) {
        int j = 1;
        while (j < name.size() + 2 + (number * 2)) {
            cout << "*";
            j++;
        }
    
        cout << "*";
        cout << "\n";
        i++;
    }

    int left_spaces = 0;
    while (left_spaces < number) {
        cout << "#";
        left_spaces++;
    }

    cout << " ";
    cout << name;
    cout << " ";

    int right_spaces = 0;
    while (right_spaces < number) {
        cout << "#";
        right_spaces++;
    }

    cout << " " << endl;

    int k = 0;

    while (k < number) {
        int l = 1;
        while (l < name.size() + 2 + (number * 2)) {
            cout << "*";
            l++;
        }
    
        cout << "*";
        cout << "\n";
        k++;
    }
}