//
//  QueueTest.cpp
//  
//
//  Created by Shiree Hughes on 11/20/20.
//

#include <stdio.h>
#include <iostream>
#include "myQueue.hpp"

int main() {
    std::cout << "This is the Queue Test File" << std::endl;
    
    myQueue * queue = new myQueue();
    queue->push(1);
    queue->push(2);
    queue->push(3);
    std::cout << queue->front() << std::endl;
    std::cout << queue->pop() << std::endl;

    return 0;
}
