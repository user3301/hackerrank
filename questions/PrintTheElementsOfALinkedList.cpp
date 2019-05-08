//
// Created by user3301 on 5/8/2019.
//
#include <iostream>
#include "../common/SinglyLinkedListNode.h"
class PrintTheElementsOfALinkedList {
public:
     void printLinkedList(SinglyLinkedListNode* head) {
         while(head!=
               nullptr) {
             std::cout<< head->data<<std::endl;
             head = head->next;
         }
     }
};
