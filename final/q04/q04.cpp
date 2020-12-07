// q04.cpp
// Solomon Himelbloom
// 7 December 2020
// CS 201 Final Exam

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <vector>
#include <random>
#include <fstream>
#include <sstream>
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::istringstream;
using std::map;
using std::mt19937;
using std::ofstream;
using std::random_device;
using std::string;
using std::uniform_int_distribution;
using std::vector;

int main() {
    cout << "Hello, Standard Template Library!" << endl;
    
    // Suppose haystack contains 1,000,000,000 random numbers
    std::vector<int> haystack;
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(haystack.begin(), haystack.end(), g);
    int needle = rd();
    // Find the needle

    // Suppose the haystack is sorted, find the needle
    std::sort(haystack.begin(), haystack.end());
}
