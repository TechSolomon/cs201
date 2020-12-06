// rice.cpp
// Solomon Himelbloom
// 20 September 2020
// Rice and chessboard (exponential growth) example for CS 201.

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

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
        current_square = pow(2, square_number - 1);
        
        cout << "SQUARE #" << square_number << ":" << endl;
        cout << "current square: " << current_square << endl;
        cout << "previous square total: " << previous_square << endl;
        cout << " " << endl;
    }

    cout << "cs201 – hw2 questions" << endl;
    cout << "At least 1,000 (grains of rice): SQUARE #10" << endl;
    cout << "At least 1,000,000 (grains of rice): SQUARE #21" << endl;
    cout << "At least 1,000,000,000 (grains of rice): SQUARE #31" << endl;
    cout << "Largest number (int): SQUARE #31" << endl;
    cout << "Largest number (float): SQUARE #1024" << endl;
}