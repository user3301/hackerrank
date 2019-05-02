//
// Created by user3301 on 2019-05-02.
//
#include <gtest/gtest.h>
#include "../questions/UtopianTree.cpp"
class UtopianTreeTest:public testing::Test {
protected:
    UtopianTree utopianTree;
};

TEST_F(UtopianTreeTest, testmethod1) {
    int n = 0;
    int expected = 1;
    int actual = utopianTree.utopianTree(n);
    ASSERT_EQ(expected,actual);
}

TEST_F(UtopianTreeTest, testmethod2) {
    int n = 1;
    int expected = 2;
    int actual = utopianTree.utopianTree(n);
    ASSERT_EQ(expected,actual);
}

TEST_F(UtopianTreeTest, testmethod3) {
    int n = 4;
    int expected = 7;
    int actual = utopianTree.utopianTree(n);
    ASSERT_EQ(expected,actual);
}