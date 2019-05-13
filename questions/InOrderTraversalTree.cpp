//
// Created by user3301 on 5/13/2019.
//
#include <iostream>
#include "../common/TreeNode.h"

class InOrderTraversalTree {
public:
    void inOrder(TreeNode* root) {
        if(root == nullptr) return;
        inOrder(root->left);
        std::cout<<root->data<<" ";
        inOrder(root->right);
    }
};
