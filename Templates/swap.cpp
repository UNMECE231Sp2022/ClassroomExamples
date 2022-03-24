#include <iostream>
#include <string>

#include <vector>

template <typename T>
void print_vector(const std::vector<T> &v) {
	for (const auto &x : v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

/*
 * std::pair
template <typename T1, typename T2>
struct _pair {
	T1 first;
	T2 second;
};
*/

// std::swap
//template <class T>
template <typename T>
void swap(T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;
}

/*
void swap(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap(double &x, double &y) {
	double temp = x;
	x = y;
	y = temp;
}

void swap(std::string &x, std::string &y) {
	std::string temp = x;
	x = y;
	y = temp;
}

*/

int main() {
	int a = 1, b = 2;
	std::cout << a << ' ' << b << '\n';
	swap(a, b);
	std::cout << a << ' ' << b << '\n';

	double d = 4.52, e = 73.68;
	std::cout << d << ' ' << e << '\n';
	swap(d, e);
	std::cout << d << ' ' << e << '\n';

	/*
	std::string q = " there!", p = "Hello";
	std::cout << q << ' ' << p << '\n';
	swap(q, p);
	std::cout << q << ' ' << p << '\n';
	*/

	return 0;
}
