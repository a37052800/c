g++ -c SalariedEmployee.cpp CommissionEmployee.cpp BasePlusCommissionEmployee.cpp Employee.cpp Date.cpp
g++ -o test ex12_11.cpp Employee.o SalariedEmployee.o CommissionEmployee.o BasePlusCommissionEmployee.o Date.o ;./test;rm test *.o