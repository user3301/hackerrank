//
// Created by user3301 on 2019-05-11.
//
#include <gtest/gtest.h>
#include "../questions/RemoveDuplicateValueNodesFromASortedLinkedList.cpp"
class RemoveDuplicateValueNodesFromASortedLinkedListTest:public testing::Test {
protected:
    RemoveDuplicateValueNodesFromASortedLinkedList removeDuplicateValueNodesFromASortedLinkedList;
};

TEST_F(RemoveDuplicateValueNodesFromASortedLinkedListTest, testmethod1) {
    auto head = new SinglyLinkedListNode(1);
    auto node2 = new SinglyLinkedListNode(2);
    auto node3 = new SinglyLinkedListNode(2);
    auto node4 = new SinglyLinkedListNode(3);
    auto node5 = new SinglyLinkedListNode(4);
    head->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    std::vector<int> expected{1,2,3,4};
    auto actual = removeDuplicateValueNodesFromASortedLinkedList.removeDuplicates(head);
    int i = 0;
    while(actual!=nullptr) {
        ASSERT_EQ(expected[i++], actual->data);
        actual = actual->next;
    }

}
