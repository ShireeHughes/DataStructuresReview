//
//  Main.cpp
//  
//
//  Created by Shiree Hughes on 11/19/20.
//

#include <stdio.h>
#include <iostream>
#include "BinaryTree.hpp"

int main() {
    
    /*
     * Binary Tree #1
     *       6
     *      / \
     *     2   7
     *    / \   \
     *   1   4   8
     *      / \   \
     *     3   5   12
     *            /  \
     *           10  13
     *            \
     *             11
     */

    BinaryTree * bt = new BinaryTree();
    bt->add(6);
    bt->add(2);
    bt->add(7);
    bt->add(8);
    bt->add(12);
    bt->add(10);
    bt->add(11);
    bt->add(13);
    bt->add(1);
    bt->add(4);
    bt->add(3);
    bt->add(5);

    std::cout << "INFIX: ";
    bt->printTree(INFIX);
    std::cout << "POSTFIX: ";
    bt->printTree(POSTFIX);
    std::cout << "PREFIX: ";
    bt->printTree(PREFIX);

    std::cout << "Diameter: " << bt->getDiameter() << std::endl;


    /*
    * Binary Tree #2
    *            12
    *         /     \
    *        7        13
    *     /     \
     *   2       9
    *   / \     / \
    *  1   5   8   11
    *     /        /
    *    3        10
    *     \
    *      4
    */
    BinaryTree * bt2 = new BinaryTree();
    bt2->add(12);
    bt2->add(13);
    bt2->add(7);
    bt2->add(9);
    bt2->add(11);
    bt2->add(10);
    bt2->add(8);
    bt2->add(2);
    bt2->add(1);
    bt2->add(5);
    bt2->add(3);
    bt2->add(4);

    std::cout << "INFIX: ";
    bt2->printTree(INFIX);
    std::cout << "POSTFIX: ";
    bt2->printTree(POSTFIX);
    std::cout << "PREFIX: ";
    bt2->printTree(PREFIX);

    std::cout << "Diameter: " << bt2->getDiameter() << std::endl;

    return 0;
}
