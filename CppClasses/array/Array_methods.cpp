#include "array.hpp"
#include <cassert>
#include <iostream>

Array::Array() : _data{nullptr}, _size{0} {
	std::cout << "Unparam constructor\n";
}

Array::Array(size_t size) : _data{nullptr}, _size{size} {
	std::cout << "param constructor\n";
	_data = new int[size];
	assert(_data != nullptr);
}

Array::~Array() {
	std::cout << "Destructor for size: " << size() << '\n';
	delete[] _data;
}

size_t Array::size() const {
	return _size;
}

int &Array::operator[](size_t idx) {
	assert(idx < _size);
	return _data[idx];
}

Array &Array::operator=(const Array &a) {
	if (this == &a) {
		return *this;
	}

	delete[] _data;
	_size = a.size();
	_data = new int[_size];

	for (size_t i=0; i<_size; ++i) {
		_data[i] = a._data[i];
	}

	return *this;
}

std::ostream &operator<<(std::ostream &out, const Array &a) {
	for (size_t i=0; i<a._size; ++i) {
		out << a._data[i] << ' ';
	}
	return out;
}










