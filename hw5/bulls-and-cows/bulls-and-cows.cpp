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
    
    std::vector<int> createNumberVector { 1, 3, 5, 7 };
    
    for (int& v : createNumberVector) {
        std::cout << v << "";
    }

    cout << endl;
}

void guessingGame() {
    int bulls = 1;
    int cows = 1;

    vector<int> numberVector(4);
    vector<char> guessVector(0);
    cout << "numberVector size: " << numberVector.size() << endl;
    cout << "guessVector size: " << guessVector.size() << endl;

    for (auto i = 0; i < numberVector.size(); ++i) {
        cout << numberVector[i] << " ";
    }
    
    cout << endl;

    if (bulls != 1 && cows != 1) {
        cout << bulls << " bulls and " << cows << " cows." << endl;
    }

    else if (bulls != 1 && cows == 1) {
        cout << bulls << " bulls and " << cows << " cow." << endl;
    }

    else if (bulls == 1 && cows == 1) {
        cout << bulls << " bull and " << cows << " cows" << endl;
    }

    else {
        cout << bulls << " bull and " << cows << " cow" << endl;
    }

}

int main(int argc, char *argv[]) {
    int user_input = 0;
    int random_number = 1357;

    cout << "Enter a four digit number (no repeats & negative to quit): ";
    cin >> user_input;

    if (user_input == random_number) {
        randomNumber();
    }
    
    else if (user_input > 9999) {
        cout << "Input must be 4 digits in length (less than 10,000)." << endl;
    }
    
    else if (0 < user_input && user_input < 1000) {
        cout << "Input must be 4 digits in length (greater than 999)." << endl;
    }
    
    else if (user_input < 0) {
        randomNumber();
    }
    
    else {
        guessingGame();
    }

    return 0;
}