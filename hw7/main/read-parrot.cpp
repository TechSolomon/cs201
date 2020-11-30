// read-parrot.cpp
// Solomon Himelbloom
// 30 November 2020
// Class example of reading parrot.ppm file for CS 201.

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
    ifstream fin("parrot.ppm");
    if (!fin) {
        cout << "Error opneing parrot.ppm" << endl;
        exit(1);
    }
    cout << "Opened parrot.ppm" << endl;
}