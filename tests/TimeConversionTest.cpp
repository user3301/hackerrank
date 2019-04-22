#include <gtest/gtest.h>
#include "../questions/TimeConversion.cpp"
//
// Created by user3301 on 2019-04-22.
//
class TimeConversionTest:public testing::Test
{
protected:
    solution solution;
};

TEST_F(TimeConversionTest, testmethod)
{
    std::string s = "07:05:45PM";
    auto actual = solution.timeConversion(s);
    ASSERT_EQ(actual, "19:05:45");
    std::string s2 = "06:40:03AM";
    auto actual2 = solution.timeConversion(s2);
    ASSERT_EQ(actual2, "06:40:03");
    auto actual3 = solution.timeConversion("12:45:54PM");
    ASSERT_EQ(actual3, "12:45:54");
}