//
//  BinaryTree.hpp
//  
//
//  Created by Shiree Hughes on 11/19/20.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>
enum Methods { INFIX, POSTFIX, PREFIX };

struct Node {
    int value;
    Node * rchild;
    Node * lchild;
};

class BinaryTree {
private:
    Node * root;
    bool hasChild(Node * n);
    bool hasLChild(Node * n);
    bool hasRChild(Node * n);
    void printInfix(Node * n);
    void printPostfix(Node * n);
    void printPrefix(Node * n);
    int getHeight(Node * n);
    int getDiameter(Node * n);
    
public:
    BinaryTree();
    ~BinaryTree();
    void add(Node * n);
    void add(int n);
    int getDiameter();
    void printTree(int method);
};
#endif /* BinaryTree_hpp */
