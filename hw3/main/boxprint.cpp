// boxprint.cpp
// Solomon Himelbloom
// 23 September 2020
// Text in a box example for CS 201.

#include "boxer.hpp"
#include <iostream>
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

    cout << "BOX TEXT: " << box_text << endl;
    cout << "# OF LAYERS: " << box_layers << endl;
}