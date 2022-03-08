#include "rectangle.hpp"

class Cube : public Rectangle {
	private:
		float _depth;
		float _surface_area;
		float _volume;

		void calc_surface_area();
		void calc_volume();

	public:
		Cube();
		Cube(float length, float width, float depth);
		Cube(const Cube &c);

		float depth() const;
		float surface_area() const;
		float volume() const;

		void set_depth(float depth);
		void set_length(float length) override;
		void set_width(float width) override;

		void print() const override;

		Cube &operator=(const Cube &c);
		Cube operator*(float x);
		//Cube operator*(const Cube &x);
		friend std::ostream &operator<<(std::ostream &out, const Cube &c);
};





