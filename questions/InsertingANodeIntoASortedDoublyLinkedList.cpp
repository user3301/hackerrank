#include "../common/DoublyLinkedListNode.h"
#include <stdlib.h>
//
// Created by user3301 on 2019-05-11.
//
class InsertingANodeIntoASortedDoublyLinkedList {
public:
    DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
        DoublyLinkedListNode* node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
        node->data = data;
        node->prev = nullptr;
        node->next = nullptr;

        // empty linked list
        if(head == nullptr) return node;

        // node < the first element
        if(node->data <= head->data) {
            node->next = head;
            head->prev = node;
            return node;
        }

        auto cur = head;
        auto curPrev = cur;
        while(cur!= nullptr && cur->data < node->data) {
            curPrev = cur;
            cur =  cur->next;
        }

        curPrev->next = node;
        node->prev = curPrev;
        node->next = cur;
        if(cur!= nullptr) cur->prev = node;
        return head;
    }
};
