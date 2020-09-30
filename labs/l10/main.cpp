// bool.hpp
// Solomon Himelbloom
// 30 September 2020
// Using Boolean values example for CS 201.

#include "bool.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char * argv[]) {

    for (int i = 1; i < 41; i++) {
        if (isDiv3(i)) {
            cout << i << endl;
        }
    }
}