#include <gtest/gtest.h>
#include "myotherfunctions.hpp"
extern "C"
{
#include "myfunctions.h"
}

TEST(myfunction, add)
{
    ASSERT_EQ(32, add(10, 22));
    ASSERT_NE(30, add(10, 22));
}

TEST(myfunction, divide)
{
    ASSERT_EQ(0, divide(0,10));
    ASSERT_EQ(0, divide(5,10));
    ASSERT_EQ(1, divide(10,10));
    ASSERT_EQ(1, divide(15,10));
    ASSERT_EQ(2, divide(20,10));
}

TEST(myfunction, divideThrow)
{
    ASSERT_ANY_THROW(divide(10,0));
    ASSERT_NO_THROW(divide(0,10));
}

TEST(myfunction, subtract)
{
    ASSERT_EQ(-12, subtract(10, 22));
}

/*int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}*/