#include <gtest/gtest.h>
#include "../questions/AppleAndOrange.cpp"
//
// Created by user3301 on 4/24/2019.
//
class AppleAndOrangeTest:public testing::Test{
protected:
    solution solution;
};

TEST_F(AppleAndOrangeTest, testmethod1)
{
    int s = 7;
    int t = 11;
    int a = 5;
    int b = 15;
    std::vector<int> apples{-2,2,1};
    std::vector<int> orange{5,-6};
    solution.countApplesAndOranges(s,t,a,b, apples, orange);
    // expected console output
    //   1
    //   1
}
