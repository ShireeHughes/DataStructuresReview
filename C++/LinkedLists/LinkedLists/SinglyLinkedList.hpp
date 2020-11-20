//
//  SinglyLinkedList.hpp
//  LinkedLists
//
//  Created by Shiree Hughes on 11/19/20.
//

#ifndef SinglyLinkedList_hpp
#define SinglyLinkedList_hpp

#include <stdio.h>

struct Node {
    int value;
    Node * next;
};

class SinglyLinkedList {
        
private:
    Node * root;
    
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void printList();
    void addNode(Node * n);
    void addVal(int v);
    bool remove(int n);
    bool removeNode(Node * n);
    bool isInList(int val);
    void reverse();
    void clear();
    int getRoot();
};

#endif /* SinglyLinkedList_hpp */
