// agent.cpp
// Solomon Himelbloom
// 4 December 2020
// Source file agent.cpp

#include <string>
using std::string;
using std::to_string;

#include "agent.hpp"

// constructors
Agent::Agent() 
    : _id{0} {

    }

Agent::Agent(int id) 
    : _id {id} {

    }

// destructor
Agent::~Agent() {

}

void Agent::setID(int id) {
    _id = id;
}

int Agent::getID() const {
    return _id;
}

string Agent::toString() const {
    return "Agent #" + to_string(_id);
}