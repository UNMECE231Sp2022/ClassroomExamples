#include <iostream>

// std::min
template <typename M>
M min(M &a, M &b) {
	// return a < b ? a : b;
	if (a < b) {
		return a;
	}
	else {
		return b;
	}
}

// std::max
template <typename A>
A max(A &a, A &b) {
	return a > b ? a : b;
}
