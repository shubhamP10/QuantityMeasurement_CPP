#include "../main/Length.h"
#include <gtest/gtest.h>

//1.1
TEST(FeetTests, given0FeetAnd0Feet_ShouldReturnEqual) { 
    Length first_zero_feet(0, Unit::FEET), second_zero_feet(0, Unit::FEET);  
    bool result = (first_zero_feet == second_zero_feet);
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
    bool result(first_ref == second_ref);
    ASSERT_TRUE(result);
}

//1.4
TEST(FeetTests, given1FeetAnd1Feet_ShouldReturnEqual) {
    Length feet1(1, Unit::FEET), feet2(1, Unit::FEET);
    bool result = (feet1 == feet2);
    ASSERT_TRUE(result);
}

//1.5
TEST(FeetTests, given2InchTypes_ShouldReturnTrue) {
    Length inch1(1, Unit::INCH), inch2(1, Unit::INCH);
    bool result = (inch1 == inch2);
    ASSERT_TRUE(result);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}