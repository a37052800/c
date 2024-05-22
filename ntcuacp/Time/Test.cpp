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
    Date today( 9, 10, 0, 5, 8, 2024);
    cout << "Outputs the today object." << endl;
    // Your answer should print today's month/day/year hour:minute:second
    cout << today.toString() << endl;
    cout << "Modify the object today." << endl;
    today.setDate(5, 9, 2024);
    today.setTime(12, 10, 0);
    cout << "Outputs the object today again." << endl;
    // Your answer should print today's month/day/year hour:minute:second
    cout << today.toString() << endl;
    return 0;
}
