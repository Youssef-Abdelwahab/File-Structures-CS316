#include <iostream>
#include <cmath>
#include "Circle.h"

    double Circle::getArea () const
    {
        double area = PI * pow(radius, 2);
        return area;
    }

    double Circle::getCircumference () const
    {
        double circumference = 2 * PI * radius;
        return circumference;
    }

    Circle::Circle (double r) {
        radius = r;
    }
