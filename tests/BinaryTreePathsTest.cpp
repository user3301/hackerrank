//
// Created by user3301 on 8/9/2019.
//
#include <gtest/gtest.h>
#include "../questions/BinaryTreePaths.cpp"
class BinaryTreePathsTest:public testing::Test{
protected:
    BinaryTreePaths binaryTreePaths;
};

TEST_F(BinaryTreePathsTest, testmehod1) {
    auto root = new TreeNode(1);
    auto node2 = new TreeNode(2);
    auto node3 = new TreeNode(3);
    auto node5 = new TreeNode(5);
    root->left = node2;
    root->right = node3;
    node2->right = node5;
    vector<string> actual = binaryTreePaths.binaryTreePaths(root);
    vector<string> expected = {"1->3", "1->2->5"};
    for(int i= 0; i< expected.size(); ++i) {
        ASSERT_EQ(expected[i],actual[i]);
    }
}
