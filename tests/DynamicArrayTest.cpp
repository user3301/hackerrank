//
// Created by user3301 on 5/7/2019.
//
#include <gtest/gtest.h>
#include "../questions/DynamicArray.cpp"
class DynamicArrayTest:public testing::Test {
protected:
    DynamicArray dynamicArray;
};

TEST_F(DynamicArrayTest, testmethod1) {
    int n = 2;
    std::vector<std::vector<int>> input{{1,0,5}, {1,1,7}, {1,0,3}, {2,1,0}, {2,1,1}};
    std::vector<int> expected {7,3};
    auto actual = dynamicArray.dynamicArray(n, input);
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}
