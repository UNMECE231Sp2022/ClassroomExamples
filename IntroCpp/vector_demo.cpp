#include <iostream>
#include <vector>
#include <string>

int main() {
	std::vector<double> x = {9.12326, 5.958064, 3.4270213};
	//double x[3] = {9.12326, 5.958064, 3.4270213};

	std::cout << x.size() << '\n';
	for (int i=0; i<x.size(); ++i) {
		std::cout << x[i] << ' ';
	}
	std::cout << '\n';

	x.push_back(6.1390);
	std::cout << x.size() << '\n';
	for (int i=0; i<x.size(); ++i) {
		std::cout << x[i] << ' ';
	}
	std::cout << '\n';

	return 0;
}
