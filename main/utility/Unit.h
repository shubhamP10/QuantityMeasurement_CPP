#include "../enums/UnitType.h"

class Unit
{
public:
    double conversionFactor;

    UnitType type;

    Unit() {}

private:
    Unit(double conversionFactor, UnitType type);

public:
    static const Unit INCH;
    static const Unit FEET;
};