//
// Created by user3301 on 5/8/2019.
//
#include <gtest/gtest.h>
#include "../questions/InsertANodeAtTheTailOfALinkedList.cpp"
class InsertANodeAtTheTailOfALinkedListTest:public testing::Test {
protected:
    InsertANodeAtTheTailOfALinkedList insertANodeAtTheTailOfALinkedList;
};

TEST_F(InsertANodeAtTheTailOfALinkedListTest, testmethod1) {
    auto head = new SinglyLinkedListNode(141);
    auto node2 = new SinglyLinkedListNode(302);
    head->next = node2;
    insertANodeAtTheTailOfALinkedList.insertNodeAtTail(head, 164);
    while(head!=nullptr) {
        std::cout << head->data <<std::endl;
        head = head->next;
    }
}