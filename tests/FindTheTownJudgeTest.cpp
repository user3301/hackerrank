//
// Created by user3301 on 8/6/2019.
//
#include <gtest/gtest.h>
#include "../questions/FindTheTownJudge.cpp"
class FindTheTownJudgeTest:public testing::Test{
protected:
    FindTheTownJudge findTheTownJudge;
};

TEST_F(FindTheTownJudgeTest, testmethod1) {
    int N = 2;
    vector<vector<int>> trust{{1,2}};
    int expected = 2;
    int actual = findTheTownJudge.findJudge(N, trust);
    ASSERT_EQ(expected, actual);
}

TEST_F(FindTheTownJudgeTest, testmethod2) {
    int N = 3;
    vector<vector<int>> trust{{1,3},{2,3},{3,1}};
    int expected = -1;
    int actual = findTheTownJudge.findJudge(N, trust);
    ASSERT_EQ(expected, actual);
}

TEST_F(FindTheTownJudgeTest, testmethod3) {
    int N = 2;
    vector<vector<int>> trust{{1,2},{2,1}};
    int expected = -1;
    int actual = findTheTownJudge.findJudge(N, trust);
    ASSERT_EQ(expected, actual);
}