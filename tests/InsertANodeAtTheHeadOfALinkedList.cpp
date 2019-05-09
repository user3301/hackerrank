//
// Created by user3301 on 5/9/2019.
//
#include <gtest/gtest.h>
#include "../questions/InsertANodeAtTheHeadOfALinkedList.cpp"
class InsertANodeTheHeadOfALinkedListTest: public testing::Test {
protected:
    InsertANodeAtTheHeadOfALinkedList insertANodeAtTheHeadOfALinkedList;
};

TEST_F(InsertANodeTheHeadOfALinkedListTest, testmethod1) {
    int data = 1;
    auto head = new SinglyLinkedListNode(2);
    auto node = new SinglyLinkedListNode(3);
    head->next = node;
    std::vector<int> expected{1,2,3};
    auto newhead = insertANodeAtTheHeadOfALinkedList.insertNodeAtHead(head, data);
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], newhead->data);
        newhead= newhead->next;
    }
}
