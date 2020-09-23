#include <iostream>
#include "./utility/Unit.h"

using namespace std;

class Length {
private:
    double value;
    Unit unit;
    UnitType unitType;

public:
    Length(double value, Unit unit);
   
    bool operator == (Length*) const;
    bool operator == (Length) const;
    bool compare(Length);
    double addValues(Length);
};