//
// Created by user3301 on 2019-04-25.
//
#include <gtest/gtest.h>
#include "../questions/BetweenTwoSets.cpp"
class BetweenTwoSetsTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(BetweenTwoSetsTest, testmethod1)
{
    std::vector<int> a{2,4};
    std::vector<int> b{16,32,96};
    int expected = 3;
    int actual = solution.getTotalX(a,b);
    ASSERT_EQ(expected, actual);
}

TEST_F(BetweenTwoSetsTest, testmethod2)
{
    std::vector<int> a{3,4};
    std::vector<int> b{24,48};
    int expected = 2;
    int actual = solution.getTotalX(a,b);
    ASSERT_EQ(expected, actual);
}