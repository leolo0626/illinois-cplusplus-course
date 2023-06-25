#include "List.h"

template <class T>
const T & List<T>::operator[](unsigned index) {
    ListNode *curNode = head_;

    while (curNode->next != nullptr && index > 0) {
        curNode = curNode->next;
        index--;
    }
    //todo: when index out of list 

    return curNode->data;

}

template <class T>
void List<T>::insertAtFront(const T &data) {
    ListNode* node = new ListNode(data);
    node->next = head_;
    head_ = node;
}
