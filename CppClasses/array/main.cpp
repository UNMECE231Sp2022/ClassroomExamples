#include <iostream>
#include "array.hpp"

int main() {
	Array x;
	std::cout << '\t' << x.size() << '\n';

	Array y(4);
	std::cout << '\t' << y.size() << '\n';
	for (size_t i=0; i<y.size(); ++i) {
		y[i] = (i+1) * (i+1);
	}

	std::cout << '\t';
	for (size_t i=0; i<y.size(); ++i) {
		std::cout << y[i] << ' ';
	}
	std::cout << std::endl;

	Array z = y;

	return 0;
}
