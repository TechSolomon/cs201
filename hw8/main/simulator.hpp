// simulator.hpp
// Solomon Himelbloom
// 4 December 2020
// Header file simulator.hpp

#ifndef SIMULATOR_HPP
#define SIMULATOR_HPP

#include <string>
using std::string;

class Simulator {
public:
    // constructors
    Simulator();

    Simulator(int id);
    
    // destructor
    ~Simulator();

    void setID(int id);

    int getID() const;

    string toString() const;

    // Initializes the running sequence.
    void run();

    void askOwner();

private:
    int _id;
};

#endif // #ifndef SIMULATOR_HPP

