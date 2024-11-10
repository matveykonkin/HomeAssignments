/*
## Assignment4
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 4
*/

#ifndef CLASS_TRANSFORMERS_H
#define CLASS_TRANSFORMERS_H

#include <iostream>

class Transformers {
public:
    Transformers(uint health = 100, uint armor = 50, uint weapon = 10, uint power = 75)
        : _health(health), _armor(armor), _weapon(weapon), _power(power) {}
    
    bool operator<(const Transformers& other) const;
    bool operator>(const Transformers& other) const;
    bool operator==(const Transformers& other) const;

    friend std::ostream& operator<<(std::ostream& os, const Transformers& transformer);

protected:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};

#endif