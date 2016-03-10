objects = main.o string_random.o

rand_str: $(objects)
	g++ -o rand_str $(objects)
main.o: main.cpp string_random.hpp
	g++ -c main.cpp
string_random.o: string_random.cpp string_random.hpp
	g++ -c string_random.cpp
clean:
	rm rand_str $(objects)
