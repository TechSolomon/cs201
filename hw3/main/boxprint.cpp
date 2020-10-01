// boxprint.cpp
// Solomon Himelbloom
// 23 September 2020
// Text in a box example for CS 201.

#include "boxer.hpp"
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char * argv[]) {
    std::string box_text = "";
    int box_layers = 0;

    cout << "Input text to be included in the box: ";
    cin >> box_text;

    cout << "Enter an integer (number of layers): ";
    cin >> box_layers;

    if (box_layers <= 0) {
        cout << "You typed in zero, a negative number, or a letter." << endl;
        cout << "Please try again with a positive integer." << endl;
    }

    else {
        boxPrinter(box_text, box_layers);
    }

    // TODO: add user-generated repeated output with an appropriate exit.
}