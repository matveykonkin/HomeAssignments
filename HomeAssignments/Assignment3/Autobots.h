/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#ifndef CLASS_AUTOBOTS_H
#define CLASS_AUTOBOTS_H

#include <iostream>
#include "Transformers.h"

class Autobots : public Transformers {
public:
    Autobots();
    bool transform();
private:
    uint _health;
    uint _armor;
    uint _power;
    uint _weapon;
};

#endif