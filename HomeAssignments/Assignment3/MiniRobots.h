/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <iostream>
#include "Transformers.h"

class MiniRobots : public Transformers {
public:
    MiniRobots();
    bool transform();
private:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};

#endif