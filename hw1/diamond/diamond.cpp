// diamond.cpp
// Solomon Himelbloom
// 10 September 2020
// Diamond example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    int diamond_column, diamond_row, user_input;

    cout << "Type in a positive integer: ";
    cin >> user_input;

    if (user_input <= 0) {
        cout << "You typed in zero, a negative number, or a letter." << endl;
        cout << "Please try again with a positive integer." << endl;
    }

    else {
        for (diamond_row = 0; diamond_row <= user_input; diamond_row++) {
            for (diamond_column = 1; diamond_column <= user_input - diamond_row; diamond_column++) {
                cout << " ";
            }
            for (diamond_column = 1; diamond_column <= 2 * diamond_row - 1; diamond_column++) {
                cout << "#";
            }
            cout << endl;
        }

        for (diamond_row = user_input - 1; diamond_row >= 1; diamond_row--) {
            for (diamond_column = 1; diamond_column <= user_input - diamond_row; diamond_column++) {
                cout << " ";
            }
            for (diamond_column = 1; diamond_column <= 2 * diamond_row - 1; diamond_column++) {
                cout << "#";
            }
            cout << endl;
        } 
    }
}