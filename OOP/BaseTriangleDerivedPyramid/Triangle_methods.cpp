#include "triangle.hpp"
#include <cassert>
#include <cmath>

Triangle::Triangle() : _base{1.0f}, _height{1.0f}, _area{0.5f} {
	calc_perimeter();
}

Triangle::Triangle(float base, float height) : _base{base}, _height{height} {
	calc_area();
	calc_perimeter();
}

Triangle::Triangle(const Triangle &t) : _base{t._base}, _height{t._height}, 
	_area{t._area}, _perimeter{t._perimeter} {}

float Triangle::base() const {
	return _base;
}

float Triangle::height() const {
	return _height;
}

float Triangle::area() const {
	return _area;
}

float Triangle::perimeter() const {
	return _perimeter;
}

void Triangle::set_base(float base) {
	assert(base > 0.0f);
	_base = base;
	calc_area();
	calc_perimeter();
}
void Triangle::set_height(float height) {
	assert(height > 0.0f);
	_height = height;
	calc_area();
	calc_perimeter();
}

void Triangle::print() const {
	std::cout << base() << ' ' << height() << ", ";
	std::cout << area() << ' ' << perimeter() << '\n';
}

void Triangle::calc_area() {
	//_area = (1/2.0f) * base() * height();
	_area = (0.5f) * base() * height();
}

void Triangle::calc_perimeter() {
	float hyp = hypot((0.5f * base()), height());
	_perimeter = base() + hyp + hyp;
}








