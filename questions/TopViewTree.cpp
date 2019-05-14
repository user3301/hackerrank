#include "../common/TreeNode.h"
#include <unordered_set>
#include <iostream>
#include <queue>
#include <vector>
//
// Created by user3301 on 5/14/2019.
//
class TreeNodeWithPosition {
public:
    int position;
    TreeNode* node;

    TreeNodeWithPosition(TreeNode* node, int position) {
        this->position = position;
        this->node = node;
    }
};

class TopViewTree {
public:
    void topView(TreeNode* root) {
       std::queue<TreeNodeWithPosition*> q;
       std::vector<TreeNodeWithPosition*> nodes{};\
       std::unordered_set<int> pos;

       auto current = new TreeNodeWithPosition(root, 0);
       q.emplace(current);

       while(q.size()!=0) {
           int size = q.size();
           for(int i = 0; i<size; ++i) {
               auto current = q.front();
               q.pop();

               nodes.push_back(current);
               if(current->node->left !=nullptr) {
                   auto left = new TreeNodeWithPosition(current->node->left, current->position -1);
                   q.emplace(left);
                   nodes.push_back(left);

               }
               if(current->node->right != nullptr) {
                    auto right = new TreeNodeWithPosition(current->node->right, current->position +1);
                    q.emplace(right);
                    nodes.push_back(right);
               }
           }
       }

       for(auto x: nodes) {
           if(pos.find(x->position)==pos.end()) {
               std::cout<< x->node->data<<" ";
               pos.emplace(x->position);
           }
       }
    }

};


