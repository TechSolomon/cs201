// characters.hpp
// Solomon Himelbloom
// 2 October 2020
// Characters in a String example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

void addedCharacters() {
    std::string program_line;
    std::string user_input = "";

    cout << "Input a word or string of characters: ";
    getline(cin, program_line);
    cout << "" << endl;

    for (int i = 0; i < program_line.size(); ++i){
        if ((program_line[i] >= 'A' && program_line[i] <= 'Z') 
        || (program_line[i] >= 'a' && program_line[i] <= 'z')) {
            user_input += program_line[i];
        }
    }

    program_line = user_input;
    cout << "String Output (with removed characters): " << program_line;
    cout << endl;
}

int main(int argc, char *argv[]) {
    addedCharacters();

    cout << "" << endl;
    cout << "Press ENTER to quit or another string of characters... ";

    while (cin.get() != '\n') {
        cout << ">> ";
        addedCharacters();
    }

    return 0;
}