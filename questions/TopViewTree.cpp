#include "../common/TreeNode.h"
#include <unordered_map>
#include <iostream>
#include <queue>
#include <vector>
//
// Created by user3301 on 5/14/2019.
//

class TopViewTree {
public:
    void topView(TreeNode* root) {
      if(root == nullptr) return;
      std::unordered_map<TreeNode*, int> map;
      std::queue<TreeNode*> q;
      std::vector<TreeNode*> list;
      map.emplace(root, 0);
      list.push_back(root);
      int low = 0;
      int high = 0;
      q.emplace(root);

      while(q.size()!=0) {
          int size = q.size();
          for (int i = 0;
               i < size; ++i) {
              auto current = q.front();
              q.pop();
              if(current->left!=nullptr) {
                  q.emplace(current->left);
                  map.emplace(current->left, map.find(current)->second -1);
                  if(low > (map.find(current)->second -1) || high < (map.find(current)->second -1)) {
                      low = map.find(current)->second-1;
                      list.insert(list.begin(), current->left);
                  }
              }
              if(current->right != nullptr) {
                  q.emplace(current->right);
                  map.emplace(current->right, map.find(current)->second + 1);
                  if(high < (map.find(current)->second +1) || low > (map.find(current)->second +1)) {
                      high = map.find(current)->second +1;
                      list.push_back(current->right);
                  }
              }


          }
      }
        for(auto x:list) {
            std::cout<<x->data<<" ";
        }
    }

    };


