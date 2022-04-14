#include <iostream>
#include <string>
#include "stack.hpp"

int main() {
	Stack<std::string> s1;
	if (s1.empty()) {
		std::cout << "S1 is empty!\n";
	}

	Stack<float> s2(42.0f);
	if (!s2.empty()) {
		std::cout << "S2 is not empty!\n";
	}
	s2.print();
	s2.pop();
	if (s2.empty()) {
		std::cout << "S2 is empty!\n";
	}

	s2.push(42.0f);
	Stack<float> s3(s2);
	if (s2 == s3) {
		std::cout << "S3 and S2 are equal\n";
	}

	s3.push(5.7f);
	s3.push(3.2f);

	std::cout << s3 << '\n';
	std::cout << s3.top() << '\n'; // 3.2
	std::cout << "Size of S3: " << s3.size() << '\n'; // 3

	if (s3 != s2) {
		std::cout << "S3 and S2 are not equal\n";
	}

	s2 = s3;
	std::cout << s2 << '\n';
	std::cout << s3 << '\n';

	s2.pop();
	s2.push(9.4);
	if (s2 == s3) {
		;
	}
	else {
		std::cout << "S2 and S3 are not equal yet again!\n";
	}

	return 0;
}
