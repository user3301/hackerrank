//
// Created by user3301 on 2019-05-10.
//
#include <gtest/gtest.h>
#include "../questions/MergeTwoSortedLinkedLists.cpp"
class MergeTwoSortedLinkedListsTest:public testing::Test {
protected:
    MergeTwoSortedLinkedLists mergeTwoSortedLinkedLists;
};

TEST_F(MergeTwoSortedLinkedListsTest, testmethod1) {
    SinglyLinkedListNode* head = new SinglyLinkedListNode(1);
    SinglyLinkedListNode* node2 = new SinglyLinkedListNode(2);
    SinglyLinkedListNode* node3 = new SinglyLinkedListNode(3);
    head->next = node2;
    node2->next = node3;

    SinglyLinkedListNode* head2 = new SinglyLinkedListNode(3);
    SinglyLinkedListNode* node4 = new SinglyLinkedListNode(4);
    head2->next = node4;

    std::vector<int> expected{1,2,3,3,4};
    auto actual = mergeTwoSortedLinkedLists.mergeLists(head,head2);
    int i = 0;
    while(actual!=nullptr) {
        ASSERT_EQ(actual->data, expected[i++]);
        actual = actual->next;
    }

}
