// main.cpp
// Solomon Himelbloom
// 7 November 2020 (Final Project)
// Word count and text readability for CS 201.

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
    cout << endl;
    int placeholder = 999;
    const string spacer = " ..... ";
    const string divider = "\n-=-=-=-=-=-=-=-=-=-=-=-=-";

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

    cout << divider << endl;
    
    cout << "\nCOUNTS:" << endl;
    cout << "Words" 
        << spacer << placeholder << endl;
    cout << "Characters" 
        << spacer << placeholder << endl;
    cout << "Paragraphs" 
        << spacer << placeholder << endl;
    cout << "Sentences" 
        << spacer << placeholder << endl;

    cout << divider << endl;

    cout << "\nAVERAGES:" 
        << spacer << placeholder << endl;
    cout << "Sentences per Paragraph" 
        << spacer << placeholder << endl;
    cout << "Words per Sentence" 
        << spacer << placeholder << endl;
    cout << "Characters per Word" 
        << spacer << placeholder << endl;

    cout << divider << endl;

    cout << "\nREADABILITY" << endl;
    cout << "Flesh Reading Ease" 
        << spacer << placeholder << endl;
    cout << "Flesh-Kincaid Grade Level" 
        << spacer << placeholder << endl;
    cout << "Passive Sentences" 
        << spacer << placeholder << endl;
}
