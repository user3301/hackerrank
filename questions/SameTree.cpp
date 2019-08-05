#include "../common/TreeNode.h"

//
// Created by user3301 on 8/3/2019.
//
class SameTree{
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==nullptr && q == nullptr) return true;
        if(p== nullptr || q==nullptr) return false;
        bool flag = p->data == q->data;
        bool left = isSameTree(p->left, q->left);
        bool right = isSameTree(p->right, q->right);
        return flag && left && right;
    }
};
