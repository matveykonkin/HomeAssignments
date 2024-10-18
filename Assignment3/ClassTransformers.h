#include <iostream>

class Transformers {
public:
    Transformers();
    bool motion();
    bool jump();
    bool attack();
private:
    uint health();
    uint armor();
    uint weapon();
    uint power();
};