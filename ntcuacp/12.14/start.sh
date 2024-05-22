g++ -c ex12_14.cpp BasePlusCommissionEmployee.cpp CommissionEmployee.cpp Employee.cpp SalariedEmployee.cpp HourlyEmployee.cpp PieceWorker.cpp
g++ -o ex12_14 ex12_14.o BasePlusCommissionEmployee.o CommissionEmployee.o Employee.o SalariedEmployee.o HourlyEmployee.o PieceWorker.o
./ex12_14
rm *.o ex12_14