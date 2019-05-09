//
// Created by user3301 on 5/9/2019.
//
#include "../common/SinglyLinkedListNode.h"
class ReverseALinkedList {
public:
    //iterative way
    SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
        SinglyLinkedListNode* pre = nullptr;
        SinglyLinkedListNode* cur = head;
        SinglyLinkedListNode* next;

        while(cur!= nullptr) {
          next = cur->next;
          cur->next = pre;
          pre = cur;
          cur = next;
        }
        return pre;
    }
};
