//
// Created by user3301 on 4/30/2019.
//
#include <gtest/gtest.h>
#include "../questions/PickingNumbers.cpp"
class PickingNumbersTest:public testing::Test {
protected:
    PickingNumbers pickingNumbers;
};

TEST_F(PickingNumbersTest, testmethod1) {
    std::vector<int> a{1,1,2,2,4,4,5,5,5};
    int expected = 5;
    int actual = pickingNumbers.pickingNumbers(a);
    ASSERT_EQ(expected, actual);
}

TEST_F(PickingNumbersTest, testmethod2) {
    std::vector<int> a{1,2,2,3,1,2};
    int expected = 5;
    int actual = pickingNumbers.pickingNumbers(a);
    ASSERT_EQ(expected, actual);
}
