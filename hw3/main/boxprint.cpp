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
        cout << "" << endl;

        int i = 0;
        
        while (i < box_layers) {
            int j = 1;
            while (j < box_layers) {
                cout << "*";
                j++;
            }
        
            cout << "*";
            cout << "\n";
            i++;
        }

        cout << "" << endl;
        cout << "BOX INPUT TEXT: " << box_text << endl;
        cout << "# OF LAYERS: " << box_layers << endl;
        cout << "STRING LENGTH: " << box_text.size() << endl;
    }

    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;

    return 0;
}