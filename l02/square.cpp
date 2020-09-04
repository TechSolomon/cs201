// square.cpp
// Solomon Himelbloom
// 4 September 2020
// Squared number lab example for CS 201.

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int n;
    cout << "Type in an integer: ";
    cin >> n;
    cout << "You typed in: " << n << endl;
    n = (n + 1) * (n + 1);
    cout << "Your new number (following number, squared) is: " << n << endl;
}