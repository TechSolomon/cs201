// greatest.cpp
// Solomon Himelbloom
// 11 September 2020
// Greatest example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    int user_input, max_input;
    int count = 0;

    cout << "Enter a sequence of positive integrers, ending with zero." << endl;
    cout << "I will print the greatest positive number entered." << endl;
    
    cout << "Enter a positive integer (0 to end): ";
    cin >> user_input;

    if (user_input <= 0) {
        cout << " " << endl;
        cout << "No positive, non-zero integers were entered." << endl;
    }

    else {
        while (user_input != 0) {
            cout << "Enter a positive integer (0 to end): ";
            cin >> user_input;

            // if (user_input > max_input) {
            //     user_input = max_input;
            // }

            // else {
            //     break;
            // }

            count++;
        }

        cout << " " << endl;
        cout << "The greatest number entered: " << user_input << endl;
    }
    
}