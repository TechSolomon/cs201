// proud-polish.cpp
// Solomon Himelbloom
// 2 December 2020
// Proud polished program example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

/*
hw2 (rice.cpp) --> proud-polish revision:

The rice program contains incorrect calculations.

You may notice that in your "previous square total", 
the number will always be one less than the next power 
of two (based on the mathematical sum of the series 2^i 
from i=0 to n being equal to 2^(n+1) - 1). 

Thus, we can see that there will actually be 
1023 grains of rice on the 9th square, and similarly the 
19th and 29th for one million and one billion, respectively.
*/

double currentSquare (int square) {
    return pow(2, square - 1);
}

double previousSquare (int square) {
    double total = 0;
    for (int i = 1; i <= square; i++) {
        total = currentSquare(i);
    }

    return total;
}

int main() {
    double i, requested_square = 0;
    double square_number = 0;
    double current_square = 0;
    double previous_square = 0;

    cout << "What is your desired chess square? ";
    cin >> requested_square;
    cout << " " << endl;

    for (i = 0; i < requested_square; i++) {
        previous_square += current_square;
        square_number += 1;
        current_square = (pow(2, square_number + 1) - 1);
        
        cout << "SQUARE #" << square_number << ":" << endl;
        cout << "current square: " << current_square << endl;
        cout << "previous square total: " << previous_square << endl;
        cout << " " << endl;
    }

    cout << "cs201: hw8 (proud-polish) questions..." << endl;
    cout << "At least 1,000 (grains of rice): SQUARE #9" << endl;
    cout << "At least 1,000,000 (grains of rice): SQUARE #19" << endl;
    cout << "At least 1,000,000,000 (grains of rice): SQUARE #29" << endl;
    cout << "Largest number (int): SQUARE #31" << endl;
    cout << "Largest number (float): SQUARE #1024" << endl;
}