// map.cpp
// Solomon Himelbloom
// 2 November 2020
// Map (key-value pairs) example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::map;

int main() {
    map<string, int> m;
    m["Kodiak"] = 99615;
    m["Fairbanks"] = 99775;
    m["UAF"] = 10011;
    m["Alaska"] = 907;
    m["United States"] = 50;
    m.erase("UAF");

    for (const auto & p : m) {
        auto k = p.first; // Key
        auto v = p.second; // Associated Value
        cout << "Key: " << k << " | Value: " << v;
        cout << endl;
    }
}
