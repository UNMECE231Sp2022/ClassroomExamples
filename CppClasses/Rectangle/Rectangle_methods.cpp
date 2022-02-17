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

float Rectangle::area() const {
	return length() * width();
}

float Rectangle::perimeter() const {
	return 2 * (length() + width());
}

// c = a + b such that c != a and c != b
// Rectangle c = a.add(b);
Rectangle Rectangle::add(const Rectangle &r) const {
	Rectangle temp;
	temp.set_length(length() + r.length());
	temp.set_width(width() + r.width());
	return temp;
}

void Rectangle::print() const {
	std::cout << this->length() << ' ' << this->width() << '\n';
}

// Rectangle left_hand_side = right_hand_side
// a = a
Rectangle &Rectangle::operator=(const Rectangle &r) {
	// r == right_hand_side
	// this == left_hand_side
	if (this == &r) {
		return *this;
	}

	set_length(r.length());
	set_width(r.width());

	return *this;
}

Rectangle Rectangle::operator+(const Rectangle &r) {
	Rectangle temp = add(r);
	return temp;
}

// std::cout << a << b << c;
std::ostream &operator<<(std::ostream &out, const Rectangle &r) {
	out << r._length << ' ' << r._width;
	return out;
}

// pre ++
Rectangle Rectangle::operator++(int x) {
	Rectangle temp = *this;
	(*this)++;
	return temp;
}

// post ++
Rectangle Rectangle::operator++() {
	_width += 1;
	_length += 1;
	return *this;
}



