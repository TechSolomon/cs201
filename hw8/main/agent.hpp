// agent.hpp
// Solomon Himelbloom
// 4 December 2020
// Header file agent.hpp

#ifndef AGENT_HPP
#define AGENT_HPP

#include <string>
using std::string;

class Agent {
public:
    // constructors
    Agent();

    Agent(int id);
    
    // destructor
    ~Agent();

    void setID(int id);

    int getID() const;

    string toString() const;

private:
    int _id;
};

#endif // #ifndef AGENT_HPP

