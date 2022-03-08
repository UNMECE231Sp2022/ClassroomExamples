#include <iostream>
#include "rectangle.hpp"
#include "cube.hpp"

int main() {
	Rectangle r;
	std::cout << r.length() << ' ' << r.width() << '\n';

	Rectangle r2(5.7, 8.2);
	std::cout << r2.length() << ' ' << r2.width() << "\n\n";

	Rectangle r3(r);
	std::cout << '\t' << r3.length() << ' ' << r3.width() << '\n';
	//r3.set_length(-9.1f);
	std::cout << '\t' << r3.length() << ' ' << r3.width() << "\n\n";
	r3.set_width(6.6f);
	//std::cout << r3.length() << ' ' << r3.width() << '\n';

	std::cout << '\t' << r.area() << ' ' << r.perimeter() << '\n';
	std::cout << '\t' << r3.area() << ' ' << r3.perimeter() << '\n';

	Rectangle r4 = r.add(r2); // 6.7, 9.2
	std::cout << '\t';
	r4.print();

	Rectangle r5 = r4;
	std::cout << '\t';
	r5.print();

	// Rectangle r6 = r5 + r4
	std::cout << '\t';
	std::cout << r5 + r4 << '\n'; // 13.4, 18.4

	Cube c1, c2(2, 3, 4);
	Cube c3(c1);
	c3.set_length(5);
	c3.set_width(7);
	c3.set_depth(1);

	c1.print();
	c2.print();
	c3.print();

	Cube c5 = c2;
	std::cout << c5 << '\n';

	c2 = c5 * 3.0f;
	std::cout << c2 << '\n';

	return 0;
}
