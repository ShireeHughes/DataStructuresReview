//
//  Main.cpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#include <stdio.h>
#include <iostream>
#include "myStack.hpp"

int main() {
    myStack * stack = new myStack();
    stack->push(1);
    stack->push(2);
    std::cout << stack->peek() << std::endl;
    std::cout << stack->pop() << std::endl;
    return 0;
}
