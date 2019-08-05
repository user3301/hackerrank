#include "../common/TreeNode.h"
#include <queue>
//
// Created by user3301 on 8/4/2019.
//

//FIXME wrong answer
class DiameterOfBinaryTree{
public:
    int diameterOfBinaryTree(TreeNode* root) {
        std::queue<TreeNode*> q;
        q.emplace(root);
        int ans = 0;
        while(q.size()!=0) {
            auto current = q.front();
            q.pop();
            int size = getChildren(current);
            ans = ans < size ? size : ans;
            if(current->left !=nullptr) q.emplace(current->left);
            if(current->right!=nullptr) q.emplace(current->right);
        }
        return ans;
    }
private:
    int getChildren(TreeNode* node) {
        if(node== nullptr) return 0;
        if(node->left == nullptr && node->right == nullptr) return 1;

        return getChildren(node->left) + getChildren(node->right);
    }
};
