//
// Created by user3301 on 2019-05-11.
//
#include <gtest/gtest.h>
#include "../questions/FindMergePointOfTwoLists.cpp"
class FindMergePointOfTwoListsTest:public testing::Test {
protected:
    FindMergePointOfTwolists findMergePointOfTwolists;
};

TEST_F(FindMergePointOfTwoListsTest, testmethod1) {
    auto head1 = new SinglyLinkedListNode(1);
    auto node2 = new SinglyLinkedListNode(2);
    auto node3 = new SinglyLinkedListNode(3);
    head1->next = node2;
    node2->next = node3;

    auto head2 = new SinglyLinkedListNode(1);
    head2->next = node3;

    int expected = 3;
    int actual = findMergePointOfTwolists.findMergeNode(head1, head2);
    ASSERT_EQ(expected, actual);
}
