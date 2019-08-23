//
// Created by user3301 on 8/20/2019.
//
#include <gtest/gtest.h>
#include "../questions/CountTripletsWithSumSmallerThanGivenValue.cpp"
class CountTripletsWithSumSmallerThanGivenValueTest:public testing::Test{
protected:
    CountTripletsWithSumSmallerThanGivenValue countTripletsWithSumSmallerThanGivenValue;
};

TEST_F(CountTripletsWithSumSmallerThanGivenValueTest, testmethod1) {
    vector<int> arr{-2,0,1,3};
    int sum =2;
    int expected = 2;
    int actual = countTripletsWithSumSmallerThanGivenValue.countTriplets(arr, sum);
    ASSERT_EQ(expected,actual);
}
