GPP=g++ -std=c++17

all: test_rectangle

test_rectangle: main.o Rectangle_methods.o Cube_methods.o
	$(GPP) $^ -o $@

main.o: main.cpp rectangle.hpp cube.hpp
	$(GPP) -c $<

Rectangle_methods.o: Rectangle_methods.cpp rectangle.hpp
	$(GPP) -c $<

Cube_methods.o: Cube_methods.cpp cube.hpp
	$(GPP) -c $<

clean:
	-rm *.o test_rectangle
