#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <sstream>
using namespace std;
class Date
{
public:
   Date( int MM = 1, int DD = 1, int YY = 1900); // default constructor
   void setDate( int MM, int DD, int YY); // set month, day, year
   void setDay(int DD);
   void setMonth(int MM); 
   void setYear(int YY);  
   int getDay();
   int getMonth(); 
   int getYear();  
   // if the year is a leap year, return true; otherwise, return false
   static bool leapYear( int ); // is date in a leap year?
   string toString();  //outputs month/day/year hour:minute:second
private:
   int month;
   int day;
   int year;
   static const int days[]; // array of days per month
}; // end class Date
#endif
