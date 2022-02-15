#include <iostream>
#include "rectangle.hpp"

int main() {
	Rectangle r;
	std::cout << r.length() << ' ' << r.width() << '\n';

	Rectangle r2(5.7, 8.2);
	std::cout << r2.length() << ' ' << r2.width() << "\n\n";

	Rectangle r3(r);
	std::cout << r3.length() << ' ' << r3.width() << '\n';
	r3.set_length(-9.1f);
	std::cout << r3.length() << ' ' << r3.width() << '\n';
	//r3.set_width(-6.6f);
	//std::cout << r3.length() << ' ' << r3.width() << '\n';
	
	return 0;
}
