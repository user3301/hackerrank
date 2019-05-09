//
// Created by user3301 on 5/8/2019.
//
#include "../common/SinglyLinkedListNode.h"
class InsertANodeAtTheTailOfALinkedList {
public:
    SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
        if(head == nullptr) {
            head = new SinglyLinkedListNode(data);
            return head;
        }
        SinglyLinkedListNode* p = head;
        while(p->next!=
              nullptr) {
            p = p->next;
        }
        SinglyLinkedListNode* node = new SinglyLinkedListNode(data);

        p->next = node;
        return head;
    }
};
