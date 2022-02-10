#include <iostream>

int main() {
	int x = 5;
	int &y = x;

	std::cout << x << '\n';
	y += 12;
	std::cout << x << '\n';

	//int &z;
	//NULL == nullptr;
	//int &z = nullptr;
	//
	//int a = 9;
	//y = a;
	
	return 0;
}
