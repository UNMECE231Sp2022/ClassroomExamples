#include <iostream>
//#include <cstdlib>

int *cpp_int_calloc(size_t size) {
	int *data = new int[size];
	for (int i=0; i<size; i++) {
		data[i] = 0;
	}
	return data;
}

int main() {
	int *x = new int[3];
	int *y = cpp_int_calloc(5);
	for (int i=0; i<5; i++) {
		std::cout << y[i] << ' ';
	}
	std::cout << '\n';

	float *pi = new float;
	*pi = 3.14152653;

	std::cout << *pi << '\n';

	delete[] y;
	delete[] x;
	delete pi;
	return 0;
}
