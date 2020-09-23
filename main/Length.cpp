#include "Length.h"

Length::Length(double value, Unit unit) : value(value), unit(unit), unitType(unit.type) {}

bool Length::operator == (Length *other) const {
    if(other == nullptr || this == nullptr) { //null check
        return false;
    }

    if(this == other) { //reference check
        return true;
    }

    return (this->value == other->value); //value check
}

bool Length::operator == (Length other) const {

    return (this->value == other.value); //value check
}