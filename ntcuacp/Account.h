// Account.h
#include <string>

class Account {
public:
   // Account constructor with two parameters  
    Account(std::string accountName, int initialBalance);
    
   // function that deposits (adds) only a valid amount to the balance
    void deposit(int depositAmount);
    
    
    // function that withdraws (subtracts) only a valid amount from the balance
    void withdraw(int withdrawalAmount);

   // function returns the account balance
    int getBalance();

   // function that sets the name
    void setName(std::string accountName);

   // function that returns the name
    std::string getName();
private:
   std::string name; // account name data member 
   int balance{0}; // data member with default initial value
}; // end class Account

Account::Account(std::string accountName, int initialBalance)
{ 
   name = accountName;
   balance = initialBalance;
}
void Account::deposit(int depositAmount)
{
   if (depositAmount > 0) { // if the depositAmount is valid
      balance = balance + depositAmount; // add it to the balance 
   }
}
void Account::withdraw(int withdrawalAmount)
{
   if (withdrawalAmount > 0) { // if the withdrawalAmount is valid
      balance = balance - withdrawalAmount; // subtract it from the balance 
   }
}
int Account::getBalance()
{
   return balance;
}
void Account::setName(std::string accountName)
{
   name = accountName;
}
std::string Account::getName()
{
   return name;
}