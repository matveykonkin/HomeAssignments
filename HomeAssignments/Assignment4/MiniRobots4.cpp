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

MiniRobots::MiniRobots() : health(130), armor(70), weapon(90), power(8) {}
MiniRobots::MiniRobots(uint _health, uint _armor, uint _weapon, uint _power)
    : health(_health), armor(_armor), weapon(_weapon), power(_power) {}

bool MiniRobots::sizeOfRobot()
{
    std::cout << "MiniRobot's size is small" << std::endl;
    return true;
}

bool MiniRobots::operator>(const MiniRobots& other) const
{
    return power > other.power;
}
bool MiniRobots::operator<(const MiniRobots& other) const
{
    return power < other.power;
}

std::ostream& operator<<(std::ostream& os, const MiniRobots& dinobot)
{
    os << "Dinobot - Health: " << dinobot.health
       << ", Armor: " << dinobot.armor
       << ", Power: " << dinobot.power
       << ", Weapon: " << dinobot.weapon;
    return os;
}