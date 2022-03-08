#include <iostream>

class Triangle {
	private:
		float _base;
		float _height;
		float _area;
		float _perimeter;

		void calc_area();
		void calc_perimeter();

	public:
		Triangle();
		Triangle(float base, float height);
		Triangle(const Triangle &t);

		float base() const;
		float height() const;
		float area() const;
		float perimeter() const;

		void set_base(float base);
		void set_height(float height);

		void print() const;
};
