//
// Created by user3301 on 5/9/2019.
//
#include "../common/SinglyLinkedListNode.h"
class InsertANodeAtASpecificPosition {
public:
    SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
        auto node = new SinglyLinkedListNode(data);
        if(position == 0) {
            node->next = head;
            return node;
        }

        auto current = head;
        while(position!=1) {
            current = current->next;
            --position;
        }
        auto temp = current->next;
        current->next = node;
        node->next = temp;
        return head;
    }
};

