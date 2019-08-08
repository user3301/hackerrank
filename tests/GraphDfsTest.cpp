//
// Created by user3301 on 8/8/2019.
//
#include <gtest/gtest.h>
#include "../questions/GraphDfs.cpp"
class GraphDfsTest:public testing::Test{
protected:
    GraphDfs graphDfs;
};

TEST_F(GraphDfsTest, testmethod1) {
    std::vector<std::vector<int>> graph{{0,1,1,1},{1,0,0,1},{1,0,0,1},{1,1,1,0}};
    int expected = 1;
    int actual = graphDfs.findComponents(graph);
    ASSERT_EQ(expected,actual);
}


TEST_F(GraphDfsTest, testmethod2) {
    std::vector<std::vector<int>> graph{{0, 0, 1, 0},
                                        {0, 0, 0, 1},
                                        {1, 0, 0, 0},
                                        {0, 1, 0, 0}};
    int expected = 2;
    int actual = graphDfs.findComponents(graph);
    ASSERT_EQ(expected,actual);
}

TEST_F(GraphDfsTest, testmethod3) {
    std::vector<std::vector<int>> graph{{0}};
    int expected = 1;
    int actual = graphDfs.findComponents(graph);
    ASSERT_EQ(expected,actual);
}