#include "rectangle.hpp"

class Cube : public Rectangle {
	private:
		float _depth;

	public:
		Cube();
		Cube(float length, float width, float depth);
		Cube(const Cube &c);

		float depth() const;

		void set_depth(float depth);
		void set_length(float length) override;
		void set_width(float width) override;
};
