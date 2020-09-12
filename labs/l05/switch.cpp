// switch.cpp
// Solomon Himelbloom
// 11 September 2020
// Switch example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    cout << "Hello, world." << endl;

    int n;

    switch (n % 10) 
    {
    case 2:
        cout << "two";
        break;

    case 1:
        cout << "one";
        break;

    case 3:
        cout << "BLAH BLAH";
        break;
    
    default:
        cout << "Something else.";
        break;
    }

    cout << " " << endl;
    cout << "Press ENTER to quit ";
    while (cin.get() != '\n') ;

    return 0;
}