//
//  main.cpp
//  started 12/24 @ 9:45
//
//  Created by Shiree Hughes on 12/24/20.
//

#include <stdio.h>
#include <iostream>
#include "vec3.hpp"
#include "color.hpp"

int main () {
    const int WIDTH = 256;
    const int HEIGHT = 256;
    
    std::cout << "P3 " << WIDTH << " " << HEIGHT << " 255\n";
    
    for(int j=HEIGHT-1; j>=0; --j) {
        std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
        for (int i=0; i<WIDTH; ++i) {
            color pixel_color(double(i)/(WIDTH-1), double(j)/(HEIGHT-1), 0.25);
            write_color(std::cout, pixel_color);
        }
    }
    std::cerr << "\nDone.\n";
}
    
