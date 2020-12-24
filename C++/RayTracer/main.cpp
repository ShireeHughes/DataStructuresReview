//
//  main.cpp
//  started 12/24 @ 9:45AM
//  break1: 12/24 @ 11:55AM
//  start2: 12/24 @ 6:23PM
//  Created by Shiree Hughes on 12/24/20.
//

#include <stdio.h>
#include <iostream>
#include "vec3.hpp"
#include "color.hpp"
#include "ray.hpp"
color ray_color(const ray& r);

color ray_color(const ray& r) {
    vec3 unit_direction = unit_vector(r.direction());
    auto t = 0.5*(unit_direction.y() + 1.0);
    return (1.0-t)*color(1.0,1.0,1.0) + t*color(0.5, 0.7, 1.0);
}

int main () {
    const auto ASPECT_RATIO = 16.0/9.0;
    const int WIDTH = 400;
    const int HEIGHT = static_cast<int>(WIDTH/ASPECT_RATIO);
    
    //Camera
    auto viewport_height = 2.0;
    auto viewport_width = ASPECT_RATIO * viewport_height;
    auto focal_length = 1.0;
    
    auto origin = point3(0,0,0);
    auto horizontal = vec3(viewport_width, 0, 0);
    auto vertical = vec3(0, viewport_height, 0);
    auto lower_left_corner = origin - horizontal/2 - vertical/2 - vec3(0, 0, focal_length);
    
    //Render
    std::cout << "P3 " << WIDTH << " " << HEIGHT << " 255\n";
    
    for(int j=HEIGHT-1; j>=0; --j) {
        std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
        for (int i=0; i<WIDTH; ++i) {
            auto u = double(i) / (WIDTH -1);
            auto v = double(j) / (HEIGHT-1);
            ray r(origin, lower_left_corner + u*horizontal + v*vertical - origin);
            color pixel_color = ray_color(r);
            write_color(std::cout, pixel_color);
        }
    }
    std::cerr << "\nDone.\n";
}
    
