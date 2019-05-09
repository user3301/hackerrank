//
// Created by user3301 on 5/9/2019.
//
#include "../common/SinglyLinkedListNode.h"
class DeleteANode {
public:
    SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
        if(position == 0) return head->next;
        auto current = head;
        while(position!= 1) {
            current = current->next;
            --position;
        }

        current->next = current->next->next;
        return head;
    }
};
