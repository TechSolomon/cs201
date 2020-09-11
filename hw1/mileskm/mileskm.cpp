// mileskm.cpp
// Solomon Himelbloom
// 11 September 2020
// Miles to kilometers conversion for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {
    float miles, kilometers;

    cout << "Enter the number of miles: ";
    cin >> miles;

    kilometers = miles * 1.609;

    if (miles == 1) {
        cout << miles << " mile is equal to " << kilometers << " kilometers." << endl; 
    }

    else {
        cout << miles << " miles is equal to " << kilometers << " kilometers." << endl; 
    }
}