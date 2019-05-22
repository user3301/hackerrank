//
// Created by user3301 on 5/22/2019.
//
#include <gtest/gtest.h>
#include "../questions/EqualStacks.cpp"
class EqualStacksTest:public testing::Test {
protected:
    EqualStacks equalStacks;
};

TEST_F(EqualStacksTest,testmethod1) {
    std::vector<int> h1{3,2,1,1,1};
    std::vector<int> h2{4,3,2};
    std::vector<int> h3{1,1,4,1};
    int expected = 5;
    int actual = equalStacks.equalStacks(h1,h2,h3);
    ASSERT_EQ(expected,actual);
}
