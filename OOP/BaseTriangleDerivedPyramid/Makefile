GPP=g++ -std=c++17

all: test_triangle

test_triangle: main.o Triangle_methods.o
	$(GPP) $^ -o $@

main.o: main.cpp triangle.hpp
	$(GPP) -c $<

Triangle_methods.o: Triangle_methods.cpp triangle.hpp
	$(GPP) -c $<

clean:
	-rm *.o test_triangle
