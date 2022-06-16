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

TEST(myfunction, addThrow)
{
    ASSERT_ANY_THROW(divide(10,0));
    ASSERT_NO_THROW(divide(0,10));
}

TEST(myfunction, subtract)
{
    ASSERT_EQ(-12, subtract(10, 22));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}