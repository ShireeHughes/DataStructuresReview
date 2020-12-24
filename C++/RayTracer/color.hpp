//
//  color.h
//  
//
//  Created by Shiree Hughes on 12/24/20.
//

#ifndef color_h
#define color_h

#include "vec3.hpp"
#include <iostream>
void write_color(std::ostream &out, color pixel_color);

void write_color(std::ostream &out, color pixel_color) {
    out << static_cast<int>( 255.999 * pixel_color.x() ) << " "
        << static_cast<int>( 255.999 * pixel_color.y() ) << " "
        << static_cast<int>( 255.999 * pixel_color.z() ) << "\n";
}
#endif /* color_h */
