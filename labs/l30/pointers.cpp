// pointers.cpp
// Solomon Himelbloom
// 20 November 2020
// Pointers example for CS 201.
//
// pointers.cpp
// Glenn G. Chappell
// 9 Apr 2018
//
// For CS 201 Spring 2018
// Programming with Pointers
//
// Modified 11/14/18
// Chris Hartman
// For CS 201 Fall 2018

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// changeInt -> p points to value to change
// Given a pointer to int, change the value pointed to.
void changeInt(int *p) {
    if (p != nullptr) {
        *p = 7;
    }
    else {
        return;
    }
}

int main() {
    int ss = 3;
    int tt = 4;

    cout << "START" << endl;
    cout << "Value of ss: " << ss << endl;
    cout << "Value of tt: " << tt << endl;
    cout << endl;

    int *ip;

    // *** HERE, ADD CODE THAT USES ip to modify variables ss and tt
  
    ip = &ss;
    tt = *ip;

    ip = nullptr;

    cout << "AFTER USING ip" << endl;
    cout << "Value of ss: " << ss << endl;
    cout << "Value of tt: " << tt << endl;
    cout << endl;

    // *** UNCOMMENT AND COMPLETE THE FOLLOWING LINE
    // Pass a pointer to ss to function changeInt
    changeInt(&ss);

    cout << "AFTER CALLING changeInt" << endl;
    cout << "Value of ss: " << ss << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER ";
    while (cin.get() != '\n');

    return 0;
}
