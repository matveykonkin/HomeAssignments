#ifndef CLASS_TRANSFORMERS_H
#define CLASS_TRANSFORMERS_H

#include <iostream>

class Transformers {
public:
    Transformers();
    bool motion();
    bool jump();
    bool attack();
    void setWeapon(uint weapon) {
        _weapon = weapon;
    }
    uint getWeapon() {
        return _weapon;
    }
protected:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};

#endif