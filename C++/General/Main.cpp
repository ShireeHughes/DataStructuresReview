//
//  Main.cpp
//  
//
//  Created by Shiree Hughes on 11/22/20.
//
#include <iostream>
#include <stdio.h>
#include "Manipulators.hpp"

// https://www.hackerrank.com/challenges/prettyprint/problem
int main() {
    Manipulators prettyprint;
    prettyprint.SetShowBase(false);
    prettyprint.SetHex(true);
    std::cout << 100 << std::endl;
    
    prettyprint.SetDec();
    prettyprint.SetPrecision(4);
    std::cout << 1295.4903284 << std::endl;
    
    prettyprint.SetScientific(false);
    std::cout << 128943.4892390 << std::endl;
    prettyprint.SetPrecision(2);
    std::cout << 128943.4892390 << std::endl;

    return 0;
}
