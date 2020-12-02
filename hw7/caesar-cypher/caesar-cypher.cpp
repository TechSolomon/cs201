// caesar-cypher.cpp
// Solomon Himelbloom
// 28 November 2020
// Caesar cypher example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

void userRequestedInput() {
    std::string message_input = "";
    int integer_input = 0;
    
    cout << "\nEnter a message to cypher (blank line to end): ";
    cin >> message_input;

    cout << "Enter an integer to use as the shift: ";
    cin >> integer_input;

    cout << "\nResult: TODO";
    cout << "\nMessage Input = " << message_input;
    cout << "\nInteger Input = " << integer_input;
}

int main() {
    cout << "Caesar Cypher" << endl;
    userRequestedInput();
    cout << "\n\nProgram Complete" << endl;
}
