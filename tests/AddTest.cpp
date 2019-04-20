#include "../questions/TwoAdd.cpp"
#include "gtest/gtest.h"

class AddTest:public::testing::Test
{
    protected:
        solution solution;
};

TEST_F(AddTest, areqeual)
{
    EXPECT_EQ(solution.add(1,1), 2);
}
