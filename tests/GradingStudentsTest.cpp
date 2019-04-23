#include <gtest/gtest.h>
#include "../questions/GradingStudents.cpp"
//
// Created by user3301 on 2019-04-23.
//
class GradingStudentsTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(GradingStudentsTest, testmethod1)
{
    std::vector<int> input1{73,67,38, 33};
    std::vector<int> expected{75, 67, 40, 33};
    auto actual = solution.gradingStudents(input1);
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}