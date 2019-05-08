//
// Created by user3301 on 5/8/2019.
//
#include <gtest/gtest.h>
#include "../questions/LeftRotation.cpp"
class LeftRotationTest:public testing::Test {
protected:
    LeftRotation leftRotation;
};

TEST_F(LeftRotationTest, testmethod1) {
    std::vector<int> ar{1,2,3,4,5};
    int n = 5;
    int d = 4;
    std::vector<int> expected{5,1,2,3,4};
    auto actual = leftRotation.leftRotation(ar, n,d);
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}