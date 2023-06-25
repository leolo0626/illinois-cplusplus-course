#include <iostream>
#include "List.h"

// g++ -std=c++11 main.cpp -o linkedlist

int main() {
    
    List<int> linkedlist;

    linkedlist.insertAtFront(0);
    linkedlist.insertAtFront(3);
    linkedlist.insertAtFront(0);
    linkedlist.insertAtFront(7);

    //[7, 0, 3, 0]
    std::cout << "List with index 3: " << linkedlist[5] << std::endl;

    return 0;
}