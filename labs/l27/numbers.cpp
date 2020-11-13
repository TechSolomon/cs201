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
#include <random>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;
using std::sort;
using std::reverse;
using std::mt19937;
using std::random_device;
using std::uniform_int_distribution;

int main() {
    int heads_total = 0;
    int tails_total = 0;
    int total_flips = 0;

    std::cout << "How many times would you like to flip the coin? ";
    std::cin >> total_flips;

    random_device rd;
    mt19937 gen(rd()); // PRNG; unpredictable seed.

    uniform_int_distribution<int> coinDistrib(0, 1); // 0 = Heads; 1 = Tails
    
    for (int i = 0; i < total_flips; ++i) {
        if (coinDistrib(gen) == 0) {
            heads_total++;
        }

        else {
            tails_total++;
        }
    }

    std::cout << "\n";
    std::cout << "Heads Total: " << heads_total << std::endl;
    std::cout << "Tails Total: " << tails_total << std::endl;
    std::cout << "Flips Total: " << total_flips << std::endl;
}
