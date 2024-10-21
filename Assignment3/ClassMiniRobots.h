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