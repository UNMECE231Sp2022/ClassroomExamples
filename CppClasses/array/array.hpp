#include <iostream>

class Array {
	private:
		int *_data;
		size_t _size;

	public:
		Array();
		Array(size_t size);
		~Array();

		size_t size() const;
		int &operator[](size_t idx);

		Array &operator=(const Array &a);
		friend std::ostream &operator<<(std::ostream &out, const Array &a);
};
