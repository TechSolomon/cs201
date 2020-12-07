// environment.cpp
// Solomon Himelbloom
// 4 December 2020
// Source file environment.cpp

#include <string>
using std::string;
using std::to_string;

#include "environment.hpp"

// constructors
Environment::Environment() 
    : _id{0} {

    }

Environment::Environment(int id) 
    : _id {id} {

    }

// destructor
Environment::~Environment() {

}

void Environment::setID(int id) {
    _id = id;
}

int Environment::getID() const {
    return _id;
}

string Environment::toString() const {
    return "Environment #" + to_string(_id);
}