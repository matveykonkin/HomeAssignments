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

Autobots::Autobots(uint health, uint armor, uint weapon, uint power, const std::string& weaponType, uint skillLevel, uint sizeOfInventory)
    : Transformers(health, armor, weapon, power), _weaponType(weaponType), _skillLevel(), _sizeOfInventory() {}

void Autobots::setWeaponType(const std::string& weaponType) {
    _weaponType = weaponType;
}
std::string Autobots::getWeaponType() const {
    return _weaponType;
}

void Autobots::setSkillLevel(uint skillLevel) {
    _skillLevel = skillLevel;
}
uint Autobots::getSkillLevel() const {
    return _skillLevel;
}

void Autobots::setSizeOfInventory(uint sizeOfInventory) {
    _sizeOfInventory = sizeOfInventory;
}
uint Autobots::getSizeOfInventory() const {
    return _sizeOfInventory;
}

bool Autobots::protect() {
    return _power > 50; 
}