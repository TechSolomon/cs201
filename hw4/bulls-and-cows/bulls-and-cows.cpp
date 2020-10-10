// bulls-and-cows.cpp
// Solomon Himelbloom
// 7 October 2020
// Bulls and cows game example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

void randomNumber() {
    int random_number = 1357;
    cout << "Random integer: " << random_number << endl;
}

void guessingGame() {
    cout << "1 bull and 1 cow." << endl;
}

int main(int argc, char *argv[]) {
    int user_input = 0;
    int random_number = 1357;

    std::vector<std::string> numbers;

    cout << "Enter a four digit number (no repeats & negative to quit): ";
    cin >> user_input;

    if (user_input == random_number) {
        randomNumber();
    }
    
    else {
        guessingGame();
    }

    return 0;
}