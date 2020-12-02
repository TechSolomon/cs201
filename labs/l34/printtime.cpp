// printtime.cpp
// Solomon Himelbloom
// 30 November 2020
// Classes and constructors example for CS 201.
// 
// printtime.cpp
// Glenn G. Chappell
// 20 Apr 2018
//
// For CS 201 Spring 2018
// Time of Day Class & Program
//
// Modified 11/28/18 for CS 201 Fall 2018
// Chris Hartman

#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;
using std::cin;
using std::setfill;
using std::setw;


// Class Time
// Holds a time of day: hours, minutes, seconds. Can print its stored
// time in a nice format.
class Time {

public:
// ***** Time: constructors *****

    Time() {
        _hr = 9;
        _min = 41;
        _sec = 37;
        _pm = true;
    }

    Time (int hr, int min, int sec, bool pm) {
        _hr = hr;
        _min = min;
        _sec = sec;
        _pm = true;
    }

// ***** Time: general public member functions *****

    void print() const {
        cout << setfill('0') << setw(2) << _hr 
        << setw(1) << ":" << setw(2) << _min 
        << setw(1) << ":" << setw(2) << _sec;
    }

// ***** Time: data members *****
private:

    int _hr;   // Hours past midnight
    int _min;  // Minutes past the hour
    int _sec;  // Seconds past the minute
    int _pm;   // Given time past midnight

};  // End class Time


int main() {
    // Print header
    cout << "Here are some times:" << endl;
    cout << endl;

    // Make a Time object; print it
    const Time t1;
    cout << "Time #1: [";
    t1.print();
    cout << "]" << endl;
    cout << endl;

    Time t2 = {12, 21, 12, true};
    cout << "Time #2: [";
    t2.print();
    cout << "]" << endl;
    cout << endl;

    Time t3 {7, 24, 1, false};
    cout << "Time #3: [";
    t3.print();
    cout << "]" << endl;
    cout << endl;

    // Wait for user
    cout << "PRESS ENTER to quit ";
    while (cin.get() != '\n') ;
}

