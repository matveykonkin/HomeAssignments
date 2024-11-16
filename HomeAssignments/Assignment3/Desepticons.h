/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#ifndef CLASS_DECEPTICONS_H
#define CLASS_DECEPTICONS_H

#include "Transformers.h"
#include <string>

class Desepticons : public Transformers {
public:
    Desepticons(uint health = 90, uint armor = 55, uint weapon = 15, uint power = 80, const std::string& dangerLevel = "10");
    bool transform();
    void setDangerLevel(const std::string& dangerLevel);
    std::string getDangerLevel() const;
    bool protect();
private:
    uint _health;
    uint _armor;
    uint _power;
    uint _weapon;
    std::string _dangerLevel;
};

#endif