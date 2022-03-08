#include "cube.hpp"
#include <cassert>

Cube::Cube() : Rectangle(), _depth{1.0f}, _volume{1.0f}, _surface_area{6.0f} {}

Cube::Cube(float length, float width, float depth) : Rectangle(length, width) {
	set_depth(depth);
} 

Cube::Cube(const Cube &c) : Rectangle(c), _depth{c._depth}, 
	_surface_area{c._surface_area}, _volume{c._volume} {}

float Cube::depth() const{
	return _depth;
}

void Cube::calc_surface_area() {
	_surface_area = (2 * area()) + (2 * length() * depth()) + (2 * width() * depth());
}

float Cube::surface_area() const {
	return _surface_area;
}

void Cube::calc_volume() {
	_volume = area() * depth();
}


float Cube::volume() const {
	return _volume;
}

void Cube::set_depth(float depth) {
	assert(depth > 0.0f);
	_depth = depth;
	calc_surface_area();
	calc_volume();
}

void Cube::set_length(float length) {
	Rectangle::set_length(length);
	calc_surface_area();
	calc_volume();
}

void Cube::set_width(float width) {
	Rectangle::set_width(width);
	calc_surface_area();
	calc_volume();
}

void Cube::print() const {
	std::cout << length() << ' ' << width() << ' ' << depth() << '\n';
	std::cout << '\t' << surface_area() << ' ' << volume() << '\n';
}

Cube &Cube::operator=(const Cube &c) {
	if (this == &c) {
		return *this;
	}

	_length = c._length;
	_width = c._width;
	_depth = c._depth;
	_surface_area = c._surface_area;
	_volume = c._volume;

	return *this;
}

Cube Cube::operator*(float x) {
	//Cube result(length() * x, width(), depth());
	//Cube result(length() * x, width() * x, depth());
	Cube result(length() * x, width() * x, depth() * x);
	return result;
}

std::ostream &operator<<(std::ostream &out, const Cube &c) {
	out << c._length << ' ' << c._width << ' ' << c._depth << ' ';
	out << c.surface_area() << ' ' << c.volume();
	return out;
}






