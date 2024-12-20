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

Desepticons::Desepticons() : health(130), armor(70), weapon(90), power(8) {}
Desepticons::Desepticons(uint _health, uint _armor, uint _weapon, uint _power)
    : health(_health), armor(_armor), weapon(_weapon), power(_power) {}

bool Desepticons::DangerLevel()
{
    std::cout << "Desepticon's level of danger is very danger" << std::endl;
    return true;
}

bool Desepticons::operator>(const Desepticons& other) const
{
    return power > other.power;
}
bool Desepticons::operator<(const Desepticons& other) const
{
    return power < other.power;
}

std::ostream& operator<<(std::ostream& os, const Desepticons& Desepticons)
{
    os << "Desepticon - Health: " << Desepticons.health
       << ", Armor: " << Desepticons.armor
       << ", Power: " << Desepticons.power
       << ", Weapon: " << Desepticons.weapon;
    return os;
}