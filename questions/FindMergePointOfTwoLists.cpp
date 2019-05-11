#include "../common/SinglyLinkedListNode.h"

//
// Created by user3301 on 2019-05-11.
//
class FindMergePointOfTwolists {
public:
    int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        SinglyLinkedListNode* c1 = head1;
        SinglyLinkedListNode* c2 = head2;

        while(head1!= head2) {
            head1 = head1->next == nullptr? c2 : head1->next;
            head2 = head2->next == nullptr ? c1 : head2->next;
        }
        return head1->data;
    }
};
