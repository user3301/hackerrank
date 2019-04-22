#include <gtest/gtest.h>
#include "../questions/Staircase.cpp"
//
// Created by user3301 on 2019-04-22.
//
class StaircaseTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(StaircaseTest, testmethod1)
{
    int input = 6;
    solution.staircase(input);
}

