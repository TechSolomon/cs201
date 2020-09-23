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

void inputNames(std::vector<std::string> & names) {
    for (int i = 0; i < 10; i++) {
        std::string name;
        std::cout << "Please enter a name: ";
        std:getline(std::cin, name);
        names.push_back(name);
    }
}

bool doesNameExist(const std::string & nametoFind, const std::vector<std::string> & names) {
    for (int i = 0; i < names.size(); i++) {

    }

    return false;
}

void printNames(std::vector<std::string> & names) {
    cout << "This prints the names that the user provided." << endl;

    for (int i = 0; i < names.size(); i++) {

    }
}

void searchNames(std::vector<std::string> & names) { 
    cout << "Need a query? This allows for easy searchability of the names." << endl;
}

void encryptNames(std::vector<std::string> & names) {
    cout << "COMING SOON: This encrypts the aformentioned names using a cipher." << endl;
}

void sortNames(std::vector<std::string> & names) { 
    cout << "COMING SOON: Use computer science sorting algorithms to make your job easier!" << endl;
}

void countNames(std::vector<std::string> & names) { 
    cout << "Learn the number of characters in each string." << endl;

    int totalChars = names.size();
    cout << "Total Names: " << totalChars << endl;
}

int main (int argc, char ** argv) {
    std::vector<std::string> names;
    std::string search_name;
    int name = 1;

    inputNames(names);
    cout << " " << endl;
    printNames(names);

    cout << "What name would you like to search for? ";
    cin >> search_name;

    if (name == 1) {
        cout << search_name << " does exist in the list above." << endl;
    }

    else {
        cout << search_name << " does not exist in the list above." << endl;
    }
    
    // cout << doesNameExist(search_name, names);

    searchNames(names);
    countNames(names);
    printNames(names);
    
    return 0;
}