//
// Created by user3301 on 8/4/2019.
//
#include <gtest/gtest.h>
#include "../questions/DiameterOfBinaryTree.cpp"
class DiameterOfBinaryTreeTest:public testing::Test {
protected:
    DiameterOfBinaryTree diameterOfBinaryTree;
};

TEST_F(DiameterOfBinaryTreeTest, testmethod1) {
    auto root = new TreeNode(1);
    auto node2 = new TreeNode(2);
    auto node3 = new TreeNode(3);
    auto node4 = new TreeNode(4);
    auto node5 = new TreeNode(5);
    root->left = node2;
    root->right = node3;
    node2->left = node4;
    node2->right = node5;

    int expected = 3;
    int actual = diameterOfBinaryTree.diameterOfBinaryTree(root);
    ASSERT_EQ(expected, actual);
}

TEST_F(DiameterOfBinaryTreeTest, testmethod2) {
    auto root = new TreeNode(1);

    int expected = 0;
    int actual = diameterOfBinaryTree.diameterOfBinaryTree(root);
    ASSERT_EQ(expected, actual);
}

TEST_F(DiameterOfBinaryTreeTest, testmethod3) {
    auto root = new TreeNode(2);
    auto node3 = new TreeNode(3);
    auto node1 = new TreeNode(1);
    root->left = node3;
    node3->left = node1;

    int expected = 0;
    int actual = diameterOfBinaryTree.diameterOfBinaryTree(root);
    ASSERT_EQ(expected, actual);
}