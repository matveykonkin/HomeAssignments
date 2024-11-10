/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#ifndef CLASS_TRANSFORMERS_H
#define CLASS_TRANSFORMERS_H

#include <iostream>

class Transformers {
public:
    Transformers(uint health = 100, uint armor = 50, uint weapon = 10, uint power = 75)
        : _health(health), _armor(armor), _weapon(weapon), _power(power) {}
    bool motion();
    bool jump();
    bool attack();
    
    void setWeapon(uint weapon) { 
        _weapon = weapon; 
    }
    uint getWeapon() const { 
        return _weapon;
    }

    void setHealth(uint health) {
        _health = health; 
    }
    uint getHealth() const { 
    return _health; 
    }

    void setArmor(uint armor) { 
        _armor = armor; 
    }
    uint getArmor() const { 
        return _armor; 
    }

    void setPower(uint power) {
        _power = power; 
    }
    uint getPower() const { 
        return _power; 
    }
protected:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};

#endif