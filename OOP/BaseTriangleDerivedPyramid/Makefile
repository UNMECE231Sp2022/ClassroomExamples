GPP=g++ -std=c++17

all: test_triangle

test_triangle: main.o Triangle_methods.o Shape3D_methods.o
	$(GPP) $^ -o $@

main.o: main.cpp triangle.hpp
	$(GPP) -c $<

Triangle_methods.o: Triangle_methods.cpp triangle.hpp
	$(GPP) -c $<

Shape3D_methods.o: Shape3D_methods.cpp shape3d.hpp
	$(GPP) -c $<

clean:
	-rm *.o test_triangle
