// formatted_output.cpp
// Solomon Himelbloom
// 21 October 2020
// Formatted output example for CS 201.

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::setw;

int main(){
    cout << "Hello, formatted output." << endl;

    // set width (setw) example:
    cout << setw(3) << 12345;
    cout << setw(7) << 12345;
    cout << 12345;
}