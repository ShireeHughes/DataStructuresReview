//
//  myStack.cpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#include "myQueue.hpp"

myQueue::myQueue() {
    queueList = new SinglyLinkedList();
}

myQueue::~myQueue() {
    delete queueList;
}

void myQueue::push(int v) {
    queueList->addVal(v);
}

int myQueue::front() {
    return queueList->getRoot();
}

int myQueue::pop() {
    int top = queueList->getRoot();
    queueList->remove(top);
    return top;
}
