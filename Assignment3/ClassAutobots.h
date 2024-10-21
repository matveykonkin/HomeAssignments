#ifndef CLASS_AUTOBOTS_H
#define CLASS_AUTOBOTS_H

#include <iostream>
#include "ClassTransformers.h"

class Autobots : public Transformers {
public:
    bool transform();
private:
    uint _health;
    uint _armor;
    uint _power;
    uint _weapon;
};

#endif