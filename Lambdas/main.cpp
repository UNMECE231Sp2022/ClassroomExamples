#include <iostream>
#include <vector>
#include <algorithm> // std::for_each

void print_vector(const std::vector<int> &x) {
	for (const auto &i : x) {
		std::cout << i << ' ';
	}
	std::cout << '\n';
}

template <typename Iter, typename Function>
void for_each(Iter begin, Iter end, Function f) {
	for (; begin!=end; ++begin) {
		f(*begin);
	}
}

// Lambda structre
// [](){}
// [] - Capture clause
// 	Captures local variables
// () - Parameter clause
// 	Create parameters to use in the lambda
// {} - Body of lambda
// 	It is like the body of the function
int main() {
	std::vector<float> x = {2.55, 6.71, 9.37};
	std::vector<float> y(x);
	std::vector<float> z(x);

	auto print = [](float e) { 
		std::cout << e << ' '; 
	};
	std::for_each(x.begin(), x.end(), print);
	std::cout << '\n';

	auto square = [](float &o) { 
		o = o * o; 
	};
	std::for_each(y.begin(), y.end(), square);
	std::for_each(y.begin(), y.end(), print);
	std::cout << '\n';

	float offset = 5;

	auto square_off = [offset](float &o) { 
		o = o * o;
		o += offset; 
	};
	std::for_each(z.begin(), z.end(), square_off);
	std::for_each(z.begin(), z.end(), print);
	std::cout << '\n';

	return 0;
}
