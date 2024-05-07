g++ -c fig12_17.cpp BasePlusCommissionEmployee.cpp CommissionEmployee.cpp Employee.cpp SalariedEmployee.cpp
g++ -o fig12_17 fig12_17.o BasePlusCommissionEmployee.o CommissionEmployee.o Employee.o SalariedEmployee.o
./fig12_17
rm fig12_17 *.o