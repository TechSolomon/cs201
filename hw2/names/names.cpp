// names.cpp
// Solomon Himelbloom
// 20 September 2020
// Names (and vectors) example for CS 201.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using std::cout;
using std::endl;
using std::cin;

using namespace std;

void inputNames(std::vector<std::string> & names) {
    for (int i = 0; i < 10; i++) {
        std::string name;
        std::cout << "Please enter a name: ";
        std:getline(std::cin, name);
        names.push_back(name);
    }
}

bool doesNameExist(const std::string & nametoFind, const std::vector<std::string> & names) {
    return true;
}

void printNames(std::vector<std::string> & names) {
    cout << "This prints the names that the user provided." << endl;
}

void searchNames(std::vector<std::string> & names) { 
    cout << "Need a query? This allows for easy searchability of the names." << endl;
}

void encryptNames(std::vector<std::string> & names) {
    cout << "This encrypts the aformentioned names using a cipher." << endl;
}

void sortNames(std::vector<std::string> & names) { 
    cout << "COMING SOON: Use computer science sorting algorithms to make your job easier!" << endl;
}

void countNames(std::vector<std::string> & names) { 
    cout << "Learn the number of characters in each string." << endl;
}

int main (int argc, char ** argv) {
    std::vector<std::string> names;

    inputNames(names);
    
    printNames(names);
    searchNames(names);
    encryptNames(names);
    sortNames(names);
    countNames(names);
    
    return 0;
}