//
//  myStack.cpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#include "myStack.hpp"

myStack::myStack() {
    stackList = new SinglyLinkedList();
}

myStack::~myStack() {
    delete stackList;
}

void myStack::push(int v) {
    stackList->addVal(v);
}

int myStack::peek() {
    return stackList->getRoot();
}
