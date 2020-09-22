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

void codeEncapsulation() {
    void InputNames(std::vector<std::string> & names);
}

// void nameSearch(bool) { 
//     bool DoesNameExist(const std::string & nametoFind, const std::vector<std::string> & names);

//     return true;
// }

void PrintNames(string Names) {
    bool DoesNameExist(const std::string & nametoFind, const std::vector<std::string> & names);
}

int main (int argc, char ** argv) {
    std::vector<std::string> names;
    for (int i = 0; i < 10; i++) {
        std::string name;
        std::cout << "Please enter a name: ";
        std:getline(std::cin, name);
        names.push_back(name);
    }
    
    return 0;
}