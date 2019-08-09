//
// Created by user3301 on 8/9/2019.
//
#include <gtest/gtest.h>
#include "../questions/DenseGraphFindShortestPath.cpp"
class DenseGraphFindShortestPathTest:public testing::Test{
protected:
    DenseGraphFindShortestPath denseGraphFindShortestPath;
};

TEST_F(DenseGraphFindShortestPathTest, testmethod1) {
    vector<vector<int>> graph{{0,1,1,1},{1,0,0,1},{1,0,0,1},{1,1,1,0}};
    int expected = 1;
    int actual = denseGraphFindShortestPath.findShortestPath(graph, 0,3);
    ASSERT_EQ(expected,actual);
}

TEST_F(DenseGraphFindShortestPathTest, testmethod2) {
    vector<vector<int>> graph{{0,1,0,0},{1,0,1,0},{0,1,0,1},{0,0,1,0}};
    int expected = 3;
    int actual = denseGraphFindShortestPath.findShortestPath(graph, 0,3);
    ASSERT_EQ(expected,actual);
}


TEST_F(DenseGraphFindShortestPathTest, testmethod3) {
    vector<vector<int>> graph{{0,0,1,0},{0,0,0,0},{1,0,0,1},{0,0,1,0}};
    int expected = 2;
    int actual = denseGraphFindShortestPath.findShortestPath(graph, 0,3);
    ASSERT_EQ(expected,actual);
}

TEST_F(DenseGraphFindShortestPathTest, testmethod4) {
    vector<vector<int>> graph{{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int expected = -1;
    int actual = denseGraphFindShortestPath.findShortestPath(graph, 0,3);
    ASSERT_EQ(expected,actual);
}