//
// Created by user3301 on 5/10/2019.
//
#include "../common/SinglyLinkedListNode.h"
class MergeTwoSortedLinkedLists {
public:
    SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        SinglyLinkedListNode* ret = nullptr;
        if(head1 == nullptr && head2== nullptr) return nullptr;
        if(head1== nullptr) return head2;
        if(head2 == nullptr) return head1;

        if(head1->data > head2->data) {
            ret = head2;
            ret->next = mergeLists(head2->next, head1);
        }
        else {
            ret = head1;
            ret->next = mergeLists(head1->next, head2);
        }
        return ret;
    }
};
