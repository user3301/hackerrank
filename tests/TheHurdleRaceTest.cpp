//
// Created by user3301 on 5/1/2019.
//
#include <gtest/gtest.h>
#include "../questions/TheHurdleRace.cpp"
class TheHurdleRaceTest:public testing::Test {
protected:
    TheHurdleRace theHurdleRace;
};

TEST_F(TheHurdleRaceTest, testmethod1) {
    int k  = 4;
    std::vector<int> height{1,6,3,5,2};
    int expected = 2;
    int actual = theHurdleRace.hurdleRace(k,height);
    ASSERT_EQ(expected, actual);
}

TEST_F(TheHurdleRaceTest, testmethod2) {
    int k  = 7;
    std::vector<int> height{2,5,4,5,2};
    int expected = 0;
    int actual = theHurdleRace.hurdleRace(k,height);
    ASSERT_EQ(expected, actual);
}
