// simulator.cpp
// Solomon Himelbloom
// 4 December 2020
// Source file simulator.cpp

#include <string>
using std::string;
using std::to_string;

#include "simulator.hpp"

void Simulator::setID(int id) {
    _id = id;
}

int Simulator::getID() const {
    return _id;
}

string Simulator::toString() const {
    return "Simulator #" + to_string(_id);
}