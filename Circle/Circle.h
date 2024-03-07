#include <iostream>
#include <cmath>

const double PI = 3.1415;

class Circle {
public:
    double getArea () const;
    double getCircumference () const;
    Circle (double);

private:
    double radius;
};
