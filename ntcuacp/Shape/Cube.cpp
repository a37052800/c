#include "Cube.h"

// constructor
Cube::Cube(double x, double y, double s) : ThreeDimensionalShape(x, y)
{
    sideLength = s;
} // end Cube constructor

// return length of sides of Cube
double Cube::getSideLength() const
{
    return sideLength;
} // end function getSideLength

// calculate and return area of Cube
double Cube::getArea() const
{
    return 6 * sideLength * sideLength;
} // end function getArea

// calculate and return volume of Cube
double Cube::getVolume() const
{
    return sideLength * sideLength * sideLength;
} // end function getVolume

// output Cube object
void Cube::print() const
{
    cout << "Center = [" << getCenterX() << ", " << getCenterY()
         << "]; Side Length = " << getSideLength();
} // end function print