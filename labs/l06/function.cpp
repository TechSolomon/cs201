// function.cpp
// Solomon Himelbloom
// 14 September 2020
// Function example for CS 201.

#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

void printString(string str) {
    cout << "<" << str << ">" << " and " << str.size() << " characters." << endl;
}

int main() {
    printString("Hello, world.");
    printString("This is a test function call.");
    printString("We can print strings like this as example for Lab #06.");
    
    return 0;
}
