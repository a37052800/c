g++ -c 11_10.cpp Account.cpp CheckingAccount.cpp SavingsAccount.cpp
g++ -o test 11_10.o Account.o CheckingAccount.o SavingsAccount.o
./test
rm *.o test