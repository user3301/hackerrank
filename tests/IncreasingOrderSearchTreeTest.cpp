#include <gtest/gtest.h>
#include "../questions/IncreasingOrderSearchTree.cpp"
//
// Created by user3301 on 8/3/2019.
//
class IncreasingOrderSearchTreeTest:public testing::Test {
protected:
    IncreasingOrderSearchTree increasingOrderSearchTree;
};

TEST_F(IncreasingOrderSearchTreeTest, testmethod1) {
    TreeNode* root = new TreeNode(5);
    auto node3 = new TreeNode(3);
    auto node6 = new TreeNode(6);
    auto node2 = new TreeNode(2);
    auto node4 = new TreeNode(4);
    auto node1 = new TreeNode(1);
    auto node8 = new TreeNode(8);
    auto node7 = new TreeNode(7);
    auto node9 = new TreeNode(9);
    root->left = node3;
    root->right = node6;
    node3->left = node2;
    node3->right = node4;
    node2->left = node1;
    node6->right = node8;
    node8->left = node7;
    node8->right = node9;

    auto result = increasingOrderSearchTree.increasingBST(root);

}
