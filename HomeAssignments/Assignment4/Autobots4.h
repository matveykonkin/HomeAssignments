/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#ifndef CLASS_AUTOBOTS_H
#define CLASS_AUTOBOTS_H

#include <iostream>
#include "Transformers4.h"

class Autobots : public Transformers {
public:
    Autobots() : Transformers() {}
    Autobots(uint health, uint armor, uint weapon, uint power)
        : Transformers(health, armor, weapon, power) {}

    bool operator<(const Autobots& other) const;
    bool operator>(const Autobots& other) const;
    bool operator==(const Autobots& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Autobots& autobot);
};

#endif