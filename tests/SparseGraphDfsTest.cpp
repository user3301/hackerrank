//
// Created by user3301 on 8/8/2019.
//
#include <gtest/gtest.h>
#include "../questions/SparseGraphDfs.cpp"
class SparseGraphDfsTest:public testing::Test{
protected:
    SparseGraphDfs sparseGraphDfs;
};

TEST_F(SparseGraphDfsTest, testmethod1) {
    vector<vector<int>> graph{{1,2,3},{0,3},{0,3},{0,1,2}};
    int expected = 1;
    int actual = sparseGraphDfs.findComponents(graph);
    ASSERT_EQ(expected, actual);
}


TEST_F(SparseGraphDfsTest, testmethod2) {
    vector<vector<int>> graph{{2},{3},{0},{1}};
    int expected = 2;
    int actual = sparseGraphDfs.findComponents(graph);
    ASSERT_EQ(expected, actual);
}