#include <iostream>
#include <vector>
#include <numeric>	// std::accumulate
#include <cassert>

// std::accumulate
template <typename Iter, typename Val>
Val acc(Iter first, Iter last, Val res) {
	for (;first!=last; ++first) {
		res = res + *first;
	}
	return res;
}

float mean(const std::vector<int> &x) {
	assert(x.size() != 0);
	return std::accumulate(x.begin(), x.end(), 0.0f) / x.size();
}

int main() {
	std::vector<int> x = {1, 2, 3, 4, 5};

	std::cout << std::accumulate(x.begin(), x.end(), 5) << std::endl;

	std::cout << mean(x) << '\n';

	return 0;
}
