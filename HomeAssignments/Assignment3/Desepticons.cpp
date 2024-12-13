/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#include "Desepticons.h"

Desepticons::Desepticons(uint health, uint armor, uint weapon, uint power, uint dangerLevel, uint numberOfModel, uint percentOfRecharge)
    : Transformers(health, armor, weapon, power), _dangerLevel(dangerLevel), _numberOfModel(), _percentOfRecharge() {}

void Desepticons::setDangerLevel(uint dangerLevel) {
    _dangerLevel = dangerLevel;
}
uint Desepticons::getDangerLevel() const {
    return _dangerLevel;
}

void Desepticons::setNumberOfModel(uint numberOfModel) {
    _numberOfModel = numberOfModel;
}
uint Desepticons::getNumberOfModel() const {
    return _numberOfModel;
}

void Desepticons::setPercentOfRecharge(uint percentOfRecharge) {
    _percentOfRecharge = percentOfRecharge;
}
uint Desepticons::getPercentOfRecharge() const {
    return _percentOfRecharge;
}

bool Desepticons::protect() {
    return _health > 50; 
}