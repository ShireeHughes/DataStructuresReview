//
//  myStack.hpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#ifndef myStack_hpp
#define myStack_hpp

#include <stdio.h>

//TODO replace with DoublyLinkedList for back()
#include "../LinkedLists/LinkedLists/SinglyLinkedList.hpp"

class myQueue {
private:
    SinglyLinkedList * queueList;
public:
    myQueue();
    ~myQueue();
    int pop();
    int front();
    // TODO
    // int back();
    void push(int val);
    void print();
};
#endif /* myStack_hpp */
