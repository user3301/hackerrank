#ifndef OJ_TREENODE_H
#define OJ_TREENODE_H

struct TreeNode
{
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data) : data(data), left(nullptr), right(nullptr) {}
};

#endif //OJ_TREENODE_H
