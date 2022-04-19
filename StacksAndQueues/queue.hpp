#ifndef QUEUE_HPP
#define QUEUE_HPP

#include <iostream>
#include <vector>
#include <cassert>

template <typename Q>
class Queue {
	private:
		std::vector<Q> _data;
		size_t _size;

	public:
		Queue() : _size{0} {}
		Queue(Q value) : _size{1}, _data(1, value) {}
		Queue(const Queue &que) : _size{que.size()}, _data{que._data} {}
		
		size_t size() const {
			return _size;
		}

		Q front() const {
			return _data[0];
		}

		Q back() const {
			return _data[size() - 1];
		}

		// void push(Q value) {
		void enqueue(Q value) {
			_data.push_back(value);
			_size++;
		}

		// void pop() {
		void dequeue() {
			_data.erase(_data.begin());
			_size--;
		}

		bool empty() const {
			return _data.empty();
		}

		void print() const {
			for (const auto &x : _data) {
				std::cout << x << ' ';
			}
			std::cout << '\n';
		}

		Queue &operator=(const Queue &qu) {
			if (this == &qu) {
				return *this;
			}

			_size = qu._size;
			_data = qu._data;

			return *this;
		}

		bool operator==(const Queue &rhs) {
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

		bool operator!=(const Queue &rhs) {
			return !(*this == rhs);
		}

		template <typename Q2>
		friend std::ostream &operator<<(std::ostream &out, const Queue<Q2> &q);
};


template <typename Q2>
std::ostream &operator<<(std::ostream &out, const Queue<Q2> &q) {
	for (const auto &x : q._data) {
		out << x << ' ';
	}
	return out;
}


#endif // QUEUE_HPP
