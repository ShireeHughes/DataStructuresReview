//
//  Main.cpp
//  LinkedLists
//
//  Created by Shiree Hughes on 11/19/20.
//

#include <stdio.h>
#include <iostream>
#include "SinglyLinkedList.hpp"

int main() {
    SinglyLinkedList * ll = new SinglyLinkedList();
    ll->addVal(1);
    ll->addVal(2);
    ll->addVal(3);
    ll->addVal(4);
    
    ll->printList();
    std::cout << "Is 1 in List? " << ll->isInList(1) << std::endl;
    std::cout << "Is 4 in List? " << ll->isInList(4) << std::endl;
    std::cout << "Is 5 in List? " << ll->isInList(5) << std::endl;

    if(ll->remove(1)) {
        std::cout << "Removing 1: ";
        ll->printList();
    }
    
    if(ll->remove(5)) {
        std::cout << "Removing 5: ";
        ll->printList();
    }
    
    ll->reverse();
    std::cout << "Reverse: ";
    ll->printList();
    
    ll->clear();
    std::cout << "Cleared: ";
    ll->printList();
    return 0;
}
