GPP=g++ -std=c++17

all: test_rectangle

test_rectangle: main.o Rectangle_methods.o
	$(GPP) $^ -o $@

main.o: main.cpp rectangle.hpp
	$(GPP) -c $<

Rectangle_methods.o: Rectangle_methods.cpp rectangle.hpp
	$(GPP) -c $<

clean:
	-rm *.o test_rectangle
