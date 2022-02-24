#include "array.hpp"
#include <cassert>
#include <iostream>

Array::Array() : _data{nullptr}, _size{0} {}

Array::Array(size_t size) : _data{nullptr}, _size{size} {
	_data = new int[size];
	assert(_data != nullptr);
}

Array::Array(const Array &a) : _data{nullptr}, _size{a._size} {
	_data = new int[_size];
	assert(_data != nullptr);
	for (size_t i=0; i<_size; ++i) {
		_data[i] = a._data[i];
	}
}

Array::~Array() {
	delete[] _data;
}

size_t Array::size() const {
	return _size;
}

void Array::print() const {
	for (size_t i=0; i<size(); ++i) {
		//std::cout << &(_data[i]) << ' ';
		std::cout << _data[i] << ' ';
	}
	std::cout << std::endl;
}

int &Array::operator[](size_t idx) {
	assert(idx < _size);
	return _data[idx];
}

Array &Array::operator=(const Array &a) {
	if (this == &a) {
		return *this;
	}

	assert(_size == a._size);
	/*
	 * delete[] _data;
	 * _size = a._size;
	 * _data = new int[_size];
	 */

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




