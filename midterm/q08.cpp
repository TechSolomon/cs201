// midterm.cpp
// Solomon Himelbloom
// 18 October 2020
// CS 201 – Midterm Exam

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

bool isSorted(vector<int> verify) {
    for (int i = 0; i < verify.size() - 1; i++) {
        if (verify[i] > verify[i+1]) {
            return false;
            cout << "The vector provided is not sorted." << endl;
        }
        else {
            return true;
            cout << "The vector provided is sorted." << endl;
        }
    }
}

// Question #8: Write a C++ function isSorted that takes a vector of ints 
// and returns true of a vector is sorted or false if is not.
int main() {
    cout << "hello, isSorted" << endl;

    vector<int> increasing { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> decreasing { 9, 8, 7, 6, 5, 4, 3, 2, 1 };

    isSorted(increasing);
    isSorted(decreasing);
}