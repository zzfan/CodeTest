CC = g++ -std=c++11 -g
object = biggies.o string_random.o

biggies: $(object)
	$(CC) -o biggies $(object)
biggies.o: biggies.cpp ../../Common/string_random.hpp
	$(CC) -c biggies.cpp
string_random.o: ../../Common/string_random.cpp  ../../Common/string_random.hpp
	$(CC) -c ../../Common/string_random.cpp
clean:
	rm $(object) biggies

