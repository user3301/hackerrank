#include "../common/DoublyLinkedListNode.h"

//
// Created by user3301 on 5/13/2019.
//
class ReverseADoublyLinkedList {
public:
    DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
        if(head == nullptr) return nullptr;

        auto temp  = head->next;
        head->next = head->prev;
        head->prev = temp;

        if(head->prev == nullptr) return head;

        return reverse(head->prev);
    }
};
