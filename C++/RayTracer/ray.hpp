//
//  ray.hpp
//  
//
//  Created by Shiree Hughes on 12/24/20.
//

#ifndef ray_hpp
#define ray_hpp

#include <stdio.h>

class ray {
public:
    point3 orig;
    vec3 dir;
    
    ray() {}
    ray(const point3& origin, const vec3& direction) : orig(origin), dir(direction) {}
    
    point3 origin() const { return orig; }
    vec3 direction() const { return dir; }
    
    point3 at(double t) const {
        return orig+t*dir;
    }
};
#endif /* ray_hpp */
