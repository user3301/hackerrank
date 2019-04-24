//
// Created by user3301 on 4/24/2019.
//
#include <gtest/gtest.h>
#include "../questions/Kangaroo.cpp"
class KangarooTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(KangarooTest, testmethod1)
{
    int x1 = 0;
    int v1 = 2;
    int x2 = 5;
    int v2 = 3;
    auto expected = "NO";
    auto actual = solution.kangaroo(x1, v1, x2, v2);
    ASSERT_EQ(expected, actual);
}

TEST_F(KangarooTest, testmethod2)
{
    int x1 = 43;
    int v1 = 2;
    int x2 = 70;
    int v2 = 2;
    auto expected = "NO";
    auto actual = solution.kangaroo(x1, v1, x2, v2);
    ASSERT_EQ(expected, actual);
}