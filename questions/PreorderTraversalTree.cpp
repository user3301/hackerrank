#include "../common/TreeNode.h"
#include <iostream>
//
// Created by user3301 on 5/13/2019.
//
class PreorderTraversalTree {
public:
    void preorder(TreeNode* root) {
        if(root == nullptr) return;

        std::cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
};
