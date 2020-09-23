#include "../main/Feet.h"
#include <gtest/gtest.h>

//1.1
TEST(FeetTests, given0FeetAnd0Feet_ShouldReturnEqual) { 
    Feet first_zero_feet(0), second_zero_feet(0);  
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

//1.2
TEST(FeetTests, givenNullAnd1Feet_ShouldNotEqual) { 
    Feet first_zero_feet(1);
    ASSERT_NE(first_zero_feet, nullptr);
}

//1.3
TEST(FeetTests, given1ObjectAnd1References_ShouldBeEqual) { 
    Feet *first_ref = new Feet(1);
    Feet *second_ref = first_ref;
    ASSERT_EQ(first_ref, second_ref);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}