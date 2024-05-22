#include "Shape.h"

// constructor
Shape::Shape( double x, double y )
{
   xCenter = x;
   yCenter = y;
} // end Shape constructor

// return x part of coordinate pair
double Shape::getCenterX() const
{
   return xCenter;
} // end function getCenterX

// return y part of coordinate pair
double Shape::getCenterY() const
{
   return yCenter;
} // end function getCenterY

// overloaded output operator
ostream & operator<<( ostream &output, Shape &s )
{
   s.print();
   return output; // enables cascading
} // end operator<<
