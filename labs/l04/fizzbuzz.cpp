// character_box.cpp
// Solomon Himelbloom
// 9 September 2020
// Fizz buzz example (common coding interview question) for CS 201.

#include <iostream>
using std::cout;
using std::endl;

int main() {
    int i = 1;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0) {
            cout << "Fizz" << endl;
        }

        else if (i % 5 == 0) {
            cout << "Buzz" << endl;
        }

        // else if (i % 3 && i % 5 == 0) {
        //     cout << "Fizz Buzz" << endl;
        // }

        else {
            cout << i << endl;
        }
    }
}