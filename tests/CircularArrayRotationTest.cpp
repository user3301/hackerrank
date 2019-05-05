//
// Created by user3301 on 2019-05-05.
//
#include <gtest/gtest.h>
#include "../questions/CircularArrayRotation.cpp"
class CircularArrayRotationTest:public testing::Test {
protected:
    CircularArrayRotation circularArrayRotation;
};

TEST_F(CircularArrayRotationTest, testmethod1) {
    std::vector<int> a {3,4,5};
    int k = 2;
    std::vector<int> queries{1,2};
    std::vector<int> expected{5,3};
    auto actual = circularArrayRotation.circularArrayRotation(a,k,queries);
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}
