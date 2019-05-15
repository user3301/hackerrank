#include "../common/TreeNode.h"
#include <queue>
#include <iostream>
//
// Created by user3301 on 5/15/2019.
//
class LevelOrderTraversalTree {
public:
    void levelOrder(TreeNode* root) {
        std::queue<TreeNode*> q;
        q.emplace(root);

        while(q.size()!=0) {
            int size = q.size();
            for (int i = 0;
                 i < size; ++i) {
                auto current = q.front();
                q.pop();
                std::cout<< current->data<<" ";
                if(current->left!=nullptr) q.emplace(current->left);
                if(current->right!=nullptr) q.emplace(current->right);
            }
        }
    }
};
