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

void guessingGame() {
    cout << "1 bull and 1 cow." << endl;
}

int main(int argc, char *argv[]) {
    int user_input = 0;

    std::vector<std::string> numbers;

    cout << "Enter a four digit number (no repeats & negative to quit): ";
    cin >> user_input;

    guessingGame();

    return 0;
}