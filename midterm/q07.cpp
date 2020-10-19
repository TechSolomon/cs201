// q07.cpp
// Solomon Himelbloom
// 18 October 2020
// CS 201 Midterm Exam

#include <iostream>
#include <stdio.h>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void print_range(int lower, int higher) {
    int i = (lower + 1);
    while (i < higher) {
        cout << i << " ";
        i += 1;
    }

    cout << "\n" << endl;
    cout << "lower bound (excluded) = " << lower << endl;
    cout << "higher (excluded) = " << higher << endl;
}

// Question #7: Write a C++ function print_range that takes two integers 
// and prints each integer in the range between them. 
// E.g. print_range(3, 8) would output 4 5 6 7.
int main() {
    print_range(3, 8);
}