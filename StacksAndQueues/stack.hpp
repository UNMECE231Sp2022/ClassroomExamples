#ifndef STACK_HPP
#define STACK_HPP

#include <iostream>
#include <vector>
#include <cassert>

template <typename S>
class Stack {
	private:
		S *_data;
		size_t _size;

	public:
		Stack() : _size{0}, _data{nullptr} {}

		Stack(S value) : _size{0}, _data{nullptr} {
			_data = new S[1];
			assert(_data != nullptr);

			*_data = value;
			_size++;
		}

		Stack(const Stack<S> &s) : _size{s.size()}, _data{nullptr} {
			// _data = new S[size()];
			_data = new S[s.size()];
			assert(_data != nullptr);

			for (int i=0; i<s.size(); ++i) {
				*(_data + i) = s._data[i];
			}
		}
		
		~Stack() {
			delete[] _data;
		}

		size_t size() const {
			return _size;
		}

		S top() const {
			return _data[size() - 1];
		}

		void push(S value) {
			S*data_copy = new S[size()];
			assert(data_copy != nullptr);
			int i;
			for (i=0; i<size(); ++i) {
				data_copy[i] = _data[i];
			}

			delete[] _data;
			_data = new S[size() + 1];
			assert(_data != nullptr);

			for (i=0; i<size(); ++i) {
				_data[i] = data_copy[i];
			}

			delete[] data_copy;
			_data[i] = value;
			_size++;
		}

		void pop() {
			if (empty()) {
				return;
			}
			// assert(!empty());

			S *data_copy = new S[size()];
			assert(data_copy != nullptr);
			int i;
			for (i=0; i<size(); ++i) {
				data_copy[i] = _data[i];
			}

			delete[] _data;
			_data = new S[size() - 1];
			assert(_data != nullptr);

			for (i=0; i<(size()-1); ++i) {
				_data[i] = data_copy[i];
			}
			delete[] data_copy;
			_size--;
			if (size() == 0) {
				_data = nullptr;
			}
		}

		bool empty() const {
			// Three options:
			// return (_size == 0)
			// return (_size == 0) && (_data == nullptr)
			return (_data == nullptr);
		}

		void print() const {
			for (int i=0; i<size(); ++i) {
				std::cout << _data[i] << ' ';
			}
			std::cout << '\n';
		}

		Stack<S> &operator=(const Stack<S> &rhs) {
			if (this == &rhs) {
				return *this;
			}

			delete[] _data;
			_data = new S[rhs.size()];
			assert(_data != nullptr);
			_size = rhs.size();

			for (int i=0; i<size(); ++i) {
				_data[i] = rhs._data[i];
			}

			return *this;
		}

		template <typename S2>
		friend std::ostream &operator<<(std::ostream &out, const Stack<S2> &s);

		bool operator==(const Stack<S> &rhs) {
			if (size() != rhs.size()) {
				return false;
			}
			for (int i=0; i<size(); ++i) {
				if (_data[i] != rhs._data[i]) {
					return false;
				}
			}
			return true;
		}

		bool operator!=(const Stack<S> &rhs) {
			return !(*this == rhs);
		}
};

template <typename S2>
std::ostream &operator<<(std::ostream &out, const Stack<S2> &s) {
	for (int i=0; i<s.size(); ++i) {
		out << s._data[i] << ' ';
	}
	return out;
}

#endif // STACK_HPP
