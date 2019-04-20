#ifndef OJ_TREENODE_H
#define OJ_TREENODE_H

struct TreeNode
{
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

#endif //OJ_TREENODE_H
