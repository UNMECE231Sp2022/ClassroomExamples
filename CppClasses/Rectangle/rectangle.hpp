/*
struct _rect {
	float length;
	float width;
};
*/
#include <iostream>

class Rectangle {
	private:
		float _length;
		float _width;

	public:
		// Constructors
		Rectangle();
		Rectangle(float length, float width);
		Rectangle(const Rectangle &r);

		// Destructor
		~Rectangle();

		// Getters
		float length() const;
		float width() const;

		// Setters
		void set_length(float length);
		void set_width(float width);

		// General methods
		float area() const;
		float perimeter() const;
		Rectangle add(const Rectangle &r) const;
		void print() const;

		Rectangle &operator=(const Rectangle &r);
		Rectangle operator+(const Rectangle &r);
		friend std::ostream &operator<<(std::ostream &out, const Rectangle &r);

		// pre ++
		Rectangle &operator++();
		// post ++
		Rectangle operator++(int x);

};


