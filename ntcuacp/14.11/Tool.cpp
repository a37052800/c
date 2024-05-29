// Tool.cpp
// Member function definitions for class Tool.
#include <string>
#include "Tool.h"
using namespace std;

// default Tool constructor
Tool::Tool( int number, const string & name, int stock, double price )
{
   setPartNumber( number );
   setToolName( name );
   setInStock( stock );
   setUnitPrice( price );
} // end Tool constructor

// set partNumber
void Tool::setPartNumber( int number )
{
   partNumber = number;
} // end function setPartNumber

// get partNumber
int Tool::getPartNumber() const
{
   return partNumber;
} // end function getPartNumber

// set toolName
void Tool::setToolName( const string & name )
{
   // copy at most 29 characters from string to toolName
   int length = name.size();
   length = ( length < LENGTH ? length : LENGTH - 1 );
   name.copy( toolName, length );
   toolName[ length ] = '\0'; // append null character
} // end function setToolName

// get toolName
string Tool::getToolName() const
{
   return toolName;
} // end function getToolName

// set inStock
void Tool::setInStock( int stock )
{
   inStock = stock;
} // end function setInStock

// get inStock
int Tool::getInStock() const
{
   return inStock;
} // end function getInStock

// set unitPrice
void Tool::setUnitPrice( double price )
{
   unitPrice = price;
} // end function setUnitPrice

// get unitPrice
double Tool::getUnitPrice() const
{
   return unitPrice;
} // end function getUnitPrice
