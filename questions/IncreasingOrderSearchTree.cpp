#include "../common/TreeNode.h"
#include <vector>
//
// Created by user3301 on 8/3/2019.
//
class IncreasingOrderSearchTree{
public:
    TreeNode* increasingBST(TreeNode* root) {
        std::vector<TreeNode*> ans;
        inorder(root, ans);

        TreeNode* newRoot = ans[0];
        auto walker = newRoot;
        for(int i = 1; i < ans.size(); ++i) {
            walker->right = new TreeNode(ans[i]->data);
            walker = walker->right;
        }
        return newRoot;
    }

private:
    void inorder(TreeNode *node, std::vector<TreeNode *>& ans) {
        if(node == nullptr) return;

        inorder(node->left, ans);
        ans.push_back(node);

        inorder(node->right, ans);
    }
};
