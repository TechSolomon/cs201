// fifo-lifo.cpp
// Solomon Himelbloom
// 9 October 2020
// FIFO/LIFO example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

// First-in First-Out
void FifoPush(vector<string> &container, const string &item);
void FifoPop(vector<string> &container, string &item);

// Last-In First-Out
void LifoPush(vector<string> &container, const string &item);
void LifoPop(vector <string> &container, string &item);

// Shared functionality
bool IsContainerEmpty(const vector<string> &container);
void PrintContainer(const vector<string> &container);

// Implement these two tests to verify your functions work
// with at least the sequence:
//      push "A", push "B", push "C", push "D"
//      push    , pop     , pop     , pop
bool TestFifo();
bool TestLifo();

int main() {
    cout << "Hello, FIFO/LIFO." << endl;
}