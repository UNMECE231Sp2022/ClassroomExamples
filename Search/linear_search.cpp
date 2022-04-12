#include <iostream>
#include <vector>

int linear_search_idx(const std::vector<int> &v, const int search_value) {
	for (int i=0; i<v.size(); ++i) {
		if (v[i] == search_value) {
			return i;
		}
	}
	return -1;
}

bool linear_search(const std::vector<int> &v, const int search_value) {
	for (const auto &q : v) {
		if (q == search_value) {
			return true;
		}
	}
	return false;
}

int main() {
	std::vector<int> x = {13, 4, 1, 8, 6, 10, 9};

	int sv1 = 3, sv2 = 6, sv3 = 13;

	std::cout << "Searching for " << sv1 << " at index ";
	std::cout << linear_search_idx(x, sv1) << ", " << linear_search(x, sv1);

	std::cout << "\nSearching for " << sv2 << " at index ";
	std::cout << linear_search_idx(x, sv2) << ", " << linear_search(x, sv2);

	std::cout << "\nSearching for " << sv3 << " at index ";
	std::cout << linear_search_idx(x, sv3) << ", " << linear_search(x, sv3);
	std::cout << '\n';

	return 0;
}
