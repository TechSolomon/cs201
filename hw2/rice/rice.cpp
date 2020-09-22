// rice.cpp
// Solomon Himelbloom
// 20 September 2020
// Rice & Chessboard (exponential growth) example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

int main() {
    int i = 1;
    int current_square, previous_square = 0;

    current_square = 0;
    previous_square = 0;

    for (i = 1; i < 4; i++) {

        current_square += 1;

        cout << "Current Square: " << current_square << endl;
        cout << "Previous Square: " << previous_square << endl;
        cout << " " << endl;
    }

    return 0;
}