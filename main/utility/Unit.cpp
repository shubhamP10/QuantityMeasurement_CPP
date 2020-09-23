#include "Unit.h"

Unit::Unit(double conversionFactor, UnitType type) : conversionFactor(conversionFactor), type(type) {}

const Unit Unit::INCH(1.0, LENGTH);

const Unit Unit::FEET(12.0, LENGTH);

bool Unit::operator==(Unit other) const {
    return (this == &other);
}