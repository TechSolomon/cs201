/**
 * @file     student.hpp
 * @author   Solomon Himelbloom
 * @version  November 30, 2020
 *
 * Header file for the main students program.
 */

#ifndef STUDENT_HPP_
#define STUDENT_HPP_

#include <iostream>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class Student {
public:
    // Example Constructors:
    Student();
    Student(string legalName);
    Student(string legalName, int UAID);
    void printInfo() const;

private:
    string _legalName;
    int _UAID;

};

#endif /* STUDENT_HPP_ */
