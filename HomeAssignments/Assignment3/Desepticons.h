/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#ifndef CLASS_DESEPTICONS_H
#define CLASS_DESEPTICONS_H

#include <iostream>
#include "Transformers.h"

class Desepticons : public Transformers {
public:
    Desepticons();
    bool transform();
private:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};

#endif