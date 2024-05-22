#ifndef TIME_H
#define TIME_H
#include <iostream>
#include <sstream>
using namespace std;

//Time class
class Time
{ 
public:
     	Time(int h=0, int m=0, int s=0);
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
