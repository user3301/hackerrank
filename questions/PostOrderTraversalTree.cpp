#include "../common/TreeNode.h"
#include <iostream>
//
// Created by user3301 on 5/13/2019.
//
class PostOrderTraversalTree {
public:
    void postOrder(TreeNode* root) {
        if(root == nullptr) return;
        postOrder(root->left);
        postOrder(root->right);
        std::cout<<root->data<<" ";
    }
};
