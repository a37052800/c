// Exercise 13.16 Solution: Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream> 
using namespace std;

class Complex {
   // overloaded input and output operators
   friend ostream &operator<<(ostream&, const Complex&);
   friend istream &operator>>(istream&, Complex&);
public:
   Complex(); // constructor
private:
   int real; // hold real part of complex number
   int imaginary; // hold imaginary part of complex number
};

ostream &operator<<(ostream &output, const Complex &complex) {
   output << complex.real << "+" << complex.imaginary << "i";
   return output;
}

istream &operator>>(istream &input, Complex &complex) {
   char ch; // stores characters read
   input >> complex.real; // read real part
   input >> ch; // read '+'
   input >> complex.imaginary; // read imaginary part
   input >> ch; // read 'i'
   return input;
}

Complex::Complex() {
   real = 0;
   imaginary = 0;
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
