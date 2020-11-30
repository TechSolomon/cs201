// classes.cpp
// Solomon Himelbloom
// 30 November 2020
// Classes and objects example for CS 201.

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
using std::ifstream;
using std::map;
using std::ofstream;
using std::reverse;
using std::sort;
using std::string;
using std::vector;

class Nanook {
public:
    void printAnnouncement(int n)
    {
        for (int i = 0; i < n; i++)
        {
            cout << "Hello, world." << endl;
        }
    }

    void printMessage()
    {
        cout << "A word from your local Alaska Nanook: ";
        cout << _getMsg() << endl;
    }

private:
    string _name;
    string _getMsg()
    {
        return "\nGo UAF!";
    }

};

int main() {
    Nanook * project = new Nanook();
    project -> printMessage();
}