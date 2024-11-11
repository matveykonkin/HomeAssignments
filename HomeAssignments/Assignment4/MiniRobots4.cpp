/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#include "MiniRobots4.h"

std::ostream& operator<<(std::ostream& os, const MiniRobots& miniRobot) {
    os << "MiniRobots [Health: " << miniRobot._health
       << ", Armor: " << miniRobot._armor
       << ", Weapon: " << miniRobot._weapon
       << ", Power: " << miniRobot._power << "]";
    return os;
}

bool MiniRobots::operator==(const MiniRobots& other) const {
    return _health == other._health && _armor == other._armor && 
           _weapon == other._weapon && _power == other._power;
}

bool MiniRobots::operator<(const MiniRobots& other) const {
    return _power < other._power; 
}

bool MiniRobots::operator>(const MiniRobots& other) const {
    return _power > other._power;
}