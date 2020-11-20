//
//  myStack.hpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#ifndef myStack_hpp
#define myStack_hpp

#include <stdio.h>
#include "../LinkedLists/LinkedLists/SinglyLinkedList.hpp"

class myStack {
private:
    SinglyLinkedList * stackList;
public:
    myStack();
    ~myStack();
    int pop();
    int peek();
    void push(int val);
    void print();
};
#endif /* myStack_hpp */
