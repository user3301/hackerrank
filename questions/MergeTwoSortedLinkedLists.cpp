//
// Created by user3301 on 5/10/2019.
//
#include "../common/SinglyLinkedListNode.h"
class MergeTwoSortedLinkedLists {
public:
    SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        if(head1 == nullptr || head2 ==nullptr) return head1 ==nullptr? head2: head1;
        SinglyLinkedListNode* current = nullptr;
        SinglyLinkedListNode** headptr = &current;
        while (head1!= nullptr || head2!=nullptr) {
            if(head1== nullptr)
            {
//                current
            }

        }



    }
};
