#include <iostream>
#include <string>
#include "queue.hpp"

int main() {
	Queue<std::string> s1;
	if (s1.empty()) {
		std::cout << "S1 is empty!\n";
	}

	Queue<float> s2(42.0f); // 42
	if (!s2.empty()) {
		std::cout << "S2 is not empty!\n";
	}
	s2.print();
	s2.dequeue(); // S2 is empty
	if (s2.empty()) {
		std::cout << "S2 is empty!\n";
	}

	s2.enqueue(42.0f);
	Queue<float> s3(s2);
	if (s2 == s3) {
		std::cout << "S3 and S2 are equal\n";
	}

	s3.enqueue(5.7f); // 42, 5.7
	s3.enqueue(3.2f); // 42, 5.7, 3.2

	std::cout << s3 << '\n';
	std::cout << s3.front() << '\n'; // 42
	std::cout << s3.back() << '\n'; // 3.2
	std::cout << "Size of S3: " << s3.size() << '\n'; // 3

	if (s3 != s2) {
		std::cout << "S3 and S2 are not equal\n";
	}

	s2 = s3;
	std::cout << s2 << '\n';
	std::cout << s3 << '\n';

	s2.dequeue(); // 5.7, 3.2
	s2.enqueue(9.4); // 5.7, 3.2, 9.4
	if (s2 == s3) {
		;
	}
	else {
		std::cout << "S2 and S3 are not equal yet again!\n";
	}

	std::cout << s2 << '\n'; // 5.7, 3.2, 9.4

	return 0;
}
