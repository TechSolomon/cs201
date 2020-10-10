// database.cpp
// Solomon Himelbloom
// 7 October 2020
// Database example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>

#include "database.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

std::map<std::string, MyDatabaseRecord> theDatabase;

// TODO: Implement functions here.

// UpdateRecord(key, record) sets the databae to the new value
// @param {string} key
// @param {MyDatabaseRecord} record
// @return true if operation successful
bool UpdateRecord(const std::string &key, const MyDatabaseRecord &record) {
    auto it = theDatabase.find(key);
    if (it == theDatabase.end()) {
        return false;
    }
    theDatabase[key] = record;
    return true;
}

// ReadRecord(key, record) copies the information from the data base to
// a user supplied record
// @param {string} key
// @param {MyDatabaseRecord} record
// @returns false if the record does not exist
bool ReadRecord(const std::string &key, MyDatabaseRecord &record) {
    auto it = theDatabase.find(key);
    if (it == theDatabase.end()) {
        return false;
    }
    // return = it- >second;
    return true;
}

int main() {
    cout << "Hello, database." << endl;
}