#include "Circle.h"

// constructor
Circle::Circle( double r, double x, double y )
   : TwoDimensionalShape( x, y )
{
   radius = r;
} // end Circle constructor

// return radius of Circle
double Circle::getRadius() const
{
   return radius;
} // end function getRadius

// calculate area of Circle
double Circle::getArea() const
{
   return 3.14159 * getRadius() * getRadius();
} // end function getArea

// output Circle object
void Circle::print() const
{
   cout << "Center = [" << getCenterX() << ", " << getCenterY() 
      << "]; Radius = " << getRadius();
} // end function print
