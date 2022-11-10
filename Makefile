main: main.o funcs.o 3d-space.o
	g++ -o main main.o funcs.o 3d-space.o

tests: tests.o funcs.o 3d-space.o
	g++ -o tests tests.o funcs.o 3d-space.o

funcs.o: funcs.cpp funcs.h 

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h 3d-space.h
	g++ -c -std=c++11 tests.cpp

3d-space.o: 3d-space.cpp 3d-space.h

clean:
	rm -f main tests poem main.o funcs.o tests.o 3d-space.o a.out
