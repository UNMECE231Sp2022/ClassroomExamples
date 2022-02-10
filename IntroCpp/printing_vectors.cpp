#include <iostream>
#include <vector>
#include <string>

void print_vector(const std::vector<double> &v) {
	for (const auto &x : v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

int main() {
	std::vector<double> x = {9.12326, 5.958064, 3.4270213};
	//double x[3] = {9.12326, 5.958064, 3.4270213};

	std::cout << x.size() << '\n';
	print_vector(x);
	/*
	for (int i=0; i<x.size(); ++i) {
		std::cout << x[i] << ' ';
	}
	std::cout << '\n';
	*/

	x.push_back(6.1390);
	
	std::cout << x.size() << '\n';
	print_vector(x);
	/*
	for (auto i = x.begin(); i != x.end(); ++i) {
		std::cout << *i << ' ';
	}
	std::cout << '\n';
	*/

	x.pop_back();
	x.pop_back();

	std::cout << x.size() << '\n';
	print_vector(x);
	/*
	for (const auto &i : x) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
	*/

	return 0;
}
