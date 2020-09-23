#include "../main/Length.h"
#include <gtest/gtest.h>

//UC1
//1.1
TEST(FeetTests, given0FeetAnd0Feet_ShouldReturnEqual) { 
    Length first_zero_feet(0, Unit::FEET), second_zero_feet(0, Unit::FEET);  
    bool result = first_zero_feet.compare(second_zero_feet);
    ASSERT_TRUE(result);
}

//1.2
TEST(FeetTests, givenNullAnd1Feet_ShouldNotEqual) { 
    Length first_zero_feet(1, Unit::FEET);
    bool result = (first_zero_feet == nullptr);
    ASSERT_FALSE(result);
}

//1.3
TEST(FeetTests, given1ObjectAnd1References_ShouldBeEqual) { 
    Length *first_ref = new Length(1, Unit::FEET);
    Length *second_ref = first_ref;
    bool result = (first_ref == second_ref);
    ASSERT_TRUE(result);
}

//1.4
TEST(FeetTests, given1FeetAnd1Feet_ShouldReturnEqual) {
    Length feet1(1, Unit::FEET), feet2(1, Unit::FEET);
    bool result = feet1.compare(feet2);
    ASSERT_TRUE(result);
}

//1.5
TEST(FeetTests, given2InchTypes_ShouldReturnTrue) {
    Length inch1(1, Unit::INCH), inch2(1, Unit::INCH);
    bool result = inch1.compare(inch2);
    ASSERT_TRUE(result);
}

//1.6
TEST(InchTests, given1InchAnd1Null_ShouldReturnFalse) {
    Length inch1(1, Unit::INCH);
    bool result = (inch1 == nullptr);
    ASSERT_FALSE(result);
}

//1.7
TEST(InchTests, given2SameInchReferences_ShouldReturnTrue) {
    Length *first_inch_ref = new Length(1, Unit::INCH);
    Length *second_inch_ref = first_inch_ref;
    bool result = (first_inch_ref == second_inch_ref);
    ASSERT_TRUE(result);
}

//1.8
TEST(InchTests, given12InchAnd1Feet_ShouldReturnFalse) {
    Length inch(12, Unit::INCH), feet(1, Unit::FEET);
    bool result = inch.compare(feet);
    ASSERT_TRUE(result);
}

//1.9
TEST(InchTests, given2InchAnd2Inch_ShouldReturnTrue) {
    Length inch1(2, Unit::INCH), inch2(2, Unit::INCH);
    bool result = inch1.compare(inch2);
    ASSERT_TRUE(result);
}

//1.10
TEST(InchTests, given2InchAnd1Inch_ShouldReturnFalse) {
    Length inch1(2, Unit::INCH), inch2(1, Unit::INCH);
    bool result = inch1.compare(inch2);
    ASSERT_FALSE(result);
}

//2.1
TEST(YardTests, given3FeetAnd1Yard_ShouldReturnTrue) {
    Length feet(3, Unit::FEET), yard(1, Unit::YARD);
    bool result = feet.compare(yard);
    ASSERT_TRUE(result);
}

//2.2
TEST(YardTests, given1FeetAnd1Yard_ShouldReturnFalse) {
    Length feet(1, Unit::FEET), yard(1, Unit::YARD);
    bool result = feet.compare(yard);
    ASSERT_FALSE(result);
}

//2.3
TEST(YardTests, given1InchAnd1Yard_ShouldReturnFalse) {
    Length inch(1, Unit::INCH), yard(1, Unit::YARD);
    bool result = inch.compare(yard);
    ASSERT_FALSE(result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}