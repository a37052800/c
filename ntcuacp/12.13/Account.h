// Definition of Account class.
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
   Account( double ); // constructor initializes balance
   virtual void credit( double ); // add an amount to the account balance
   virtual bool debit( double ); // subtract an amount from the account balance
   void setBalance( double ); // sets the account balance
   virtual double getBalance(); // return the account balance
private:
   double balance; // data member that stores the balance
}; // end class Account

#endif

