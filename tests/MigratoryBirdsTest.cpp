//
// Created by user3301 on 2019-04-26.
//
#include <gtest/gtest.h>
#include "../questions/MigratoryBirds.cpp"
class MigratoryBirdsTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(MigratoryBirdsTest, testmethod1)
{
    std::vector<int> input{1, 4, 4, 4, 5, 3};
    int expected = 4;
    int actual = solution.migratoryBirds(input);
    ASSERT_EQ(expected, actual);
}

TEST_F(MigratoryBirdsTest, testmethod2)
{
    std::vector<int> input{1, 2, 3, 4, 5, 4, 3, 2, 1, 3, 4};
    int expected = 3;
    int actual = solution.migratoryBirds(input);
    ASSERT_EQ(expected, actual);
}
