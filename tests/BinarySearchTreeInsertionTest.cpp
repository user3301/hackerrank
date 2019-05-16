//
// Created by user3301 on 5/15/2019.
//
#include <gtest/gtest.h>
#include "../questions/BinarySearchTreeInsertion.cpp"
class BinarySearchTreeInsertionTest:public testing::Test {
protected:
    BinarySearchTreeInsertion binarySearchTreeInsertion;
};

TEST_F(BinarySearchTreeInsertionTest, testmethod1) {
    auto node4 = new TreeNode(4);
    auto node2 = new TreeNode(2);
    auto node7 = new TreeNode(7);
    auto node1 = new TreeNode(1);
    auto node3 = new TreeNode(3);
    node4->left = node2;
    node4->right = node7;
    node2->left = node1;
    node2->right = node3;
    int data = 6;
    
    binarySearchTreeInsertion.insert(node4, data);
}
