// Member-function definitions for class Account.
#include <stdexcept>
#include <iostream>
#include "Account.h" // include definition of class Account
using namespace std;

Account::Account( double initialBalance ) // constructor initializes balance
{
   // validate that initialBalance is greater than 0; if not,
   // data member balance keeps its default initial value of 0
   if ( initialBalance >= 0.0 )
      balance = initialBalance;
   else
      throw invalid_argument( "Initial balance must be greater than or equal to 0.0" );
} // end Account constructor
void Account::credit( double amount ) // add an amount to the account balance
{
   balance += amount; // add amount to balance
} // end function credit
// subtract an amount from the account balance
bool Account::debit( double amount )
{
   if ( amount > balance ) // debit amount exceeds balance
   {
      cout << "Debit amount exceeded account balance." << endl;
      return false;
   } // end if
   else // debit amount does not exceed balance
   {
      balance -= amount;
      return true;
   } // end else
} // end function debit
// set the account balance
void Account::setBalance( double newBalance )
{
   balance = newBalance;
} // end function setBalance
// return the account balance
double Account::getBalance()
{
   return balance;
} // end function getBalance
// end class Account