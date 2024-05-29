// Tool.h
#ifndef TOOL_H
#define TOOL_H

#include <string>

class Tool
{
public:
   static const size_t LENGTH = 30; // length of tool name

   // default Tool constructor
   Tool( int = -1, const std::string & = "", int = 0, double = 0.0 );

   // accessor functions for partNumber
   void setPartNumber( int );
   int getPartNumber() const;

   // accessor functions for toolName
   void setToolName( const std::string & );
   std::string getToolName() const;

   // accessor functions for inStock
   void setInStock( int );
   int getInStock() const;

   // accessor functions for unitPrice
   void setUnitPrice( double );
   double getUnitPrice() const;
private:
   int partNumber; // part id number
   char toolName[ LENGTH ]; // tool name
   int inStock; // number in stock
   double unitPrice; // price per unit
}; // end class Tool

#endif
