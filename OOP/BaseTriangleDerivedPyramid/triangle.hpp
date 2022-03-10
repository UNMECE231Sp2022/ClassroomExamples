#ifndef BASE_TRIANGLE_HPP
#define BASE_TRIANGLE_HPP
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

		virtual void set_base(float base);
		virtual void set_height(float height);

		void print() const;

		Triangle &operator=(const Triangle &t);
		friend std::ostream &operator<<(std::ostream &out, const Triangle &t);

		bool operator==(const Triangle &t);
		bool operator!=(const Triangle &t);
};

#endif //BASE_TRIANGLE_HPP
