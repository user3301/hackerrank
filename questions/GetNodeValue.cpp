//
// Created by user3301 on 2019-05-11.
//
#include "../common/SinglyLinkedListNode.h"
#include <vector>
class GetNodeValue {
public:
    int getNode(SinglyLinkedListNode* head, int positionFromTail) {
        std::vector<int> ans;
        while(head!= nullptr) {
            ans.push_back(head->data);
            head = head->next;
        }
        return ans[ans.size()-1 - positionFromTail];
    }
};
