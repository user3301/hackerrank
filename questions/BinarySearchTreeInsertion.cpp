#include "../common/TreeNode.h"
#include "PreorderTraversalTree.cpp"
//
// Created by user3301 on 5/15/2019.
//
class BinarySearchTreeInsertion {
//private:
//    void rec(TreeNode *pNode, int data) {
//        if(pNode->data > data) {
//            if(pNode->left == nullptr) {
//                auto node = new TreeNode(data);
//                pNode->left = node;
//                return;
//            }
//            rec(pNode->left, data);
//        }
//        else {
//            if(pNode->right == nullptr) {
//                auto node = new TreeNode(data);
//                pNode->right = node;
//                return;
//            }
//            rec(pNode->right, data);
//        }
//    }
public:

//    TreeNode* insert(TreeNode* root, int data) {
//       auto node = new TreeNode(data);
//       auto current = root;
//        rec(current, data);
//
//       return root;
//    }
    TreeNode* insert(TreeNode* root, int data) {
        auto node = new TreeNode(data);
        if(root == nullptr) return node;

        if(root->data > data) root->left = insert(root->left, data);
        else root->right = insert(root->right, data);
        return root;
    }
};
