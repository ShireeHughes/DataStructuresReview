//
//  Manipulators.cpp
//  
//
//  Created by Shiree Hughes on 11/22/20.
//

#include "Manipulators.hpp"
#include <iostream>

using namespace std;

void Manipulators::SetHex() {
    cout << hex;
}

void Manipulators::SetShowBase(bool showBase) {
    if(showBase)
        cout << showbase;
    else
        cout << noshowbase;
}

void Manipulators::SetHex(bool uppercase) {
    cout << hex;
    if(uppercase)
        cout << uppercase;
    else
        cout << nouppercase;
}


void Manipulators::SetDec() {
    cout << dec;
}

void Manipulators::SetOct() {
    cout << oct;
}

void Manipulators::SetScientific() {
    cout << scientific;
}

void Manipulators::SetScientific(bool uppercase) {
    cout << scientific;
    if(uppercase)
        cout << uppercase;
    else
        cout << nouppercase;
}

void Manipulators::SetPrecision(int precision) {
    cout.precision(precision);
}

void Manipulators::SetWidth(int width) {
    cout.width(width);
}

void Manipulators::SetFill(char fill) {
    cout.fill(fill);
}
