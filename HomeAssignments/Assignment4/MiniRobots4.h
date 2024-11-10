/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <iostream>
#include "Transformers4.h"

class MiniRobots : public Transformers {
public:
    MiniRobots() : Transformers() {}
    MiniRobots(uint health, uint armor, uint weapon, uint power)
        : Transformers(health, armor, weapon, power) {}

    bool operator<(const MiniRobots& other) const;
    bool operator>(const MiniRobots& other) const;
    bool operator==(const MiniRobots& other) const;

    friend std::ostream& operator<<(std::ostream& os, const MiniRobots& miniRobot);
};

#endif