#ifndef HOURLY_EMPLOYEE_H
#define HOURLY_EMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
public:
    HourlyEmployee(const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0);

    void setHourlyWage(double);
    double getHourlyWage() const;

    void setHoursWorked(double);
    double getHoursWorked() const;

    // keyword 'override' ensures that the function is virtual in the base class
    virtual double earnings() const override;
    virtual std::string toString() const override;

private:
    double hourlyWage;
    double hoursWorked;
};

#endif