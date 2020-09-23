// testing.cpp
// Solomon Himelbloom
// 22 September 2020
// Rice example for CS 201.

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

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
    int i, requested_rice = 0;
    int square_number = 0;
    int current_square = 0;
    int previous_square = 0;

    cout << "What is your desired amount of rice? [in grains] ";
    cin >> requested_rice;

    for (i = 0; i < requested_rice; i++) {
        previous_square += current_square;
        square_number += 1;
        current_square = pow(2, square_number - 1);
        
        cout << "SQUARE #" << square_number << ":" << endl;
        cout << "current square: " << current_square << endl;
        cout << "previous square total: " << previous_square << endl;
        cout << " " << endl;
    }

    cout << "Grains of rice requested: " << requested_rice << endl;
    cout << "Largest number (int): SQUARE #31" << endl;
    cout << "Largest number (float): SQUARE #1024" << endl;
}