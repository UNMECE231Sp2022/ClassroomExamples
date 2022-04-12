#include <iostream>
#include <vector>

void merge(std::vector<int> &x, int left_index, int mid_index, int right_index) {
	int i, j, k;
	int left_size = mid_index - left_index + 1;
	int right_size = right_index - mid_index;

	std::vector<int> left_vector, right_vector;

	for (i=0; i<left_size; ++i) {
		left_vector.push_back(x[left_index+i]);
	}

	for (j=0; j<right_size; ++j) {
		right_vector.push_back(mid_index+1+j);
	}

	i=0, j=0, k=left_index;

	while ( (i<left_size) && (j<right_size)) {
		if (left_vector[i] < right_vector[j]) {
			x[k] = left_vector[i];
			i++;
		}
		else {
			x[k] = right_vector[j];
			j++;
		}
		k++;
	}

	// Clean up for left half when right is empty
	while (i < left_size) {
		x[k] = left_vector[i];
		i++;
		k++;
	}

	// Clean up for right half when left is empty
	while (j < right_size) {
		x[k] = right_vector[j];
		j++;
		k++;
	}

}

void merge_sort(std::vector<int> &x, int left_index, int right_index) {
	if (left_index < right_index) {
		int mid_index = (left_index + right_index) / 2;
		merge_sort(x, left_index, mid_index);
		merge_sort(x, mid_index + 1, right_index);
		merge(x, left_index, mid_index, right_index);
	}
}

int main() {
	std::vector<int> x = {9, 8, 7, 6, 5, 4, 3, 2, 1};

	return 0;
}
