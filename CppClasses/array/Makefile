GPP=g++ -std=c++17

all: test_array

test_array: main.o Array_methods.o
	$(GPP) $^ -o $@

main.o: main.cpp array.hpp
	$(GPP) -c $<

Array_methods.o: Array_methods.cpp array.hpp
	$(GPP) -c $<

clean:
	-rm *.o test_array
