#include "pyramid.hpp"

Pyramid::Pyramid() : Triangle(), Shape3D() {
	calculate_surface_area();
	calculate_volume();
}

Pyramid::Pyramid(float base, float height, float depth) : 
		Triangle(base, height), Shape3D(depth) {
	calculate_surface_area();
	calculate_volume();
}

Pyramid::Pyramid(const Pyramid &p) : Triangle(p), Shape3D(p) {
	calculate_surface_area();
	calculate_volume();
}

void Pyramid::calculate_surface_area() {
	_surface_area = (base() * depth()) + (2 * area()) + (depth() * height());
}

void Pyramid::calculate_volume() {
	//_volume = (2 * area()) * depth() * (1.0/3.0);
	_volume = base() * height() * depth() * (1.0/3.0);
}

void Pyramid::set_base(float base) {
	Triangle::set_base(base);
	calculate_surface_area();
	calculate_volume();
}

void Pyramid::set_height(float height) {
	Triangle::set_height(height);
	calculate_surface_area();
	calculate_volume();
}

void Pyramid::set_depth(float depth) {
	Shape3D::set_depth(depth);
	calculate_surface_area();
	calculate_volume();
}


Pyramid &Pyramid::operator=(const Pyramid &p) {
	if (this == &p) {
		return *this;
	}

	// Copying Triangle over
	_base = p._base;
	_height = p._height;
	_area = p._area;
	_perimeter = p._perimeter;

	// Copy Shape3D over
	_depth = p._depth;
	_surface_area = p._surface_area;
	_volume = p._volume;

	return *this;
}

std::ostream &operator<<(std::ostream &out, const Pyramid &p) {
	out << p.base() << ' ' << p.height() << ' ' << p.depth();
	out << ", " << p.surface_area() << ' ' << p.volume();
	return out;
}

















