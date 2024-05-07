// Member-function definitions for class SavingsAccount.
#include <stdexcept>
#include "SavingsAccount.h" // SavingsAccount class definition
using namespace std;

// constructor initializes balance and interest rate
SavingsAccount::SavingsAccount( double initialBalance, double rate )
   : Account( initialBalance ) // initialize base class
{
   if ( rate < 0.0 ) // validate interest rate
      throw invalid_argument( "Interest rate must be greater than 0.0" );

   interestRate = rate; // set interest rate
} // end SavingsAccount constructor

// determine interest owed
double SavingsAccount::calculateInterest()
{
   return getBalance() * interestRate;
} // end function calculateInterest
// end class SavingsAccount