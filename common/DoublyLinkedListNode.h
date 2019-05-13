//
// Created by user3301 on 2019-05-11.
//

#ifndef OJ_DOUBLYLINKEDLISTNODE_H
#define OJ_DOUBLYLINKEDLISTNODE_H
struct DoublyLinkedListNode {
public:
    int data;
    DoublyLinkedListNode* prev;
    DoublyLinkedListNode* next;

    DoublyLinkedListNode() {}
    DoublyLinkedListNode(int data, DoublyLinkedListNode* pre, DoublyLinkedListNode* next) {
        this->data = data;
        this->prev = pre;
        this->next = next;
    }
};
#endif //OJ_DOUBLYLINKEDLISTNODE_H
