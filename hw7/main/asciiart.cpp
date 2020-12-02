// asciiart.cpp
// Solomon Himelbloom
// 28 November 2020
// ASCII art example for CS 201.
// 
// finish reading – store (RGB) into a vector
// refactor: move read to a function
// add: create a class for PPM files

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::map;
using std::string;

// Sample parrot.ppm file:
// P3
// # CREATOR: GIMP PNM Filter Version 1.1
// 80 80
// 255
// 0
// 0
// 1

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
    const string file_name = "parrot.ppm";
    ifstream fin(file_name);
    if (!fin) {
        cout << "Error opening " << file_name << endl;
        exit(1);
    }
    cout << "Opened " << file_name << endl;

    // Read and verify the magic number.
    string line;
    getline(fin, line);
    if (line[0]=='P' && line[1]=='3') {
        cout << "Found PPM (text)." << endl;
    }
    else {
        cout << "Unable to read magic number P3." << endl;
        exit(2);
    }

    // Quick and dirty – process the comment.
    getline(fin, line);
    if (line[0]=='#') {
        cout << "Currently ignoring the comment." << endl;
    }

    // Input (and print) the x + y image size and maximum value.
    int xres, yres, maxval;
    fin >> xres >> yres >> maxval;
    if (!fin) { 
        cout << "Error reading resolution." << endl; 
        exit(3); 
    }
    cout << "Image Size: " << xres << "x" << yres << endl;
    cout << "Maximum Value: " << maxval << endl;

    int r, g, b, y;
    int pixels2read = xres * yres;
    for (int i = 0; i < pixels2read; i++) {
        // Check status for end-of-file (EOF) errors.
        fin >> r >> g >> b;
        if (!fin) {
            cout << "Error reading the pixels." << endl;
            exit(4);
        }
        // TODO: push to back of vector (6,400 pixels; each has an R,G,B value).
        y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
        // Make sure the y-value is [0, 255].
        if (y < 0 || y > 255) {
            cout << "ERROR: the y-value is out of range." << endl;
            exit(6);
        }
        // Map the y-value to a character.
        const char values[] = " .,-+*!&@BOQ0#MW"; 
        int val_map = y / 16;

        cout << values[val_map];
        if (i % 80 == 79) {
            cout << endl;
        }
    }

    cout << "\nDone: the pixels2read task has been completed." << endl;
}

// int main() {
//     // Print header
//     cout << "Here are some images:" << endl;
//     cout << endl;

//     // Make an Image object; print it
//     LoadPPMImages i1;
//     cout << "Image #1: [";
//     i1.print();
//     cout << "]" << endl;
//     cout << endl;

//     // Wait for user
//     cout << "PRESS ENTER to quit ";
//     while (cin.get() != '\n');
// }
