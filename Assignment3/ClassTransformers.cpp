#include "ClassTransformers.h"

Transformers::Transformers() {
    _health = 100; 
    _armor = 50;
    _weapon = 5;
    _power = 10;
}

bool Transformers::attack() {
    if (_weapon > 0) {
        _weapon--;
        return true;
    }
    return false;
}