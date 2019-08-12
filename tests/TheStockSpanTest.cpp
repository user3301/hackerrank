//
// Created by user3301 on 8/12/2019.
//
#include <gtest/gtest.h>
#include "../questions/TheStockSpan.cpp"
class TheStockSpanTest:public testing::Test {
protected:
    TheStockSpan theStockSpan;
};

TEST_F(TheStockSpanTest, testmethod1) {
    vector<int> stocks{10,4,5,90,120,80};
    vector<int> expected{1,1,2,4,5,1};
    vector<int> actual = theStockSpan.calculateSpan(stocks);
    for(int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}
