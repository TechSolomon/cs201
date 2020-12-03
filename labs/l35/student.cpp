/**
 * @file     student.cpp
 * @author   Solomon Himelbloom
 * @version  November 30, 2020
 *
 * Source file for the main students program.
 */

#include "student.hpp"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>

Student::Student() : _legalName{"Legal Name Placeholder"},
                     _UAID{39999999} { }

Student::Student(string legalName) : _legalName{legalName},
                                     _UAID{39999999} { }

Student::Student(string legalName, int UAID) : _legalName{legalName},
                                               _UAID{UAID} { }

void Student::printInfo() const {
    cout << "{" << _legalName << ", " << _UAID << "}" << endl;
}