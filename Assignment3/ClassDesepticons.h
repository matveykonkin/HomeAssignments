#include <iostream>
#include "ClassTransformers.h"

class Desepticons : public Transformers {
public:
    bool transform();
private:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};