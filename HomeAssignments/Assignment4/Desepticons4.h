/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#ifndef CLASS_DESEPTICONS_H
#define CLASS_DESEPTICONS_H

#include <iostream>
#include "Transformers4.h"

class Desepticons : public Transformers {
public:
    Desepticons() : Transformers() {}
    Desepticons(uint health, uint armor, uint weapon, uint power)
        : Transformers(health, armor, weapon, power) {}
    
    bool operator<(const Desepticons& other) const;
    bool operator>(const Desepticons& other) const;
    bool operator==(const Desepticons& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Desepticons& desepticon);
};

#endif