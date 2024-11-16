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

#include <string>
#include "Transformers.h"

class Autobots : public Transformers {
public:
    Autobots(uint health = 100, uint armor = 50, uint weapon = 10, uint power = 75, const std::string& weaponType = "Blaster");
    bool transform();
    void setweaponType(const std::string& weaponType);
    std::string getweaponType() const;
    bool protect();
private:
    uint _health;
    uint _armor;
    uint _power;
    uint _weapon;
    std::string _weaponType;
};

#endif