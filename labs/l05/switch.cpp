// switch.cpp
// Solomon Himelbloom
// 11 September 2020
// Switch example for CS 201.

#include <iostream>
#include <stdio.h>
#include <math.h>
using std::cout;
using std::endl;
using std::cin;

int main() {

    int n, first_number, second_number;
    int addition, subtraction, multiplication, division, exponent = 0;

    cout << "Enter the 1st number: ";
    cin >> first_number;

    cout << "Enter the 2nd number: ";
    cin >> second_number;

    switch (n % 10) {
    case 1:
        addition = (first_number + second_number);
        cout << first_number << " + " << second_number << " = " << addition << endl;
        break;
    
    case 2:
        subtraction = (first_number - second_number);
        cout << first_number << " - " << second_number << " = " << subtraction << endl;
        break;

    case 3:
        multiplication = (first_number * second_number);
        cout << first_number << " * " << second_number << " = " << multiplication << endl;
        break;

    case 4:
        division = (first_number / second_number);
        cout << first_number << " / " << second_number << " = " << division << endl;
        break;

    case 5:
        exponent = pow(first_number, second_number);
        cout << first_number << " ^ " << second_number << " = " << exponent << endl;
        break;
    
    default:
        cout << "Lucky you! This is the default switch to print something else." << endl;
        break;
    }

    // cout << " " << endl;
    // cout << "Press ENTER to quit ";
    // while (cin.get() != '\n');

    return 0;
}