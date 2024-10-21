#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <iostream>
#include "ClassTransformers.h"

class MiniRobots : public Transformers {
public:
    bool transform();
private:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};

#endif