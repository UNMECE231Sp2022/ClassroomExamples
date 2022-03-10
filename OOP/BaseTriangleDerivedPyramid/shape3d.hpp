#ifndef ABSTRACT_BASE_SHAPE3D_HPP
#define ABSTRACT_BASE_SHAPE3D_HPP

class Shape3D {
	protected:
		float _depth;
		float _surface_area;
		float _volume;

		virtual void calculate_surface_area() = 0;
		virtual void calculate_volume() = 0;

	public:
		Shape3D();
		Shape3D(float depth);
		Shape3D(const Shape3D &s);

		float depth() const;
		float surface_area() const;
		float volume() const;

		virtual void set_depth(float depth);
};

#endif //ABSTRACT_BASE_SHAPE3D_HPP
