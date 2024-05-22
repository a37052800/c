all: Test

Test: Date.o Test.o Time.o
	g++ -o Test Date.o Test.o Time.o
	./Test

.o: .cpp
	g++ -c $<

clean:
	rm Date.o Test.o Time.o Test