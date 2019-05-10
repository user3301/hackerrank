//
// Created by user3301 on 5/10/2019.
//
#include "../common/SinglyLinkedListNode.h"
class CompareTwoLinkedLists {
public:
    bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
        while(head1->next !=
                nullptr && head2->next!=
                           nullptr) {
            if(head1->data != head2->data) return false;
            head1 = head1->next;
            head2 = head2->next;
        }
        return head1->next == nullptr && head2->next == nullptr;
    }
};
