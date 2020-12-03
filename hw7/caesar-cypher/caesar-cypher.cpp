// caesar-cypher.cpp
// Solomon Himelbloom
// 28 November 2020
// Caesar cypher example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <fstream>
#include <iomanip>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::vector;
using std::sort;
using std::reverse;
using std::ofstream;
using std::ifstream;

void userRequestedInput() {
    std::string program_line;
    std::string message_input = "";
    int integer_input = 0;

    cout << "\nEnter a message to cypher (blank line to end): ";
    getline(cin, program_line);
    cout << "" << endl;

    cout << "Enter an integer to use as the shift: ";
    cin >> integer_input;
    
    // Validate alphanumeric user input. 
    for (int i = 0; i < program_line.size(); ++i){
        if ((program_line[i] >= 'A' && program_line[i] <= 'Z') 
        || (program_line[i] >= 'a' && program_line[i] <= 'z')) {
            message_input += program_line[i];
        }
    }

    // Generic shift for character cyphers.
    const char upper_case[] 
        = "ABCDEFGHIJKLMNOPQURTUVWXYZABCDEFGHIJKLMNOPQURTUVWXYZABCDEFGHIJKLMNOPQURTUVWXYZ";
	const char lower_case[] 
        = "abcdefghijklmnopqurtuvwxyzabcdefghijklmnopqurtuvwxyzabcdefghijklmnopqurtuvwxyz";

    // Print the results.
    cout << "\nRESULT";
    cout << "\nMessage Input = " << message_input;
    cout << "\nInteger Input = " << integer_input;
}

int main(int argc, char *argv[]) {
    cout << "Caesar Cypher" << endl;
    userRequestedInput();
    cout << "\n\nProgram Complete" << endl;

    // // Wait for user for end of program.
    // while (cin.get() != '\n') {
    //     cout << ">>";
    //     userRequestedInput();
    // }

    return 0;
}