#include "GeneralList.hpp"
#include <string>

int main() {
	List<int> IntList;
	IntList.push_front(5);
	IntList.push_back(9);
	IntList.push_front(2);
	IntList.print();

	List<float> FloatList;
	FloatList.push_back(0.9563);
	FloatList.push_front(5.9276);
	FloatList.push_back(1.2908);
	FloatList.print();

	List<std::string> StringList;
	StringList.push_back("and thanks");
	StringList.push_front("So long");
	StringList.push_back("to all the fish");
	//StringList.print();
	std::cout << StringList << '\n';

	List<float> FloatyList;
	FloatyList.push_back(0.9563);
	FloatyList.push_front(5.9276);
	FloatyList.push_back(1.2908);

	if (FloatList == FloatyList) {
		std::cout << "They are the same!\n";
	}

	FloatyList.push_back(0.9);
	if (FloatList != FloatyList) {
		std::cout << "They are not the same!\n";
	}

	return 0;
}
