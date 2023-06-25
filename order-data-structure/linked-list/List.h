#pragma once

// List owns ListNode
// function : insertAtFront
// function : operator to find the element by index
//
template <class T>
class List {
    public:
        const T &operator[](unsigned index);
        void insertAtFront(const T &data);
        List(): head_(nullptr) {} 
        ~List() {
            ListNode* curNode = head_;
            while (curNode != nullptr) {
                ListNode* toDelete = curNode;

                curNode = curNode->next;

                delete toDelete;

                toDelete = nullptr;
            }
        }

    
    private:
        class ListNode {
            public:
                const T& data;
                ListNode* next;
                ListNode(const T &data): data(data), next(nullptr) {}
        };

        ListNode* head_;

};

#include "List.cpp" // very important