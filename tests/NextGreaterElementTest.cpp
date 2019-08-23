//
// Created by user3301 on 2019-08-11.
//
#include <gtest/gtest.h>
#include "../questions/NextGreaterElement.cpp"
class NextGreaterElementTest:public testing::Test {
protected:
    NextGreaterElement nextGreaterElement;
};

TEST_F(NextGreaterElementTest, testmethod1) {
    vector<int> input{1,8,2,3,9};
    vector<int> expected{8,9,3,9,-1};
    auto actual = nextGreaterElement.findNextGreaterElement(input);
    for (int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i],actual[i]);
    }
}
