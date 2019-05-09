//
// Created by user3301 on 5/9/2019.
//
#include <gtest/gtest.h>
#include "../questions/InsertANodeAtASpecificPosition.cpp"
class InsertANodeAtASpecificPositionTest:public testing::Test {
protected:
    InsertANodeAtASpecificPosition insertANodeAtASpecificPosition;
};

TEST_F(InsertANodeAtASpecificPositionTest, testmethod1) {
    int data = 1;
    int position = 2;
    auto head = new SinglyLinkedListNode(16);
    auto node = new SinglyLinkedListNode(13);
    head->next = node;
    auto newhead = insertANodeAtASpecificPosition.insertNodeAtPosition(head, data, position);
    std::vector<int> expected{16,13,1};
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], newhead->data);
        newhead = newhead->next;
    }
}
