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
        if(head == nullptr) return node;

        auto current = head;

        while(current->data < data && current->next!= nullptr) {
            current = current->next == nullptr ? current : current->next;
        }
        if(current->next == nullptr) {
            if(current->data < data) {
                current->next = node;
            }
            else {
                if(current == head) {
                    current->prev = node;
                    node->next = current;
                    head = node;
                }
                else {
                    current->prev->next = node;
                    node->prev = current->prev;
                    current->prev = node;
                    node->next = current;
                }

            }
        }
        else {
            if(current == head) {
                current->prev = node;
                node->next = current;
                head = node;
            }
            current->prev->next = node;
            node->prev = current->prev;
            current->prev = node;
            node->next = current;
        }
        return head;

    }
};
