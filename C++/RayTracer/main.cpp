//
//  main.cpp
//  started 12/24 @ 9:45
//
//  Created by Shiree Hughes on 12/24/20.
//

#include <stdio.h>
#include <iostream>

int main () {
    const int WIDTH = 256;
    const int HEIGHT = 256;
    
    std::cout << "P3 " << WIDTH << " " << HEIGHT << " 255\n";
    
    for(int j=HEIGHT-1; j>=0; --j) {
        std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
        for (int i=0; i<WIDTH; ++i) {
            auto r = double(i) / (WIDTH-1);
            auto g = double(j) / (HEIGHT-1);
            auto b = 0.25;
    
            int ir = static_cast<int>(255.999*r);
            int ig = static_cast<int>(255.999*g);
            int ib = static_cast<int>(255.999*b);
    
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }
    std::cerr << "\nDone.\n";
}
    
