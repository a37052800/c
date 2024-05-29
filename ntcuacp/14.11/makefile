all : Test

Test : Tool.o ex14_11.o
	g++ -o Test Tool.o ex14_11.o
	./Test
.o : .cpp
	g++ -c $<

clean :
	rm *.o Test