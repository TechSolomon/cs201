// asciiart.cpp
// Solomon Himelbloom
// 28 November 2020
// ASCII art example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::map;
using std::string;

// Class Load Portable Pixmap Format (PPM) Images
class LoadPPMImages {

public:
    // ***** LoadPPMImages class: constructors *****

    // TODO: Put something here!

    // ***** LoadPPMImages: general public member functions *****

    void print() const {
        cout << "SOMETHING NEEDS TO GO HERE"; // DUMMY
        // TODO: Write this!
    }

    // ***** LoadPPMImages: data members *****
private:
    int _hr;  // Hours past midnight
    int _min; // Minutes past the hour
    int _sec; // Seconds past the minute

}; // End class LoadPPMImages

int main() {
    // Print header
    cout << "Here are some images:" << endl;
    cout << endl;

    // Make an Image object; print it
    LoadPPMImages i1;
    cout << "Image #1: [";
    i1.print();
    cout << "]" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n');
}
