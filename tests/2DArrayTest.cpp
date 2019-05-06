//
// Created by user3301 on 5/6/2019.
//
#include <gtest/gtest.h>
#include "../questions/2DArray.cpp"
class TwoDArrayTest:public testing::Test {
protected:
    TwoDArray twoDArray;
};

TEST_F(TwoDArrayTest, testmethod1) {
    std::vector<std::vector<int>> input{{1,1,1,0,0,0},{0,1,0,0,0,0},{1,1,1,0,0,0},{0,0,2,4,4,0}, {0,0,0,2,0,0}, {0,0,1,2,4,0}};
    int expected = 19;
    int actual = twoDArray.hourglassSum(input);
    ASSERT_EQ(expected,actual);
}

TEST_F(TwoDArrayTest, testmethod2) {
    std::vector<std::vector<int>> input{{-1,-1,0,-9,-2,-2},{-2,-1,-6,-8,-2,-5},{-1,-1,-1,-2,-3,-4},{-1,-9,-2,-4,-4,-5}, {-7,-3,-3,-2,-9,-9}, {-1,-3,-1,-2,-4,-5}};
    int expected = -6;
    int actual = twoDArray.hourglassSum(input);
    ASSERT_EQ(expected,actual);
}