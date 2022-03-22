#include <iostream>
#include "triangle.hpp"
#include "shape3d.hpp"
#include "pyramid.hpp"

int main() {
	Triangle t1;
	Triangle t2(8.0f, 3.0f);
	Triangle t3(t1);
	t3.set_base(10.0f);
	t3.set_height(12.0f);

	t1.print();
	t2.print();
	t3.print();

	t1 = t3;
	std::cout << t1 << '\n';

	if (t1 == t3) {
		std::cout << "t1 and t3 are the same!\n";
	}

	if (t2 != t3) {
		std::cout << "t2 and t3 are not the same!\n";
	}

	Pyramid p1;
	Pyramid p2(2, 3, 4);
	Pyramid p3(p1);

	std::cout << p1 << " || " << p2 << '\n';
	std::cout << p3 << '\n';

	p3 = p2;
	std::cout << p3 << '\n';

	p3.set_base(9);
	p3.set_height(4);
	p3.set_depth(6);
	std::cout << p3 << '\n';

	return 0;
}
