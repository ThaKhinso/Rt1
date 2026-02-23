#pragma once

#include "Vector.h"
#include <cmath>

class Ray {
public:
    Ray() {};
    Ray(const Point3& origin, const Vec3& direction) : original(origin), dir(direction){}

    const Point3& origin() const {return original;}
    const Vec3& direction() const {return dir;}

    Point3 at(double_t t) const {
        return original + t*dir;
    }

    ~Ray() {};
private:
    Point3 original;
    Vec3 dir;
};