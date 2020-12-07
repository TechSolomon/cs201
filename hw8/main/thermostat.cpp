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

    return 0;
}