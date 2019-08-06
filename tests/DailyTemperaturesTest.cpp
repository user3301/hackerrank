//
// Created by user3301 on 8/6/2019.
//
#include <gtest/gtest.h>
#include "../questions/DailyTemperatures.cpp"
class DailyTemperaturesTest:public testing::Test {
protected:
    DailyTemperatures dailyTemperatures;
};

TEST_F(DailyTemperaturesTest, testmethod1) {
    std::vector<int> input{73,74,75,71,69,72,76,73};
    std::vector<int> expected{1,1,4,2,1,1,0,0};
    auto actual = dailyTemperatures.dailyTemperatures(input);
    for(int i = 0; i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual[i]);
    }
}