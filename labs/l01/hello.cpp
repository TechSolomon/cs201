// hello.cpp
// Solomon Himelbloom
// 31 August 2020
// Hello world lab example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Hello, world." << endl;
    cout << "Hello, world." << endl;
    cout << "Hello, world." << endl;
    cout << "Hello, world." << endl;
    cout << "Hello, world." << endl;

    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;

    return 0;
}