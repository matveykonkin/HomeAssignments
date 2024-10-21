#include <iostream>

class Transformers {
public:
    Transformers();
    bool motion();
    bool jump();
    bool attack();
    void Transformers::setWeapon(uint weapon) {
        _weapon = weapon;
    }
    uint Transformers::getWeapon() {
        return _weapon;
    }
private:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
};