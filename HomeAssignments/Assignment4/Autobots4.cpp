/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/


#include "Autobots4.h" 

std::ostream& operator<<(std::ostream& os, const Autobots& autobot) {
    os << "Autobots [Health: " << autobot._health
       << ", Armor: " << autobot._armor
       << ", Weapon: " << autobot._weapon
       << ", Power: " << autobot._power << "]";
    return os;
}

bool Autobots::operator==(const Autobots& other) const {
    return _health == other._health && _armor == other._armor && 
           _weapon == other._weapon && _power == other._power;
}

bool Autobots::operator<(const Autobots& other) const {
    return _power < other._power; 
}

bool Autobots::operator>(const Autobots& other) const {
    return _power > other._power;
}