// environment.hpp
// Solomon Himelbloom
// 4 December 2020
// Header file environment.hpp

#ifndef ENVIRONMENT_HPP
#define ENVIRONMENT_HPP

#include <string>
using std::string;

class Environment {
public:
    // constructors
    Environment();

    Environment(int id);
    
    // destructor
    ~Environment();

    void setID(int id);

    int getID() const;

    string toString() const;

    // Changes the temperature by 1 or -1 depending 
    // on whether the header is on or off.
    bool iteration();

private:
    int _id;
};

#endif // #ifndef ENVIRONMENT_HPP

