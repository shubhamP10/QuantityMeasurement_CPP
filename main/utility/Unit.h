#include "../enums/UnitType.h"

class Unit {
private:
    Unit(double conversionFactor, UnitType type);

public:
    double conversionFactor;

    UnitType type;

    Unit() {}

    bool operator== (Unit) const;

    //Length Units
    static const Unit INCH;
    static const Unit FEET;
    static const Unit YARD;
    static const Unit CENTIMETER;

    //Volume Units
    static const Unit GALLON;
    static const Unit LITRE;
    static const Unit MILLILITRE;

    //Weight Units
    static const Unit KG;
    static const Unit GRAM;
    static const Unit TONNE;

    //Temperature Units
    static const Unit CELSIUS;
    static const Unit FAHRENHIET;
};