/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#include "Autobots.h"

Autobots::Autobots(uint health, uint armor, uint weapon, uint power, const std::string& weaponType)
    : Transformers(health, armor, weapon, power), _weaponType(weaponType) {}

void Autobots::setweaponType(const std::string& weaponType) {
    _weaponType = weaponType;
}

std::string Autobots::getweaponType() const {
    return _weaponType;
}

bool Autobots::protect() {
    return _power > 50; 
}