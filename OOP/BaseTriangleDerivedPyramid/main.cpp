#include <iostream>
#include "triangle.hpp"
#include "shape3d.hpp"

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

	return 0;
}
