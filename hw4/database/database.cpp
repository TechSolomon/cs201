// database.cpp
// Solomon Himelbloom
// 7 October 2020
// Database example for CS 201.

#include <iostream>
#include <stdio.h>
#include <string>
#include <map>

#include "database.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

std::map<std::string, MyDatabaseRecord> theDatabase;


// Creates a new record within the database with a corresponding key value.
bool CreateRecord(const std::string &key) {

}

// ReadRecord(key, record) copies the information from the database to
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

// Deletes a record from the database given a key.
bool DeleteRecord(const std::string &key) {

}

// Inputs a record into the database given a record.
bool InputRecord(MyDatabaseRecord &record) {

}

// Prints a record from the database given a key.
bool PrintRecord(const std::string &key) {
    cout << "Key" << endl;
}