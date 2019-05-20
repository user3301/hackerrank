//
// Created by user3301 on 5/14/2019.
//
#include <gtest/gtest.h>
#include "../questions/TopViewTree.cpp"
class TopViewTreeTest:public testing::Test {
protected:
    TopViewTree topViewTree;
};

TEST_F(TopViewTreeTest, testmethod1) {
    TreeNode* head = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);
    TreeNode* node6 = new TreeNode(6);
    TreeNode* node7 = new TreeNode(7);
    head->left = node2;
    head->right = node3;
    node2->left = node4;
    node2->right = node5;
    node5->right = node6;
    node6->right = node7;
    topViewTree.topView(head);
}

TEST_F(TopViewTreeTest, testmethod2) {
    TreeNode* head = new TreeNode(1);
    TreeNode* node2 = new TreeNode(2);
    TreeNode* node3 = new TreeNode(3);
    TreeNode* node4 = new TreeNode(4);
    TreeNode* node5 = new TreeNode(5);
    TreeNode* node6 = new TreeNode(6);
    head->right = node2;
    node2->right = node5;
    node5->left = node3;
    node5->right = node6;
    node3->right = node4;
    topViewTree.topView(head);
}
