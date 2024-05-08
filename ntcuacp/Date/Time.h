#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <sstream>
#include "Date.h"
using namespace std;

//Time class
class Time : public Date
{ 
public:
     	Time(int h=0, int m=0, int s=0, int MM=1, int DD=1, int YY=1900);
      	void setTime(int h, int m, int s);
      	int getHour();
      	int getMinute(); 
      	int getSecond();  
        void setHour(int h);
      	void setMinute(int m); 
      	void setSecond(int s);   
        //outputs hours:minutes:seconds         
        string toString();
private:
      	int hour;
      	int minute;
      	int second;
};
#endif
