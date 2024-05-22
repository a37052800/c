#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"
#include "Time.h"

using namespace std;

Time::Time(int h, int m, int s, int MM, int DD, int YY)
    : Date(MM, DD, YY)
{ // class time constructor that accepts parameters
      setTime(h, m, s);
}

void Time::setTime(int h, int m, int s)
{
      setHour(h);
      setMinute(m);
      setSecond(s);
}
void Time::setHour(int h)
{
      if (0 <= h && h < 24) // makes sure hours are valid
            hour = h;
      else
            hour = 0;
}

void Time::setMinute(int m)
{
      if (0 <= m && m < 60) // makes sure minutes are valid
            minute = m;
      else
            minute = 0;
}

void Time::setSecond(int s)
{
      if (0 <= s && s < 60) // makes sure seconds are valid
            second = s;
      else
            second = 0;
}

int Time::getHour()
{
      // returns the hours
      return hour;
}

int Time::getMinute()
{
      // returns the minutes
      return minute;
}

int Time::getSecond()
{
      // returns the seconds
      return second;
}

string Time::toString()
{
      // outputs Event: Event string, Date: month/day/year, Time: hours:minutes:seconds

      std::stringstream ss;
      ss << Date::toString() << " " << getHour() << ":" << getMinute() << ":" << getSecond();
      return ss.str();
}
