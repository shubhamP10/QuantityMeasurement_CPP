#include "../enums/UnitType.h"

class Unit {
private:
    Unit(double conversionFactor, UnitType type);

public:
    double conversionFactor;

    UnitType type;

    Unit() {}

    bool operator== (Unit) const;

    static const Unit INCH;
    static const Unit FEET;
    static const Unit YARD;
};