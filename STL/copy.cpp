#include <iostream>
#include <vector>

// std::copy
template <typename IIter, typename OIter>
OIter copy(IIter begin, IIter end, OIter res) {
	for (; begin != end; ++begin, ++res) {
		*res = *begin;
	}
	return res;
}

void print_vector(const std::vector<int> &x) {
	for (const auto &i : x) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

int main() {
	std::vector<int> x = {1, 2, 3, 4, 5};
	std::vector<int> y(7, 9);

	std::copy(x.begin(), x.end(), y.begin()+1);

	print_vector(y);

	return 0;
}
