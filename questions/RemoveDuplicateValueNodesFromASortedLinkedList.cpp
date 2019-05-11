#include "../common/SinglyLinkedListNode.h"

//
// Created by user3301 on 2019-05-11.
//
class RemoveDuplicateValueNodesFromASortedLinkedList {
public:
    SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
       if(head == nullptr) return head;

       while(head->next!= nullptr && head->data == head->next->data) {
           head = head->next;
       }
       head->next = removeDuplicates(head->next);
       return head;
    }
};


// 1 2 2 3 4