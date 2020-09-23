#include "../main/Feet.h"
#include <gtest/gtest.h>

//1.1
TEST(FeetTests, given0FeetAnd0Feet_ShouldReturnEqual) { 
    Feet first_zero_feet(0), second_zero_feet(0);  
    ASSERT_EQ(first_zero_feet, second_zero_feet);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}