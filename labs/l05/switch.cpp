// switch.cpp
// Solomon Himelbloom
// 11 September 2020
// Switch example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main() {

    int n, first_number, second_number;
    int addition, subtraction, multiplication, division = 0;

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
    
    default:
        cout << "Lucky you! This is the default switch to print something else." << endl;
        break;
    }

    // cout << " " << endl;
    // cout << "Press ENTER to quit ";
    // while (cin.get() != '\n');

    return 0;
}