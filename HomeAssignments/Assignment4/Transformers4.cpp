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
#include <iostream>

Transformers::Transformers() : health(100), armor(40), weapon(10), power(75) {}

bool Transformers::motion()
{
    return true;
}

bool Transformers::jump()
{
    return true;
}

bool Transformers::attack()
{
    if (weapon > 0)
    {
        weapon--;
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& os, const Transformers& transformer)
{
    os << "Transformer - Health: " << transformer.health
       << ", Armor: " << transformer.armor
       << ", Power: " << transformer.power
       << ", Weapon: " << transformer.weapon;
    return os;
}