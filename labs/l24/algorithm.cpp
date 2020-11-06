// map.cpp
// Solomon Himelbloom
// 6 November 2020
// STL algorithms example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::sort;
using std::reverse;

void printVector(std::vector<int> const &vv) {
    for (int i = 0; i < vv.size(); i++) {
        std:: cout << vv.at(i) << " ";
    }
}

int main() {
    // Create an unsorted dataset (10 items with various values) in a vector.
    cout << "Unsorted Vector: ";
    std::vector<int> vv{-822, 576, 26, -747, 493, 210, 512, -925, -39, 611};
    
    // Print the contents of the vector.
    printVector(vv);

    // Sort the whole vector. 
    cout << "\nSorted Vector: ";
    sort(vv.begin(), vv.end());
    printVector(vv);

    // Reverse the whole vector.
    cout << "\nReversed Vector: ";
    reverse(vv.begin(), vv.end());
    printVector(vv);

    // Fill a subset of the vector. 
    cout << "\nFilled Vector: ";
    fill(vv.begin(), vv.end(), 256);
    printVector(vv);

    return 0;
}
