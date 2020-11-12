// iterators.cpp
// Solomon Himelbloom
// 11 November 2020
// Pseudorandom numbers example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::sort;
using std::reverse;

void printVector(std::vector<int> const &vv) {
    for (int i = 0; i < vv.size(); i++) {
        std:: cout << vv.at(i) << " ";
    }
}

int main() {
    std::vector<int> vv1{-822, 576, 26, -747, 493, 210, 512, -925, -39, 611};
    std::vector<int> vv2{-925, -822, -747, -512, -39, 26, 210, 493, 576, 611};
    std::vector<int> vv3{-822, 576, 26, -747, 493, 210, 512, -925, -39, 611};
    std::vector<int> vv4{611, 576, 512, 493, 210, 26, -39, -747, -822, -925};

    std::cout << "Pseudorandom numbers." << std::endl;

    // cout << "vector #1: ";
    // printVector(vv1);
    // cout << "\nvector #2: ";
    // printVector(vv2);
    // cout << "\nvector #3: ";
    // printVector(vv3);
    // cout << "\nvector #4: ";
    // printVector(vv4);
    // cout << "" << endl;

    // cout << "\ncompare (vv1 <-> vv2): ";
    // auto first_checksum = std::mismatch(vv1.begin(), vv1.end(), vv2.begin());

    // if (*first_checksum.first == *first_checksum.second) {
    //     std::cout << "No mismatch found (same values).";
    // } 
    // else {
    //     std::cout << "Mismatch found (different values): ";
    //     std::cout << *first_checksum.first << " & " << *first_checksum.second << std::endl;
    // }
}
