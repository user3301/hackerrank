//
// Created by user3301 on 2019-05-12.
//
#include <gtest/gtest.h>
#include "../questions/InsertingANodeIntoASortedDoublyLinkedList.cpp"
class InsertingANodeIntoASortedDoublyLinkedListTest:public testing::Test {
protected:
    InsertingANodeIntoASortedDoublyLinkedList insertingANodeIntoASortedDoublyLinkedList;
};

TEST_F(InsertingANodeIntoASortedDoublyLinkedListTest, testmethod1) {
    DoublyLinkedListNode* head = new DoublyLinkedListNode();
    head->data = 1;
    DoublyLinkedListNode* node2 = new DoublyLinkedListNode();
    node2->data = 3;
    head->prev = nullptr;
    head->next = node2;
    node2->prev = head;
    DoublyLinkedListNode* node3 = new DoublyLinkedListNode();
    node3->data = 4;
    node2->next = node3;
    node3->prev = node2;
    DoublyLinkedListNode* node4 = new DoublyLinkedListNode();
    node4->data = 10;
    node4->prev = node3;
    node3->next = node4;
    int data = 5;
    auto actual = insertingANodeIntoASortedDoublyLinkedList.sortedInsert(head, data);
}

TEST_F(InsertingANodeIntoASortedDoublyLinkedListTest, testmethod2) {
    DoublyLinkedListNode* head = new DoublyLinkedListNode();
    head->data = 2;
    DoublyLinkedListNode* node2 = new DoublyLinkedListNode();
    node2->data = 3;
    head->prev = nullptr;
    head->next = node2;
    node2->prev = head;
    DoublyLinkedListNode* node3 = new DoublyLinkedListNode();
    node3->data = 4;
    node2->next = node3;
    node3->prev = node2;
    int data = 1;
    auto actual = insertingANodeIntoASortedDoublyLinkedList.sortedInsert(head, data);
}