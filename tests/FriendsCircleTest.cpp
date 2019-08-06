//
// Created by user3301 on 8/6/2019.
//
#include <gtest/gtest.h>
#include "../questions/FriendsCircle.cpp"
class FriendsCircleTest:public testing::Test{
protected:
    FriendsCircle friendsCircle;
};

TEST_F(FriendsCircleTest, testmethod1) {
    std::vector<std::vector<int>> input{{1,1,0},{1,1,0},{0,0,1}};
    friendsCircle.findCircleNum(input);
}

