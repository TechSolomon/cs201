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
    std::string program_line;
    std::string message_input = "";
    int integer_input = 0;

    cout << "\nEnter a message to cypher (blank line to end): ";
    getline(cin, program_line);
    cout << "" << endl;

    for (int i = 0; i < program_line.size(); ++i){
        if ((program_line[i] >= 'A' && program_line[i] <= 'Z') 
        || (program_line[i] >= 'a' && program_line[i] <= 'z')) {
            message_input += program_line[i];
        }
    }

    program_line = message_input;
    cout << "String Output (with removed characters): " << program_line;
    cout << endl;

    cout << "\nResult:";
    cout << "\nMessage Input = " << message_input;
    cout << "\nInteger Input = " << integer_input;
}

int main(int argc, char *argv[]) {
    cout << "Caesar Cypher" << endl;
    userRequestedInput();
    cout << "\n\nProgram Complete" << endl;

    cout << "" << endl;
    cout << "Press ENTER to quit or another string of characters to cypher... ";

    while (cin.get() != '\n') {
        cout << ">>";
        userRequestedInput();
    }

    return 0;
}