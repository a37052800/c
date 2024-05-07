g++ -c 11_09.cpp OvernightPackage.cpp TwoDayPackage.cpp Package.cpp
g++ -o 11_09 11_09.o OvernightPackage.o TwoDayPackage.o Package.o
./11_09
rm *.o 11_09