#include <iostream>
#include "./utility/Unit.h"

using namespace std;

class QuantityMeasurement {
private:
    double value;
    Unit unit;
    UnitType unitType;

public:
    QuantityMeasurement(double value, Unit unit);
   
    bool operator == (QuantityMeasurement*) const;
    bool operator == (QuantityMeasurement) const;
    bool compare(QuantityMeasurement);
    double addValues(QuantityMeasurement);
};