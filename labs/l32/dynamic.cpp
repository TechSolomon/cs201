// dynamic.cpp
// Solomon Himelbloom
// 30 November 2020
// Dynamic allocation example for CS 201.
// 
// dynamic.cpp
// Glenn G. Chappell
// 13 Apr 2018
//
// For CS 201 Spring 2018
// Dynamic Allocation
//
// Modified 11/19/18
// Chris Hartman
// For CS 201 Fall 2018

#include <iostream>
#include <array>
using std::cout;
using std::endl;
using std::cin;


// printThree
// Takes a pointer to an int array, which must have size at least 3 --
// or a null pointer. Prints the first three items in the array, or
// "NULL POINTER", if the passed pointer is null.
void printThree(int const * p) {
    if (p == nullptr) {
        cout << "NULL POINTER" << endl;
    }
    else {
        cout << p[0] << " " << p[1] << " " << p[2] << endl;
    }
}


// Main Program
// Do some dynamic allocation. Call printThree multiple times.
int main() {
    // Make a dynamic array of int, with size at least three. Set the
    // values of the first three items in the array.
    // Then call printThree, passing (a pointer to) the array.
    int *da = new int[25];
    da[0] = 0;
    da[1] = 1;
    da[2] = 1;
    da[3] = 2;
    da[4] = 3;
    da[5] = 5;
    da[6] = 8;
    da[7] = 13;
    da[8] = 21;
    da[9] = 34;
    printThree(da);

    // Call printThree with a null pointer.
    printThree(nullptr);

    // Deallocate the dynamic array.
    delete [] da;

    // Wait for user
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n');
}

