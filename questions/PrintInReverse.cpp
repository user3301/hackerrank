//
// Created by user3301 on 5/9/2019.
//
#include "../common/SinglyLinkedListNode.h"
#include <vector>
#include <iostream>
class PrintInReverse {
public:
    void reversePrint(SinglyLinkedListNode* head) {
        std::vector<int> ans;
        while(head!= nullptr) {
            ans.push_back(head->data);
            head = head->next;
        }
        for (int i = ans.size() -1;
             i >=0; --i) {
            std::cout<<ans[i]<<std::endl;
        }
    }
};
