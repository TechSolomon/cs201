// thermostat.cpp
// Solomon Himelbloom
// 2 December 2020
// Thermostat example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

#include "agent.hpp"
#include "environment.hpp"
#include "simulator.hpp"

// A simple divider to signify the end of a printed section.
void printSection() {
    cout << endl;
    cout << "-=-=-=-=-=-" << endl;
    cout << endl;
}

// Prints the current temperature reading (°F) 
// given input from setDegrees() and printCurrent().
class Temperature {

public:
    Temperature() : _num(0) {

    }

    Temperature(int num) : _num(num) {

    }

    void setDegrees(int num) {

    }

    void printCurrent() const {
        cout << _num << " " << units() << endl;
    }
private:
    string units() const {
        return "degrees Fahrenheit (°F)";
    }
    int _num;
};

int main() {
    std::cout << "Hello, thermostat." << endl;
    Temperature f(32);
    f.printCurrent();

    printSection();

    // default agent constructor
    Agent a1;
    a1.setID(1);
    cout << a1.toString();
    cout << std::endl;

    // 2nd agent constructor
    Agent a2(2);
    cout << a2.getID();
    cout << std::endl;

    printSection();

    // default environment constructor
    Environment e1;
    e1.setID(3);
    cout << e1.toString();
    cout << std::endl;

    // 2nd environment constructor
    Environment e2(4);
    cout << e2.getID();
    cout << std::endl;

    printSection();

    // default simulator constructor
    Simulator s1;
    s1.setID(5);
    cout << s1.toString();
    cout << std::endl;

    // 2nd environment constructor
    Simulator s2(6);
    cout << s2.getID();
    cout << std::endl;

    return 0;
}