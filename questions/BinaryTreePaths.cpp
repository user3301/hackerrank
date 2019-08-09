//
// Created by user3301 on 8/9/2019.
//
#include<vector>
#include <stack>
#include <string>
#include "../common/TreeNode.h"

using namespace std;

struct Node{
public:
    TreeNode* node;
    vector<int> paths;

    Node(TreeNode* node,vector<int> paths) {
        this->node = node;
        this->paths = paths;
    }
};


class BinaryTreePaths{
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root == nullptr) return ans;

        stack<Node*> stack;
        vector<int> vec{root->data};
        Node* node = new Node(root, vec);
        stack.push(node);

        while(stack.size()!=0) {
            auto current = stack.top();
            stack.pop();

            if(current->node->left== nullptr && current->node->right==nullptr) {
                auto vec = current->paths;
                string p = "";
                for(int i =0; i < vec.size(); ++i) {
                    p += to_string(vec[i]);
                    p += "->";
                }
                p = p.substr(0, p.size() -2);
                ans.push_back(p);
            }

            if(current->node->left!=nullptr) {
                vector<int> vec2;
                vec2.assign(current->paths.begin(), current->paths.end());
                vec2.push_back(current->node->left->data);
                Node* node = new Node(current->node->left, vec2);
                stack.push(node);
            }
            if(current->node->right!=nullptr) {
                vector<int> vec2;
                vec2.assign(current->paths.begin(), current->paths.end());
                vec2.push_back(current->node->right->data);
                Node* node = new Node(current->node->right, vec2);
                stack.push(node);
            }
        }

        return ans;
    }
};


