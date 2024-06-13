// Exercise 13.15 Solution: Point.h
#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point 
{
   // overloaded input and output operators
   friend ostream &operator<<(ostream&, const Point&);
   friend istream &operator>>(istream&, Point&);
private:
   int xCoordinate; // x-coordinate of point pair
   int yCoordinate; // y-coordinate of point pair
};

ostream &operator<<(ostream &output, const Point &pt) {
   output << "(" << pt.xCoordinate << ", " << pt.yCoordinate << ")";
   return output;
}

istream &operator>>(istream &input, Point &pt) {
   char ch; // stores characters read
   input >> ch; // read '('
   input >> pt.xCoordinate; // read x-coordinate
   input >> ch; // read ','
   input >> pt.yCoordinate; // read y-coordinate
   input >> ch; // read ')'
   return input;
}

#endif

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
