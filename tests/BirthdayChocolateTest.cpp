//
// Created by user3301 on 2019-04-25.
//
#include <gtest/gtest.h>
#include "../questions/BirthdayChocolate.cpp"
class BirthdayChocolateTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(BirthdayChocolateTest, testmethod1)
{
    std::vector<int> input{1, 2, 1, 3, 2};
    int m = 2, d = 3;
    int expected = 2;
    int actual = solution.birthday(input, d,m);
    ASSERT_EQ(expected, actual);
}

TEST_F(BirthdayChocolateTest, testmethod2)
{
    std::vector<int> input{1,1,1,1,1,1};
    int m = 2, d = 3;
    int expected = 0;
    int actual = solution.birthday(input, d,m);
    ASSERT_EQ(expected, actual);
}

TEST_F(BirthdayChocolateTest, testmethod3)
{
    std::vector<int> input{4};
    int m = 1, d = 4;
    int expected = 1;
    int actual = solution.birthday(input, d,m);
    ASSERT_EQ(expected, actual);
}