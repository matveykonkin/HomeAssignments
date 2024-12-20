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
    Transformers();    
    bool motion();
    bool jump();
    bool attack();

    void setWeapon(uint _weapon) {
        weapon = _weapon;
    }
    uint getWeapon() const {
        return weapon;
    }

    friend std::ostream& operator<<(std::ostream& os, const Transformers& transformer);

protected:
    uint health;
    uint armor;
    uint weapon;
    uint power;
};

#endif