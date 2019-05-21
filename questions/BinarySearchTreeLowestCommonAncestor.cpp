#include "../common/TreeNode.h"
#include <queue>
//
// Created by user3301 on 5/21/2019.
//
class BinarySearchTreeLowestCommonAncestor {
public:
//    TreeNode* lca(TreeNode* root, int v1, int v2) {
//        int large = v1 > v2? v1: v2;
//        int small = v1 < v2? v1: v2;
//
//        std::queue<TreeNode*> q;
//        q.emplace(root);
//        if(large == small) {
//            while(q.size()!=0) {
//                int size = q.size();
//                for(int i  = 0; i< size; ++i) {
//                    auto current = q.front();
//                    q.pop();
//                    if(current->left!=nullptr) {
//                        if(current->left->data == large) return current;
//                        q.emplace(current->left);
//                    }
//                    if(current->right != nullptr) {
//                        if(current->right->data == large) return current;
//                        q.emplace(current->right);
//                    }
//                }
//            }
//        }
//        else {
//            while(q.size()!=0) {
//                int size = q.size();
//                for(int i=0; i< size;++i) {
//                    auto current = q.front();
//                    q.pop();
//                    if((current->data > small && current->data < large) || current->data == small || current->data==large) return current;
//                    if(current->left != nullptr) q.emplace(current->left);
//                    if(current->right != nullptr) q.emplace(current->right);
//                }
//            }
//        }
//        return nullptr;
//    }

    TreeNode* lca(TreeNode* root, int v1, int v2) {
        if(root->data < v1 && root->data < v2) return lca(root->right, v1,v2);
        if(root->data > v1 && root->data > v2) return lca(root->left, v1,v2);
        return root;
}
};
