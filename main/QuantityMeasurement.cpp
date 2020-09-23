#include <math.h>
#include <iomanip>
#include "QuantityMeasurement.h"

QuantityMeasurement::QuantityMeasurement(double value, Unit unit) : value(value), unit(unit), unitType(unit.type) {}

bool QuantityMeasurement::operator == (QuantityMeasurement *other) const {
    if(other == nullptr || this == nullptr) { //null check
        return false;
    }

    if(this == other) { //reference check
        return true;
    }

    return (this->value == other->value); //value check
}

bool QuantityMeasurement::operator == (QuantityMeasurement other) const {

    return (this->value == other.value); //value check
}

bool QuantityMeasurement::compare(QuantityMeasurement other) {
    if((this->unit == (other.unit)))
        return(this == &other);
    return (round(this->value * this->unit.conversionFactor) == round(other.value * other.unit.conversionFactor));
}

double QuantityMeasurement::addValues(QuantityMeasurement other) {
   
    return (this->value * this->unit.conversionFactor) + (other.value * other.unit.conversionFactor);
}