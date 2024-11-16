/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#ifndef CLASS_MINIROBOTS_H
#define CLASS_MINIROBOTS_H

#include <string>
#include "Transformers.h"

class MiniRobots : public Transformers {
public:
    MiniRobots(uint health = 70, uint armor = 45, uint weapon = 10, uint power = 55, const std::string& size = "Small");
    bool transform();
    void setSize(const std::string& size);
    std::string getSize() const;
    bool protect();
private:
    uint _health;
    uint _armor;
    uint _weapon;
    uint _power;
    std::string _size;
};

#endif