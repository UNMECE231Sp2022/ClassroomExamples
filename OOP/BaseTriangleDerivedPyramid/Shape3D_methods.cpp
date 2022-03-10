#include "shape3d.hpp"
#include <cassert>

Shape3D::Shape3D() : _depth{1.0f} {}

Shape3D::Shape3D(float depth) {
	set_depth(depth);
}

Shape3D::Shape3D(const Shape3D &s) : _depth{s._depth} {}

float Shape3D::depth() const {
	return _depth;
}

float Shape3D::surface_area() const {
	return _surface_area;
}

float Shape3D::volume() const {
	return _volume;
}

void Shape3D::set_depth(float depth) {
	assert(depth > 0.0f);
	_depth = depth;
}
