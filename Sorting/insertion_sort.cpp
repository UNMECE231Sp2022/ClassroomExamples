#include <iostream>
#include <vector>
#include <algorithm> 	// std::permutation
#include <cstdlib>		// srand, rand
#include <ctime> 		// time

void print_vector(const std::vector<int> &v) {
	for (const auto &x : v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

void insertion_sort(std::vector<int> &v) {
	int v_size = v.size();
	for (int i=1; i<v_size; ++i) {
		for (int j=0; j<i+1; ++j) {

			if (v[i] < v[j]) {
				swap(v[i], v[j]);
			}

		}
	}
}

int meta_insertion_sort(std::vector<int> &v) {
	int v_size = v.size();
	int count = 0;
	for (int i=1; i<v_size; ++i) {
		for (int j=0; j<i+1; ++j) {
			if (v[i] < v[j]) {
				swap(v[i], v[j]);
				count++;
			}

		}
	}
	return count;
}

int factorial(int n) {
	int f = 1;
	while (n > 0) {
		f *= n;
		n--;
	}
	return f;
}

int main() {
	srand(time(NULL));
	//std::cout << time(NULL) << '\n';
	//std::cout << rand() << '\n';

	/*
	int init_size = 9;
	std::vector<int> x;
	for (int i=0; i<init_size; ++i) {
		x.push_back(rand() % 40);
	}

	print_vector(x);
	int x_sort_count = meta_insertion_sort(x);
	print_vector(x);
	std::cout << "Number of swaps for x: " << x_sort_count << '\n';
	*/

	std::vector<int> y = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	/*
	int y_sort_count = meta_insertion_sort(y);
	print_vector(y);
	std::cout << "Number of swaps for y: " << y_sort_count << '\n';
	*/

	int i = 1;
	const int dur = factorial(9);
	std::vector<int> sort_temp = y;
	int sum = meta_insertion_sort(sort_temp);
	while(std::next_permutation(y.begin(), y.end())) {
		sort_temp = y;
		sum += meta_insertion_sort(sort_temp);
		std::cout << "Iter " << i << "/" << dur << '\n';
		i++;
	}
	std::cout << sum << '\n';
	std::cout << (sum / (float) dur) << '\n';

	return 0;
}
