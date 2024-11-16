/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#include "Desepticons.h"

Desepticons::Desepticons(uint health, uint armor, uint weapon, uint power, const std::string& dangerLevel)
    : Transformers(health, armor, weapon, power), _dangerLevel(dangerLevel) {}

void Desepticons::setDangerLevel(const std::string& dangerLevel) {
    _dangerLevel = dangerLevel;
}

std::string Desepticons::getDangerLevel() const {
    return _dangerLevel;
}

bool Desepticons::protect() {
    return _health > 50; 
}