// Demonstrates class Date's capabilities.
#include <iostream>
#include "Date.h" // include definition of class Date from Date.h
using namespace std;

// function main begins program execution
int main()
{
   Date date{3, 13, 2024}; // create a Date object for March 13, 2024
   
   // display the values of the three Date data members
   cout << "Month: " << date.getMonth();
   cout << "\nDay: " << date.getDay();
   cout << "\nYear: " << date.getYear();

   cout << "\n\nOriginal date: ";
   date.displayDate(); // output the Date as 3/13/2024

   // modify the Date 
   date.setMonth(13); // invalid month
   date.setDay(31);
   date.setYear(2024);
   
   cout << "\nNew date: ";
   date.displayDate(); // output the modified date (1/1/2024)
}
