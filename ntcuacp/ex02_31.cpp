// Calculate the product of three integers
#include <iostream> // enables program to perform input and output
using namespace std; // program uses names from the std namespace

// function main begins program execution
int main() {
   int x{0};
   int y{0};
   int z{0};
   int a{0};
   int b{0};
   int result{0}; // the product of the three integers

   cout << "Enter total miles driven per day: ";
   cin>>x;
   cout << "Enter cost per gallon of gasoline: ";
   cin>>y;
   cout << "Enter average miles per gallon: ";
   cin>>z;
   cout << "Enter parking fees per day: ";
   cin>>a;
   cout << "Enter tolls per day: ";
   cin>>b;
   result = (x / z * y)/100 + a + b; // multiply the three integers; store result
   cout << "/nYour daily driving cost is: " << result << endl; // print result; end line
} // end function main 
