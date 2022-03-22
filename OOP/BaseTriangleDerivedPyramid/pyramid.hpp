#ifndef DERIVED_PYRAMID_HPP
#define DERIVED_PYRAMID_HPP

#include "triangle.hpp"
#include "shape3d.hpp"

class Pyramid : public Triangle, public Shape3D {
	protected:
		void calculate_surface_area() override;
		void calculate_volume() override;

	public:
		Pyramid();
		Pyramid(float base, float height, float depth);
		Pyramid(const Pyramid &p);

		void set_base(float base) override;
		void set_height(float height) override;
		void set_depth(float depth) override;

		Pyramid &operator=(const Pyramid &p);
		friend std::ostream &operator<<(std::ostream &out, const Pyramid &p);
};

#endif //DERIVED_PYRAMID_HPP
