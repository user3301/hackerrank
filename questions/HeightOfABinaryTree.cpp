#include "../common/TreeNode.h"
#include <queue>
//
// Created by user3301 on 5/13/2019.
//
class HeightOfABinaryTree {
public:
    int height(TreeNode* root) {
        std::queue<TreeNode*> q;
        int height = -1;
        q.emplace(root);

        while(q.size()!=0) {
            int size = q.size();
            for(int i = 0; i< size; ++i) {
                auto current = q.front();
                q.pop();
                if(current->left != nullptr) q.emplace(current->left);
                if(current->right != nullptr) q.emplace(current->right);
            }
            ++height;
        }
        return height;
    }

    ///  recursion method
    /// \param root
    /// \return
    int heightRecursive(TreeNode* root) {
        if(root == nullptr) return 0;

        int left = heightRecursive(root->left);
        int right = heightRecursive(root->right);

        return left > right? left + 1: right +1;
    }
};
