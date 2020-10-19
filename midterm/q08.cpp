// midterm.cpp
// Solomon Himelbloom
// 18 October 2020
// CS 201 Midterm Exam

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
        }
        else {
            return true;
        }
    }
}

// Question #8: Write a C++ function isSorted that takes a vector of ints 
// and returns true of a vector is sorted or false if is not.
int main() {
    vector<int> increasing { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    vector<int> decreasing { 9, 8, 7, 6, 5, 4, 3, 2, 1 };
    vector<int> up { 1, 2, 3 };
    vector<int> down { 3, 2, 1 };

    // Boolean debug information:
    // 1 = sorted (true); 0 = not sorted (false)
    cout << "increasing vector: " << isSorted(std::vector(increasing)) << endl;
    cout << "decreasing vector: " << isSorted(std::vector(decreasing)) << endl;
    cout << "up vector: " << isSorted(std::vector(up)) << endl;
    cout << "down vector: " << isSorted(std::vector(down)) << endl;
    
    // Output information to the user based on if/else logic.
    if (isSorted(std::vector(increasing)) == 1) {
        cout << "The vector provided is sorted." << endl;
    }
    else {
        cout << "The vector provided is not sorted." << endl; 
    }

    if (isSorted(std::vector(decreasing)) == 1) {
        cout << "The vector provided is sorted." << endl;
    }
    else {
        cout << "The vector provided is not sorted." << endl; 
    }

    if (isSorted(std::vector(up)) == 1) {
        cout << "The vector provided is sorted." << endl;
    }
    else {
        cout << "The vector provided is not sorted." << endl; 
    }

    if (isSorted(std::vector(down)) == 1) {
        cout << "The vector provided is sorted." << endl;
    }
    else {
        cout << "The vector provided is not sorted." << endl; 
    }
}