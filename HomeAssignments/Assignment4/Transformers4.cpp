/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#include "Transformers4.h"

std::ostream& operator<<(std::ostream& os, const Transformers& transformer) {
    os << "Transformers [Health: " << transformer._health
       << ", Armor: " << transformer._armor
       << ", Weapon: " << transformer._weapon
       << ", Power: " << transformer._power << "]";
    return os;
}

bool Transformers::operator==(const Transformers& other) const {
    return _health == other._health && _armor == other._armor && 
           _weapon == other._weapon && _power == other._power;
}

bool Transformers::operator<(const Transformers& other) const {
    return _power < other._power; 
}

bool Transformers::operator>(const Transformers& other) const {
    return _power > other._power;
}