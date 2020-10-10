// database.cpp
// Solomon Himelbloom
// 9 October 2020
// Database [header file] example for CS 201.

#ifndef DATABASE_HPP_
#define DATABASE_HPP_

#include <string>
#include <map>

struct MyDatabaseRecord {
    // TODO: replace this with information related to your database.
    std::string objectName{"obj"};
    std::string materialName{"mtl"};
    std::string diffuseColor{"diff"};
    std::string specularColor{"spec"};
    bool twoSided{false};
};

#endif /* DATABASE_HPP_ */