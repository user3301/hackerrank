#include <gtest/gtest.h>
#include "../questions/DayOfProgrammer.cpp"
//
// Created by user3301 on 2019-04-27.
//
class DaysOfProgrammerTest:public testing::Test {
protected:
    solution solution;
};

TEST_F(DaysOfProgrammerTest, testmethod1) {
    int year = 1800;
    std::string expected = "12.09.1800";
    auto actual = solution.dayOfProgrammer(year);
    ASSERT_EQ(expected, actual);
}
