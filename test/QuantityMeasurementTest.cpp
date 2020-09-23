#include "../main/QuantityMeasurement.h"
#include <gtest/gtest.h>

//UC1
//1.1
TEST(FeetTests, given0FeetAnd0Feet_ShouldReturnEqual) { 
    QuantityMeasurement first_zero_feet(0, Unit::FEET), second_zero_feet(0, Unit::FEET);  
    bool result = first_zero_feet.compare(second_zero_feet);
    ASSERT_TRUE(result);
}

//1.2
TEST(FeetTests, givenNullAnd1Feet_ShouldNotEqual) { 
    QuantityMeasurement first_zero_feet(1, Unit::FEET);
    bool result = (first_zero_feet == nullptr);
    ASSERT_FALSE(result);
}

//1.3
TEST(FeetTests, given1ObjectAnd1References_ShouldBeEqual) { 
    QuantityMeasurement *first_ref = new QuantityMeasurement(1, Unit::FEET);
    QuantityMeasurement *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

//1.4
TEST(FeetTests, given1FeetAnd1Feet_ShouldReturnEqual) {
    QuantityMeasurement feet1(1, Unit::FEET), feet2(1, Unit::FEET);
    bool result = feet1.compare(feet2);
    ASSERT_TRUE(result);
}

//1.5
TEST(FeetTests, given2InchTypes_ShouldReturnTrue) {
    QuantityMeasurement inch1(1, Unit::INCH), inch2(1, Unit::INCH);
    bool result = inch1.compare(inch2);
    ASSERT_TRUE(result);
}

//1.6
TEST(InchTests, given1InchAnd1Null_ShouldReturnFalse) {
    QuantityMeasurement inch1(1, Unit::INCH);
    bool result = (inch1 == nullptr);
    ASSERT_FALSE(result);
}

//1.7
TEST(InchTests, given2SameInchReferences_ShouldReturnTrue) {
    QuantityMeasurement *first_inch_ref = new QuantityMeasurement(1, Unit::INCH);
    QuantityMeasurement *second_inch_ref = first_inch_ref;
    bool result = (first_inch_ref == second_inch_ref);
    ASSERT_TRUE(result);
}

//1.8
TEST(InchTests, given12InchAnd1Feet_ShouldReturnFalse) {
    QuantityMeasurement inch(12, Unit::INCH), feet(1, Unit::FEET);
    bool result = inch.compare(feet);
    ASSERT_TRUE(result);
}

//1.9
TEST(InchTests, given2InchAnd2Inch_ShouldReturnTrue) {
    QuantityMeasurement inch1(2, Unit::INCH), inch2(2, Unit::INCH);
    bool result = inch1.compare(inch2);
    ASSERT_TRUE(result);
}

//1.10
TEST(InchTests, given2InchAnd1Inch_ShouldReturnFalse) {
    QuantityMeasurement inch1(2, Unit::INCH), inch2(1, Unit::INCH);
    bool result = inch1.compare(inch2);
    ASSERT_FALSE(result);
}

//2.1
TEST(YardTests, given3FeetAnd1Yard_ShouldReturnTrue) {
    QuantityMeasurement feet(3, Unit::FEET), yard(1, Unit::YARD);
    bool result = feet.compare(yard);
    ASSERT_TRUE(result);
}

//2.2
TEST(YardTests, given1FeetAnd1Yard_ShouldReturnFalse) {
    QuantityMeasurement feet(1, Unit::FEET), yard(1, Unit::YARD);
    bool result = feet.compare(yard);
    ASSERT_FALSE(result);
}

//2.3
TEST(YardTests, given1InchAnd1Yard_ShouldReturnFalse) {
    QuantityMeasurement inch(1, Unit::INCH), yard(1, Unit::YARD);
    bool result = inch.compare(yard);
    ASSERT_FALSE(result);
}

//2.4
TEST(YardTests, given1YardAnd36Inch_ShouldReturnTrue) {
    QuantityMeasurement inch(36, Unit::INCH), yard(1, Unit::YARD);
    bool result = yard.compare(inch);
    ASSERT_TRUE(result);
}

//2.5
TEST(YardTests, given36InchAnd1Yard_ShouldReturnTrue) {
    QuantityMeasurement inch(36, Unit::INCH), yard(1, Unit::YARD);
    bool result = inch.compare(yard);
    ASSERT_TRUE(result);
}

//2.6
TEST(YardTests, given1YardAnd3Feet_ShouldReturnTrue) {
    QuantityMeasurement feet(3, Unit::FEET), yard(1, Unit::YARD);
    bool result = yard.compare(feet);
    ASSERT_TRUE(result);
}

//3.1
TEST(CentimeterTest, given2InchAnd5cm_ShouldReturnTrue) {
    QuantityMeasurement cm(5, Unit::CENTIMETER), inch(2, Unit::INCH);
    bool result = inch.compare(cm);
    ASSERT_TRUE(result);
}

//3.2
TEST(CentimeterTest, given2InchAnd2cm_ShouldReturnFalse) {
    QuantityMeasurement cm(2, Unit::CENTIMETER), inch(2, Unit::INCH);
    bool result = inch.compare(cm);
    ASSERT_FALSE(result);
}

//3.3
TEST(CentimeterTest, given2FeetAnd5cm_ShouldReturnTrue) {
    QuantityMeasurement cm(5, Unit::CENTIMETER), feet(2, Unit::FEET);
    bool result = feet.compare(cm);
    ASSERT_FALSE(result);
}

//3.4
TEST(CentimeterTest, given2FeetAnd60cm_ShouldReturnTrue) {
    QuantityMeasurement cm(60, Unit::CENTIMETER), feet(2, Unit::FEET);
    bool result = feet.compare(cm);
    ASSERT_TRUE(result);
}

//3.5
TEST(CentimeterTest, given1YardAnd60cm_ShouldReturnTrue) {
    QuantityMeasurement cm(60, Unit::CENTIMETER), yard(1, Unit::YARD);
    bool result = yard.compare(cm);
    ASSERT_FALSE(result);
}

//3.6
TEST(CentimeterTest, given1YardAnd90cm_ShouldReturnTrue) {
    QuantityMeasurement cm(90, Unit::CENTIMETER), yard(1, Unit::YARD);
    bool result = yard.compare(cm);
    ASSERT_TRUE(result);
}

//4.1
TEST(AdditionTests, given2inchAnd2inch_ShouldReturn4Inch) {
    QuantityMeasurement inch1(2, Unit::INCH), inch2(2, Unit::INCH);
    double sum = inch1.addValues(inch2);
    ASSERT_EQ(sum, 4.0);
}

//4.2
TEST(AdditionTests, given1FeetAnd2inch_ShouldReturn14Inch) {
    QuantityMeasurement feet(1, Unit::FEET), inch(2, Unit::INCH);
    double sum = feet.addValues(inch);
    ASSERT_EQ(sum, 14.0);
}

//4.3
TEST(AdditionTests, given1FeetAnd1Feet_ShouldReturn24Inch) {
    QuantityMeasurement feet1(1, Unit::FEET), feet2(1, Unit::FEET);
    double sum = feet1.addValues(feet2);
    ASSERT_EQ(sum, 24.0);
}

//4.4
TEST(AdditionTests, given2InchAnd2Point5cm_ShouldReturn3Inch) {
    QuantityMeasurement inch(2, Unit::INCH), cm(2.5, Unit::CENTIMETER);
    double sum = inch.addValues(cm);
    ASSERT_EQ(sum, 3.0);
}

//5.1
TEST(VolumeTests, given1GallonAnd1Litre_ShouldReturnFalse) {
    QuantityMeasurement gallon(1, Unit::GALLON), litre(1, Unit::LITRE);
    bool result = gallon.compare(litre);
    ASSERT_FALSE(result);
}

//5.2
TEST(VolumeTests, given1GallonAndEquavalentLitre_ShouldReturnTrue) {
    QuantityMeasurement gallon(1.0, Unit::GALLON), litre(3.78, Unit::LITRE);
    bool result = gallon.compare(litre);
    ASSERT_TRUE(result);
}

//5.3
TEST(VolumeTests, given1000mlAndEquavalentLitre_ShouldReturnTrue) {
    QuantityMeasurement ml(1000, Unit::MILLILITRE), litre(1, Unit::LITRE);
    bool result = litre.compare(ml);
    ASSERT_TRUE(result);
}

//6.1
TEST(AdditionTests, given1GallonAndEquavalentLitreToAdd_ShouldReturnSum) {
    QuantityMeasurement gallon(1, Unit::GALLON), litre(3.78, Unit::LITRE);
    double sum = litre.addValues(gallon);
    ASSERT_EQ(sum, 7.56);
}

//6.2
TEST(AdditionTests, given1LitreAnd1000mlToAdd_ShouldReturnSum) {
    QuantityMeasurement litre(1, Unit::LITRE), ml(1000, Unit::MILLILITRE);
    double sum = litre.addValues(ml);
    ASSERT_EQ(sum, 2);
}

//7.1
TEST(WeightTests, given1KgAnd1000Grams_ShouldReturnTrue) {
    QuantityMeasurement kg(1, Unit::KG), gram(1000, Unit::GRAM);
    bool result = kg.compare(gram);
    ASSERT_TRUE(result);
}

//7.2
TEST(WeightTests, given1TonneAnd1000Kg_ShouldReturnTrue) {
    QuantityMeasurement kg(1000, Unit::KG), tonne(1, Unit::TONNE);
    bool result = tonne.compare(kg);
    ASSERT_TRUE(result);
}

//7.3
TEST(AdditionTests, given1TonneAnd1000Grams_ShouldReturn1001Kg) {
    QuantityMeasurement tonne(1, Unit::TONNE), gram(1000, Unit::GRAM);
    double sum = tonne.addValues(gram);
    ASSERT_EQ(sum, 1001);
}

//8
TEST(TemperatureTest, given100CelsiusAnd212Fh_ShouldReturnTrue) {
    QuantityMeasurement celsius(100, Unit::CELSIUS), fh(212, Unit::FAHRENHIET);
    double result = celsius.compare(fh);
    ASSERT_TRUE(result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}