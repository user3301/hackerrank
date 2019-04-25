//
// Created by user3301 on 2019-04-25.
//
#include <gtest/gtest.h>
#include "../questions/DivisibleSumPairs.cpp"
class DivisibleSumPairsTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(DivisibleSumPairsTest, testmethod1)
{
    std::vector<int> ar{1,3,2,6,1,2};
    int n = 6, k = 3;
    int expected = 5;
    int actual = solution.divisbleSumPairs(n, k, ar);
    ASSERT_EQ(expected, actual);
}
