#include <gtest/gtest.h>
#include "../questions/BirthdayCakeCandles.cpp"
//
// Created by user3301 on 2019-04-22.
//
class BirthdayCakeCandlesTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(BirthdayCakeCandlesTest, testmethod)
{
    std::vector<int> input{3,1,2,3};
    int expected = 2;
    ASSERT_EQ(solution.birthdayCakeCandles(input), expected);
}
