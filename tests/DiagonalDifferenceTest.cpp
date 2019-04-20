#include <gtest/gtest.h>
#include "../questions/DiagonalDifference.cpp"
//
// Created by user3301 on 2019-04-21.
//
class DiagonalDifferenceTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(DiagonalDifferenceTest, areequal)
{
    std::vector<std::vector<int>> input{{11,2,4}, {4,5,6},{10,8,-12}};
    int expected = 15;
    int actual = solution.diagonalDifference(input);
    ASSERT_EQ(expected,actual);
}