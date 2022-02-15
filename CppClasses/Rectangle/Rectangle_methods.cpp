#include "rectangle.hpp"
#include <cassert>		// assert

Rectangle::Rectangle() : _length{1.0f}, _width{1.0f} {}

Rectangle::Rectangle(float length, float width) {
	_length = length;
	_width = width;
}

Rectangle::Rectangle(const Rectangle &r) : _length{r._length}, _width{r._width} {}

Rectangle::~Rectangle() {}

float Rectangle::length() const {
	return _length;
}

float Rectangle::width() const {
	return _width;
}

void Rectangle::set_length(float length) {
	if (length > 0.0f) {
		_length = length;
	}
}

void Rectangle::set_width(float width) {
	assert(width > 0.0f);
	_width = width;
}

