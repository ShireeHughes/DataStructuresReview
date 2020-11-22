//
//  myStack.hpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#ifndef myStack_hpp
#define myStack_hpp

#define MAX_SIZE 100

#include <stdio.h>

class myStack {
private:
    int stackList[MAX_SIZE];
    int numElements;
    
public:
    myStack();
    ~myStack();
    int pop();
    int peek();
    void push(int val);
    void print();
};
#endif /* myStack_hpp */
