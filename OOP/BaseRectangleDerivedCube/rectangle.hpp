#include <iostream>

class Rectangle {
	protected:
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
		virtual void set_length(float length);
		virtual void set_width(float width);

		// General methods
		float area() const;
		float perimeter() const;
		Rectangle add(const Rectangle &r) const;
		virtual void print() const;

		Rectangle &operator=(const Rectangle &r);
		Rectangle operator+(const Rectangle &r);
		friend std::ostream &operator<<(std::ostream &out, const Rectangle &r);
};


