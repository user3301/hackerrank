//
// Created by user3301 on 5/8/2019.
//
#include <gtest/gtest.h>
#include "../questions/PrintTheElementsOfALinkedList.cpp"
class PrintTheElementsOfALinkedListTest:public testing::Test {
protected:
    PrintTheElementsOfALinkedList printTheElementsOfALinkedList;
};

TEST_F(PrintTheElementsOfALinkedListTest, testmethod1) {
    SinglyLinkedListNode* head = new SinglyLinkedListNode(16);
    SinglyLinkedListNode* next = new SinglyLinkedListNode(13);
    head->next = next;

    printTheElementsOfALinkedList.printLinkedList(head);
    delete head;
    delete next;
}
