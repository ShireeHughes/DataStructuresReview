//
//  SinglyLinkedList.cpp
//  LinkedLists
//
//  Created by Shiree Hughes on 11/19/20.
//

#include "SinglyLinkedList.hpp"
#include <iostream>

SinglyLinkedList::~SinglyLinkedList() {
    delete root;
}
SinglyLinkedList::SinglyLinkedList() {
    root = NULL;
}

void SinglyLinkedList::addNode(Node * n) {
    if(root == NULL) {
        root = n;
        return;
    }
    
    Node * current = root;
    while(current->next != NULL) {
        current = current->next;
    }
    current->next = n;
}

void SinglyLinkedList::addVal(int v) {
    Node * newNode = new Node();
    newNode->value = v;
    newNode->next = NULL;
    
    addNode(newNode);
}

bool SinglyLinkedList::isInList(int v) {
    Node * current = root;
    while(current != NULL) {
        if(current->value == v){
            return true;
        }
        current = current->next;
    }
    return false;
}

bool SinglyLinkedList::remove(int n) {
    if(root->value == n) {
        root = root->next;
        return true;
    }

    Node * current = root;
    while(current->next != NULL) {
        if(current->next->value == n){
            current->next = current->next->next;
            return true;
        }
        current = current->next;
    }
    return false;
}

bool SinglyLinkedList::removeNode(Node * n) {
    if(root == n) {
        root = n->next;
        return true;
    }

    Node * current = root;
    while(current->next != NULL) {
        if(current->next == n){
            current->next = current->next->next;
            return true;
        }
        current = current->next;
    }
    return false;
}

void SinglyLinkedList::reverse() {
    Node * prev = root;
    Node * current = root->next;

    while(current->next != NULL) {
        Node * temp = current->next;
        current->next = prev;
        prev = current;
        current = temp;
    }
    
    current->next = prev;
    root->next = NULL;
    root = current;
}

int SinglyLinkedList::getRoot() {
    return root->value;
}

void SinglyLinkedList::clear() {
    root = NULL;
}

void SinglyLinkedList::printList() {
    Node * current = root;
    while(current != NULL) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << "\n";
}

