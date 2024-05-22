#include <iostream>
#include <string>
#include "Date.h"
#include <sstream>
using namespace std;


const int Date::days[] =  { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date(int MM, int DD, int YY)
{
   setDate(MM, DD, YY);
} // end Date constructor

void Date::setDate(int MM, int DD, int YY)
{
   setYear( YY ); 
   setMonth( MM ); 
   setDay( DD ); 
}

void Date::setDay(int DD)
{
   // test for a leap year
   if ( month == 2 && leapYear( year ) )
      day = ( DD >= 1 && DD <= 29 ) ? DD : 1;
   else
      day = ( DD >= 1 && DD <= days[ month ] ) ? DD : 1;    
}

void Date::setMonth(int MM)
{
    month = ( MM >= 1 && MM <= 12 ) ? MM : 1;    
}

void Date::setYear(int YY)
{
    year = ( YY >= 1900 && YY <= 2100 ) ? YY : 1900;    
}

int Date::getDay()
{    
//returns the day
      return day;
}

int Date::getMonth()
{    
//returns the month
      return month;
}

int Date::getYear()
{    
//returns the Year
      return year;
} 

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int testYear )
{
   if ( testYear % 400 == 0 || 
      ( testYear % 100 != 0 && testYear % 4 == 0 ) )
      return true; // a leap year
   else
      return false; // not a leap year
} // end function leapYear

string Date::toString()
{    
//outputs month/day/year hour:minute:second
      std::stringstream ss;
      ss << getMonth() << "/" << getDay() << "/" << getYear();
      return ss.str(); 
}
