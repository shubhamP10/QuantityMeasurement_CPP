#include "Feet.h"

Feet::Feet(double value) {
    this->value = value;
}

bool Feet::operator == (Feet *other) const {
    if(other == nullptr || this == nullptr) { //null check
        return false;
    }

    if(this == other) { //reference check
        return true;
    }

    return (this->value == other->value); //value check
}

bool Feet::operator == (Feet other) const {

    return (this->value == other.value); //value check
}