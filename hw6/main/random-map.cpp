// random-map.cpp
// Solomon Himelbloom
// 11 November 2020
// Random map example for CS 201.

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

// Returns a uniform random number between first and last, inclusively.
int RandomBetweenU(int first, int last) {
    return 0;
}

// Returns a normally distributed random number between first and last, inclusively.
int RandomBetweenN(int first, int last) {
    return 0;
}

// Returns numbers using the rand() functionn from the C stanndard library <stdlib.h>.
int RandomBetween(int first, int last) {
    return 0;
}

// Prints a list of the random numbers clearly showing they are normally or uniformly distributed.
void PrintDistribution() {
    std::cout << "Printed Distribution (Testing Key + Value Pairs): " << endl;
    map<string, int> test_map;
    test_map["Fairbanks"] = 99775;
    test_map["Alaska"] = 907;
    test_map["United States"] = 50;

    for (const auto & printer_dist : test_map) {
        auto test_map_key = printer_dist.first; // Key
        auto test_map_value = printer_dist.second; // Associated Value
        cout << "Key: " << test_map_key << " | Value: " << test_map_value;
        cout << endl;
    }
}

int main() {
    // Seed with a real random value, if available
    std::random_device r;

    // Choose a random mean between 1 and 6
    std::default_random_engine e1(r());
    std::uniform_int_distribution<int> uniform_dist(1, 6);
    int mean = uniform_dist(e1);
    std::cout << "Randomly-chosen mean: " << mean << '\n';

    // Generate a normal distribution around that mean
    std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()};
    std::mt19937 e2(seed2);
    std::normal_distribution<> normal_dist(mean, 2);

    std::map<int, int> hist;
    for (int n = 0; n < 10000; ++n) {
        ++hist[std::round(normal_dist(e2))];
    }
    
    std::cout << "Normal distribution around " << mean << ":\n";
    for (auto p : hist) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
        << p.first << ' ' << std::string(p.second/200, '*') << 'n';
    }

    int first, second, third;
    first = RandomBetweenU(1, 2);
    second = RandomBetweenU(3, 4);
    third = RandomBetween(5, 6);
    std::cout << "\n" << endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << third << std::endl;
    PrintDistribution();
}
