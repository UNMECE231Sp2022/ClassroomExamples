#include <iostream>

void swap_ref(int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap_ptr(int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 1, b = 2;
	std::cout << a << ' ' << b << '\n';

	swap_ptr(&a, &b);

	std::cout << a << ' ' << b << '\n';

	swap_ref(a, b);

	std::cout << a << ' ' << b << '\n';

	return 0;
}
