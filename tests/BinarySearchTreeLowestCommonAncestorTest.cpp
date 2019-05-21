//
// Created by user3301 on 5/21/2019.
//
#include <memory>
#include <gtest/gtest.h>
#include "../questions/BinarySearchTreeLowestCommonAncestor.cpp"
class BinarySearchTreeLowestCommonAncestorTest:public testing::Test {
protected:
    BinarySearchTreeLowestCommonAncestor lowestCommonAncestor;
};

TEST_F(BinarySearchTreeLowestCommonAncestorTest, testmethod1) {
    std::unique_ptr<TreeNode> node9(new TreeNode(9));
    std::unique_ptr<TreeNode> node7(new TreeNode(7));
    std::unique_ptr<TreeNode> node8(new TreeNode(8));
    std::unique_ptr<TreeNode> node5(new TreeNode(5));
    std::unique_ptr<TreeNode> node6(new TreeNode(6));
    std::unique_ptr<TreeNode> node4(new TreeNode(4));
    std::unique_ptr<TreeNode> node3(new TreeNode(3));
    std::unique_ptr<TreeNode> node1(new TreeNode(1));
    node9.get()->left = node7.get();
    node7.get()->left = node5.get();
    node7.get()->right = node8.get();
    node5.get()->left = node4.get();
    node5.get()->right = node6.get();
    node4.get()->left = node3.get();
    node3.get()->left = node1.get();
    auto res = lowestCommonAncestor.lca(node9.get(), 1,6);
    ASSERT_EQ(5, res->data);

}
