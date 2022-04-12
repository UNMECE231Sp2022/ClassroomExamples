#include <iostream>
#include <vector>
#include <algorithm> 	// std::permutation

void print_vector(const std::vector<int> &v) {
	for (const auto &x : v) {
		std::cout << x << ' ';
	}
	std::cout << '\n';
}

bool binary_search(const std::vector<int> &v, const int search_value) {
	int begin = 0;
	int end = v.size() - 1;
	while(true) {
		int mid = (begin + end) / 2;
		if (v[mid] == search_value) {
			return true;
		}
		else if (search_value < v[mid]) {
			end = mid - 1;
		}
		else {
			begin = mid + 1;
		}
		if (mid == end) {
			return false;
		}
	}
	return false;
}

int meta_binary_search(const std::vector<int> &v, const int search_value) {
	int count = 0;
	int begin = 0;
	int end = v.size() - 1;
	while(true) {
		int mid = (begin + end) / 2;
		if (v[mid] == search_value) {
			return count;
		}
		else if (search_value < v[mid]) {
			end = mid - 1;
		}
		else {
			begin = mid + 1;
		}

		count += 1;

		if (mid == end) {
			return count;
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
	int init_size = 9;
	std::vector<int> x;
	for (int i=0; i<init_size; ++i) {
		x.push_back(i+1);
	}
	int search_value = 5;
	int sum = meta_binary_search(x, search_value);

	while(std::next_permutation(x.begin(), x.end())) {
		sum += meta_binary_search(x, search_value);
	}

	std::cout << (sum / (float) factorial(9)) << '\n';

	return 0;
}
