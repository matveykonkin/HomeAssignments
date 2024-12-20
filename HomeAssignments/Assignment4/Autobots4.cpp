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

Autobots::Autobots() : health(100), armor(50), power(75), weapon(10) {}
Autobots::Autobots(uint _health, uint _armor, uint _power, uint _weapon)
    : health(_health), armor(_armor), power(_power), weapon(_weapon) {}

bool Autobots::weaponType()
{
    std::cout << "Autobot's type of weapon is Blaster" << std::endl;
    return true;
}

bool Autobots::operator>(const Autobots& other) const
{
    return power > other.power;
}
bool Autobots::operator<(const Autobots& other) const
{
    return power < other.power;
}

std::ostream& operator<<(std::ostream& os, const Autobots& autobot)
{
    os << "Autobot - Health: " << autobot.health
       << ", Armor: " << autobot.armor
       << ", Power: " << autobot.power
       << ", Weapon: " << autobot.weapon;
    return os;
}