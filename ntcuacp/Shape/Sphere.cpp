#include "Sphere.h"

// constructor
Sphere::Sphere(double r, double x, double y) : ThreeDimensionalShape(x, y)
{
    radius = r;
} // end Sphere constructor

// return radius of Sphere
double Sphere::getRadius() const
{
    return radius;
} // end function getRadius

// calculate and return area of Sphere
double Sphere::getArea() const
{
    return 4 * 3.14159 * radius * radius;
} // end function getArea

// calculate and return volume of Sphere
double Sphere::getVolume() const
{
    return 4.0 / 3.0 * 3.14159 * radius * radius * radius;
} // end function getVolume

// output Sphere object
void Sphere::print() const
{
    cout << "Center = [" << getCenterX() << ", " << getCenterY()
         << "]; Radius = " << getRadius();
} // end function print