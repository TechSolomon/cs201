// midterm.cpp
// Solomon Himelbloom
// 18 October 2020
// CS 201 – Midterm Exam

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// Question #1: Convert the following for loop to a while loop.
// for ( int i=-20 ; i<1999 ; i+=3 ) cout << i;

int main() {
    int i = -20;
    
    while ( i < 1999) {
        cout << i;
        i += 3;
    }
}