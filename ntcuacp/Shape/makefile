all : Test

Test : Test.o Shape.o Circle.o Cube.o Sphere.o Square.o
	g++ -o Test Test.o Shape.o Circle.o Cube.o Sphere.o Square.o
	./Test
.o : .cpp
	g++ -c $<

clean :
	rm *.o Test