//
// Created by user3301 on 2019-05-04.
//
#include <gtest/gtest.h>
#include "../questions/SaveThePrisoner.cpp"
class SaveThePrisonerTest:public testing::Test {
protected:
    SaveThePrisoner saveThePrisoner;
};

TEST_F(SaveThePrisonerTest, testmethod1) {
    int n =5, m = 2, s = 1;
    int expected = 2;
    int actual = saveThePrisoner.saveThePrisoner(n,m,s);
    ASSERT_EQ(expected,actual);
}
