/*
## Assignment3
## Author
Konkin Matvey B83-mm
## Contacts
st135668@student.spbu.ru
## Description
HomeAssignment 3
*/

#include "Transformers.h"

bool Transformers::motion() {
    return true;
}

bool Transformers::jump() {
    return true;
}

bool Transformers::attack() {
    if (_weapon > 0) {
        _weapon--;
        return true;
    }
    return false;
}