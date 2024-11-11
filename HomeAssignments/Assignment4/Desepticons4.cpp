/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#include "Desepticons4.h"

std::ostream& operator<<(std::ostream& os, const Desepticons& desepticon) {
    os << "Desepticons [Health: " << desepticon._health
       << ", Armor: " << desepticon._armor
       << ", Weapon: " << desepticon._weapon
       << ", Power: " << desepticon._power << "]";
    return os;
}

bool Desepticons::operator==(const Desepticons& other) const {
    return _health == other._health && _armor == other._armor && 
           _weapon == other._weapon && _power == other._power;
}

bool Desepticons::operator<(const Desepticons& other) const {
    return _power < other._power; 
}

bool Desepticons::operator>(const Desepticons& other) const {
    return _power > other._power;
}