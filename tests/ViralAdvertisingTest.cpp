//
// Created by user3301 on 2019-05-04.
//
#include <gtest/gtest.h>
#include "../questions/ViralAdvertising.cpp"
class ViralAdvertisingTest:public testing::Test {
protected:
    ViralAdvertising viralAdvertising;
};

TEST_F(ViralAdvertisingTest, testmethod1) {
    int n = 3;
    int expected = 9;
    int actual = viralAdvertising.viralAdvertising(n);
    ASSERT_EQ(expected, actual);
}
