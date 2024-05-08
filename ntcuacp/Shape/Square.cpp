#include "Square.h"

// constructor
Square::Square(double x, double y, double s) : TwoDimensionalShape(x, y)
{
    sideLength = s;
} // end Square constructor

// return length of sides of Square
double Square::getSideLength() const
{
    return sideLength;
} // end function getSideLength

// calculate and return area of Square
double Square::getArea() const
{
    return sideLength * sideLength;
} // end function getArea

// output Square object
void Square::print() const
{
    cout << "Center = [" << getCenterX() << ", " << getCenterY()
         << "]; Side Length = " << getSideLength();
} // end function print