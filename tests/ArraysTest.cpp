//
// Created by user3301 on 5/6/2019.
//
#include <gtest/gtest.h>
#include "../questions/Arrays.cpp"
class ArraysTest:public testing::Test {
protected:
    Arrays arrays;
};

TEST_F(ArraysTest, testmethod1) {
    std::vector<int> a{1,4,3,2};
    std::vector<int> expected{2,3,4,1};
    auto actual = arrays.reverseArray(a);
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}
