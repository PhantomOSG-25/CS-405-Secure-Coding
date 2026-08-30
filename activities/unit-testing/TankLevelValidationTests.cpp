#include <gtest/gtest.h>

// Valid tank levels are from 0% through 100%, inclusive.
bool isValidTankLevel(int tankLevel)
{
    return tankLevel >= 0 && tankLevel <= 100;
}

// Normal valid value.
TEST(TankLevelValidationTest, AcceptsFiftyPercent)
{
    EXPECT_TRUE(isValidTankLevel(50));
}

// Lower boundary.
TEST(TankLevelValidationTest, AcceptsZeroPercent)
{
    EXPECT_TRUE(isValidTankLevel(0));
}

// Upper boundary.
TEST(TankLevelValidationTest, AcceptsOneHundredPercent)
{
    EXPECT_TRUE(isValidTankLevel(100));
}

// Just below the valid range.
TEST(TankLevelValidationTest, RejectsNegativeOnePercent)
{
    EXPECT_FALSE(isValidTankLevel(-1));
}

// Just above the valid range.
TEST(TankLevelValidationTest, RejectsOneHundredOnePercent)
{
    EXPECT_FALSE(isValidTankLevel(101));
}

// Clearly outside the valid range.
TEST(TankLevelValidationTest, RejectsOneHundredFiftyPercent)
{
    EXPECT_FALSE(isValidTankLevel(150));
}
