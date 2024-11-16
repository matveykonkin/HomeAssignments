/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#include "MiniRobots.h"

MiniRobots::MiniRobots(uint health, uint armor, uint weapon, uint power, const std::string& size)
    : Transformers(health, armor, weapon, power), _size(size) {}

void MiniRobots::setSize(const std::string& size) {
    _size = size;
}

std::string MiniRobots::getSize() const {
    return _size;
}

bool MiniRobots::protect() {
    return _armor > 30;
}