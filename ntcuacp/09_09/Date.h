// Definition of class Date.
#include <iostream>
#include <sstream>

// class Date definition
class Date
{
	public:
		// Date constructor that initializes the three data members
		Date(int m, int d, int y);
      Date(){}; // default constructor
		// set month
		void setMonth(int m);
		// return month
		int getMonth();
		// set day
		void setDay(int d);
		// return day
		int getDay();
		// set year
		void setYear(int y);
		// return year
		int getYear();
		// print Date in the format mm/dd/yyyy
		void displayDate();
      std::string toString();

	private:
		int month {1}; // the month of the date
		int day {1}; // the day of the date
		int year {2024}; // the year of the date
};
Date::Date(int m, int d, int y)
{
	this->month = m;
	this->day=d;
	this->year=y;
}
void Date::setMonth(int m)
{
	this->month = m;
}
int Date::getMonth()
{
	return this->month;
}
void Date::setDay(int d)
{
	this->day=d;
}
int Date::getDay()
{
	return this->day;
}
void Date::setYear(int y)
{
	this->year=y;
}
int Date::getYear()
{
	return this->year;
}
void Date::displayDate()
{
	std::cout<<this->month<<'/'<<this->day<<'/'<<this->year;
}
std::string Date::toString()
{
   std::stringstream output;
   // format the date
   output << year << '/' << month << '/' << day;
   return output.str();
}