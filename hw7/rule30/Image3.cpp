// Image3.hpp
// Solomon Himelbloom
// Implementation for Image3 class
// Original Author: Jonathan Metzgar
// CS 201 course
#include "Image3.hpp"
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

// Image3 Constructor
Image3::Image3(unsigned width, unsigned height) {
	int w, h;
	w = width;
	h = height;
	pixels.resize(height * width);
}

// Return a pixel from the image
const Color3& Image3::getPixel(unsigned x, unsigned y) const {
	int fin, xres, yres, maxval;
    // fin >> xres >> yres >> maxval;
    if (!fin) { 
        cout << "Error reading resolution." << endl; 
        exit(3); 
    }
    cout << "Image Size: " << xres << "x" << yres << endl;
    cout << "Maximum Value: " << maxval << endl;

	return pixels[y * w + x];
}

void Image3::setPixel(unsigned x, unsigned y, const Color3& color) {
	int r, g, b, pixels2read;
    for (int i = 0; i < pixels2read; i++) {
        // Map the y-value to a character.
        const char values[] = " .,-+*!&@BOQ0#MW"; 
        int val_map = y / 16;

        cout << values[val_map];
        if (i % 80 == 79) {
            cout << endl;
        }
    }
}

bool Image3::savePPM(const std::string& path) const {
	// REQUIREMENT: Use the STREAM operators for the file contents
	return false;
}

bool Image3::loadPPM(const std::string& path) {
	// REQUIREMENT: Use the STREAM operators for the file contents
	return false;
}

void Image3::printASCII(std::ostream& ostr) const {
	int fin, r, g, b, xres, yres, vector;
    int pixels2read = xres * yres;
    for (int i = 0; i < pixels2read; i++) {
        // Check status for end-of-file (EOF) errors.
        if (!fin) {
            cout << "Error reading the pixels." << endl;
            exit(4);
        }
        // Push to back of vector (6,400 pixels; each has an R,G,B value).
        vector = 0.2126 * r + 0.7152 * g + 0.0722 * b;
        // Make sure the y-value is [0, 255].
        if (vector < 0 || vector > 255) {
            cout << "ERROR: the y-value is out of range." << endl;
            exit(6);
        }
    }
}

// STREAM OPERATORS for IMAGE3 class

std::ostream& operator<<(std::ostream& ostr, const Image3& image) {
	return ostr;
}

std::istream& operator>>(std::istream& istr, Image3& image) {
	return istr;
}
