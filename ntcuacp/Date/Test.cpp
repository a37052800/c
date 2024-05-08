#include <iostream>
#include <string>
#include <vector>
#include "Time.h"
#include "Date.h"
#include <sstream>

using namespace std;
int main()
{
	// create Time object
  	Time now( 9, 10, 0, 5, 8, 2024);
   	cout << "Outputs the now object." << endl;
    // Your answer should print now's month/day/year hour:minute:second
    cout << now.toString() << endl;
   	cout << "Modify the object now." << endl;
    now.setDate(5, 9, 2024);
    now.setTime(12, 10, 0);
    cout << "Outputs the object now again." << endl;
    // Your answer should print now's month/day/year hour:minute:second
    cout << now.toString() << endl;
    return 0;
}
