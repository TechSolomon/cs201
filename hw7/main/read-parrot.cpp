// read-parrot.cpp
// Solomon Himelbloom
// 30 November 2020
// Class example of reading parrot.ppm file for CS 201.
// 
// TODO:
// 1. finish HW7 refactor (11/30/2020)
// 2. finish reading – store (RGB) into a vector
// 3. refactor: move read to a function
// 4. add: create a class for PPM files
// 5. convert to grayscale (RGB) -> Gray
// 6. convert: Gray to ASCII characters

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
        // TODO: check status for end-of-file (EOF) errors.
        fin >> r >> g >> b;
        if (!fin) {
            cout << "Error reading the pixels." << endl;
            exit(4);
        }
        // TODO: push to back of vector (6,400 pixels; each has an R,G,B value).
        // cout << "<" << red << "," << green << "," << blue << ">";
        // Implement Y = 0.2126R + 0.7152G + 0.0722B
        y = 0.2126 * r + 0.7152 * g + 0.0722 * b;
        // cout << " -> " << y;
        // Make sure the y-value is [0, 255].
        if (y < 0 || y > 255) {
            cout << "ERROR: the y-value is out of range." << endl;
            exit(6);
        }
        // Map the y-value to a character.
        const char values[] = " .,-+*!&@BOQ0#MW"; 
        // TODO: find 16 'toner' values in increasing weight.
        int val_map = y / 16;
        // values [0, 15] and y [0, 255]; so / by 16
        // cout << " -> " << val_map << " -> " << values[val_map] << endl;
        // TODO: adjust val_map to 16 with additional character values.

        cout << values[val_map];
        if (i % 80 == 79) {
            cout << endl;
        }
    }

    cout << "\nDone: the pixels2read task has been completed." << endl;
}