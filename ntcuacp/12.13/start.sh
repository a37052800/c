g++ -c ex12_13.cpp Account.cpp CheckingAccount.cpp SavingsAccount.cpp
g++ -o test ex12_13.o Account.o CheckingAccount.o SavingsAccount.o
./test
rm *.o test