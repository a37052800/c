// HourlyEmployee class member-function definitions.
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "HourlyEmployee.h" // HourlyEmployee class definition
using namespace std;

// constructor
HourlyEmployee::HourlyEmployee(const string &first,
   const string &last, const string &ssn, double wage, double hours)
   : Employee(first, last, ssn) {
   setHourlyWage(wage);
   setHoursWorked(hours);
}

// set wage
void HourlyEmployee::setHourlyWage(double wage) {
   if (wage < 0.0) {
      throw invalid_argument("Hourly wage must be >= 0.0");
   }

   hourlyWage = wage;
}

// return wage
double HourlyEmployee::getHourlyWage() const { return hourlyWage; }

// set hours worked
void HourlyEmployee::setHoursWorked(double hours) {
   if ((hours < 0.0) || (hours > 168.0)) { // 168 hours in a week
      throw invalid_argument("Hours worked must be >= 0.0 and <= 168.0");
   }

   hoursWorked = hours;
}

// return hours worked
double HourlyEmployee::getHoursWorked() const { return hoursWorked; }

// calculate earnings; override pure virtual function earnings in Employee
double HourlyEmployee::earnings() const {
   if (getHoursWorked() <= 40) { // no overtime
      return getHourlyWage() * getHoursWorked();
   }
   else {
      return 40 * getHourlyWage() + (getHoursWorked() - 40) * getHourlyWage() * 1.5;
   }
}

// return a string representation of HourlyEmployee's information
string HourlyEmployee::toString() const {
   ostringstream output;
   output << fixed << setprecision(2);
   output << "hourly employee: " << Employee::toString()
      << "\nhourly wage: " << getHourlyWage()
      << "; hours worked: " << getHoursWorked();
   return output.str();
}
