//
//  vec3.hpp
//  
//
//  Created by Shiree Hughes on 12/24/20.
//

#ifndef vec3_hpp
#define vec3_hpp

#include <stdio.h>
#include <cmath>
#include <iostream>

class vec3 {
public:
    double e[3];
    
    vec3();
    vec3(double e0, double e1, double e2) : e{e0,e1,e2} {}
    
    double x() const { return e[0]; }
    double y() const { return e[1]; }
    double z() const { return e[2]; }
    
    vec3 operator-() const;
    double operator[](int i) const;
    double& operator[](int i);
    
    vec3& operator+=(const vec3 &v);
    vec3& operator*=(const vec3 &v);
    vec3& operator/=(const vec3 &v);
    
    double length() const;
    double length_squared() const;
    
    //UTILITY FUNCTIONS
    inline double dot(const vec3 &u, const vec3 &v) {
        return u.e[0] * v.e[0]
             + u.e[1] * v.e[1]
             + u.e[2] * v.e[2];
    }

    inline vec3 cross(const vec3 &u, const vec3 &v) {
        return vec3(u.e[1] * v.e[2] - u.e[2] * v.e[1],
                    u.e[2] * v.e[0] - u.e[0] * v.e[2],
                    u.e[0] * v.e[1] - u.e[1] * v.e[0]);
    }

};

inline std::ostream& operator<<(std::ostream &out, const vec3 &v) {
    return out << v.e[0] << ' ' << v.e[1] << ' ' << v.e[2];
}

inline vec3 operator+(const vec3 &u, const vec3 &v) {
    return vec3(u.e[0] + v.e[0], u.e[1] + v.e[1], u.e[2] + v.e[2]);
}

inline vec3 operator-(const vec3 &u, const vec3 &v) {
    return vec3(u.e[0] - v.e[0], u.e[1] - v.e[1], u.e[2] - v.e[2]);
}

inline vec3 operator*(const vec3 &u, const vec3 &v) {
   return vec3(u.e[0] * v.e[0], u.e[1] * v.e[1], u.e[2] * v.e[2]);
}

inline vec3 operator*(double t, const vec3 &v) {
    return vec3(t*v.e[0], t*v.e[1], t*v.e[2]);
}

inline vec3 operator*(const vec3 &v, double t) {
    return t * v;
}

inline vec3 operator/(vec3 v, double t) {
    return (1/t) * v;
}

inline vec3 unit_vector(vec3 v) {
    return v / v.length();
}


using point3 = vec3;
using color = vec3;

#endif /* vec3_hpp */
