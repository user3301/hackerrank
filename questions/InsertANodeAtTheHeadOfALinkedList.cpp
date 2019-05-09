//
// Created by user3301 on 5/9/2019.
//
#include "../common/SinglyLinkedListNode.h"
class InsertANodeAtTheHeadOfALinkedList {
public:
    SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
        auto head = new SinglyLinkedListNode(data);
        if(llist == nullptr) {
            return head;
        }

        head->next = llist;
        return head;
    }
};
