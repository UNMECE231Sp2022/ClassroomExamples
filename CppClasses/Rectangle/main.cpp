#include <iostream>
#include "rectangle.hpp"

int main() {
	Rectangle r;
	std::cout << r.length() << ' ' << r.width() << '\n';

	Rectangle r2(5.7, 8.2);
	std::cout << r2.length() << ' ' << r2.width() << "\n\n";

	Rectangle r3(r);
	std::cout << '\t' << r3.length() << ' ' << r3.width() << '\n';
	r3.set_length(-9.1f);
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

	std::cout << (r++) << '\n';
	std::cout << (++r) << '\n';
	
	return 0;
}
