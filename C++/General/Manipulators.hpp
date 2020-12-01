//
//  Manipulators.hpp
//  
//
//  Created by Shiree Hughes on 11/22/20.
//

#ifndef Manipulators_hpp
#define Manipulators_hpp

#include <stdio.h>

class Manipulators {
public:
    void SetHex();
    void SetHex(bool uppercase);
    void SetDec();
    void SetOct();
    void SetScientific();
    void SetScientific(bool uppercase);
    void SetFixed();
    void SetFill(char fill);
    void SetPrecision(int precision);
    void SetWidth(int width);
    void SetShowBase(bool showBase);
};

#endif /* Manipulators_hpp */
