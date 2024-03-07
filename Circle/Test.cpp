#include <iostream>
#include <cmath>
#include "Circle.h"
using namespace std;

int main()
{
    double rad;
    cout << "Enter radius of circle : ";
    cin >> rad;
    Circle myCircle(rad);

    cout << "Area of myCircle = " << myCircle.getArea()
    << ", Circumference of myCircle = " << myCircle.getCircumference() << endl;

   return 0;
}
