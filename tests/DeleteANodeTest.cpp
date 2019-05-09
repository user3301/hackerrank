//
// Created by user3301 on 5/9/2019.
//
#include <gtest/gtest.h>
#include "../questions/DeleteANode.cpp"
class DeleteANodeTest:public testing::Test {
protected:
    DeleteANode deleteANode;
};

TEST_F(DeleteANodeTest, testmethod1) {
    auto head = new SinglyLinkedListNode(1);
    auto node2 = new SinglyLinkedListNode(2);
    auto node3 = new SinglyLinkedListNode(3);
    head->next = node2;
    node2->next = node3;

    int position = 0;  //delete head
    std::vector<int> expected{2,3};
    auto actual = deleteANode.deleteNode(head, position);
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual->data);
        actual = actual->next;
    }
}

TEST_F(DeleteANodeTest, testmethod2) {
    auto head = new SinglyLinkedListNode(1);
    auto node2 = new SinglyLinkedListNode(2);
    auto node3 = new SinglyLinkedListNode(3);
    head->next = node2;
    node2->next = node3;

    int position = 1;  //delete head
    std::vector<int> expected{1,3};
    auto actual = deleteANode.deleteNode(head, position);
    for (int i = 0;
         i < expected.size(); ++i) {
        ASSERT_EQ(expected[i], actual->data);
        actual = actual->next;
    }
}
