objects = sort_test.o string_random.o

sort_test: $(objects)
	g++ -o sort_test $(objects)
sort_test.o: sort_test.cpp ../Common/string_random.hpp
	g++ -c sort_test.cpp
string_random.o: ../Common/string_random.cpp ../Common/string_random.hpp
	g++ -c ../Common/string_random.cpp
clean:
	rm sort_test $(objects)
