#include <iostream>
#include <cstring> 	// == #include <string.h>
#include <cmath>	// == #include <math.h>
#include <cstdlib>	// == #include <stdlib.h>
#include <string>

int main() {
	std::string s = "Hello world!";
	std::string str("Hello");

	std::string r2;
	if (r2.empty()) {
		std::cout << "r2 is empty!\n";
	}
	r2 = "Sup!";
	r2.clear();
	if (!r2.empty()) {
		std::cout << "r2 has data!\n";
	}
	else if (r2.empty()) {
		std::cout << "r2 is still empty!\n";
	}

	std::cout << s << '\n';
	std::cout << str << " , " << r2 << '\n';

	std::cout << s.size() << '\n';

	return 0;
}
