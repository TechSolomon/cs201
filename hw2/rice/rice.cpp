// rice.cpp
// Solomon Himelbloom
// 20 September 2020
// Rice and chessboard (exponential growth) example for CS 201.

#include <iostream>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

double current_square (int square) {
    return pow(2, square - 1);
}

double previous_square (int square) {
    double total = 0;
    for (int i = 1; i <= square; i++) {
        total = current_square(i);
    }

    return total;
}

int main() {
    int i = 1;
    int requested_rice, current_square, previous_square, total_rice = 0;

    cout << "NEW MESSAGE (INVENTOR -> EMPEROR): What is your desired amount of rice? ";
    cin >> requested_rice;

    current_square = 0;
    previous_square = 0;
    total_rice = 0;

    for (i = 1; i < requested_rice; i++) {

        current_square += 1;
        previous_square = current_square * current_square;
        total_rice += current_square + previous_square;

        cout << "Current Square #" << current_square << endl;
        cout << "Previous Square: " << previous_square << endl;
        cout << "Total Rice: " << total_rice << endl;
        cout << " " << endl;
    }

    cout << " " << endl;
    cout << "NEW MESSAGE (EMPEROR -> INVENTOR): Grains of rice requested: " << requested_rice << endl; 
    cout << " " << endl;

    return 0;
}