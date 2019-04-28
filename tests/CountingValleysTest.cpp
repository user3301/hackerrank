#include <gtest/gtest.h>
#include "../questions/CountingValleys.cpp"
//
// Created by user3301 on 2019-04-28.
//
class CountingValleysTest:public testing::Test {
protected:
    CountingValleys countingValleys;
};

TEST_F(CountingValleysTest, testmethod1) {
    std::string s = "UDDDUDUU";
    int n = 8;
    int expected = 1;
    int actual = countingValleys.countingValleys(n, s);
    ASSERT_EQ(expected, actual);
}
