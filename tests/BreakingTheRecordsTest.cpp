#include <gtest/gtest.h>
#include "../questions/BreakingTheRecords.cpp"
//
// Created by user3301 on 2019-04-25.
//
class BreakingTheRecordsTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(BreakingTheRecordsTest, testmethod1)
{
    std::vector<int> input{10, 5, 20, 20, 4, 5, 2, 25, 1};
    std::vector<int> expected{2,4};
    auto actual = solution.breakingRecords(input);
    ASSERT_EQ(expected[0], actual[0]);
    ASSERT_EQ(expected[1], actual[1]);
}

