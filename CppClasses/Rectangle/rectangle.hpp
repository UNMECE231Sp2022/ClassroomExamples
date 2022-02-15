/*
struct _rect {
	float length;
	float width;
};
*/

class Rectangle {
	private:
		float _length;
		float _width;

	public:
		Rectangle();
		Rectangle(float length, float width);
		Rectangle(const Rectangle &r);

		~Rectangle();

		float length() const;
		float width() const;

		void set_length(float length);
		void set_width(float width);
};
