//
//  BinaryTree.cpp
//  
//
//  Created by Shiree Hughes on 11/19/20.
//

#include "BinaryTree.hpp"
#include <iostream>

BinaryTree::BinaryTree() : root(NULL) {}

bool BinaryTree::hasChild(Node * n) {
    if(n->lchild == NULL && n->rchild == NULL) {
        return false;
    }
    return true;
}

bool BinaryTree::hasLChild(Node * n) {
    if(n->lchild == NULL) {
        return false;
    }
    return true;
}

bool BinaryTree::hasRChild(Node * n) {
    if(n->rchild == NULL) {
        return false;
    }
    return true;
}

void BinaryTree::add(Node * n) {
    if(root == NULL) {
        root = n;
        return;
    }
    
    Node * current = root;
    while(hasChild(current)) {
        if(n->value < current->value) {
            if(hasLChild(current))
                current = current->lchild;
            else {
                current->lchild = n;
                return;
            }
        } else {
            if(hasRChild(current))
                current = current->rchild;
            else {
                current->rchild = n;
                return;
            }
        }
    }
    
    if(n->value < current->value) {
       current->lchild = n;
    } else {
        current->rchild = n;
    }
}

void BinaryTree::add(int n) {
    Node * newNode = new Node();
    newNode->value = n;
    add(newNode);
}

void BinaryTree::printTree(int method) {
    switch(method) {
        case INFIX:
            printInfix(root);
            break;
        case PREFIX:
            printPrefix(root);
            break;
        case POSTFIX:
            printPostfix(root);
            break;
        default:
            std::cout << "Improper Print Method Selected...";
    }
    std::cout << std::endl;
}

void BinaryTree::printInfix(Node * n) {
    if(n == NULL) return;
    printInfix(n->lchild);
    std::cout << n->value << " ";
    printInfix(n->rchild);
}

void BinaryTree::printPostfix(Node * n) {
    if(n == NULL) return;
    printPostfix(n->lchild);
    printPostfix(n->rchild);
    std::cout << n->value << " ";
}

void BinaryTree::printPrefix(Node * n) {
    if(n == NULL) return;
    std::cout << n->value << " ";
    printPrefix(n->lchild);
    printPrefix(n->rchild);
}

int BinaryTree::getHeight(Node * n) {
    if(n == NULL) {
        return -1;
    }
    if(!hasChild(n)) {
        return 0;
    }
    return std::max(getHeight(n->lchild), getHeight(n->rchild)) + 1;
}

int max(int x, int y, int z) {
    int max_temp = (x > y) ? x : y;
    return (max_temp > z) ? max_temp : z;
}

/*
 * //https://www.geeksforgeeks.org/diameter-of-a-binary-tree/
 */
int BinaryTree::getDiameter(Node * n) {
    if(n==NULL || !hasChild(n)) {
        return 0;
    }

    int lheight = getHeight(n->lchild) + 1;
    int rheight = getHeight(n->rchild) + 1;

    return max(lheight + rheight, getDiameter(n->rchild), getDiameter(n->lchild));
}

int BinaryTree::getDiameter() {
    return getDiameter(root);
}

