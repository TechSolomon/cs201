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

// Question #2: What is a range-based for loop? Given an example.
int main() {
    cout << "Range-based for loop example:" << endl;

    std::vector<int> range{0, 25, 50};
    range.push_back(75);
    range.push_back(100);

    for (int i : range) {
        cout << i << endl;
    }
}