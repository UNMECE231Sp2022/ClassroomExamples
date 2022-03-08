#include <iostream>
#include "triangle.hpp"

int main() {
	Triangle t1;
	Triangle t2(8.0f, 3.0f);
	Triangle t3(t1);
	t3.set_base(10.0f);
	t3.set_height(12.0f);

	t1.print();
	t2.print();
	t3.print();

	return 0;
}
