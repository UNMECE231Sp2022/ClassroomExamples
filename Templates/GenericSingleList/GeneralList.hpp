#include <iostream>
template <typename T>
class List {
	public:
		struct _list {
			T value;
			struct _list *next;
		};
		typedef struct _list Node;

	private:
		size_t _size;
		Node *_front;
		Node *_back;

		void reccopy(const Node *n) {
			if (n) {
				reccopy(n->next);
				push_front(n->value);
			}
		}

	public:
		List() : _size{0}, _front{nullptr}, _back{nullptr} {}

		List(const List &l) :  _size{0}, _front{nullptr}, _back{nullptr} {
			reccopy(l._front);
		}

		~List() {
			while(!empty()) {
				pop_front();
			}
		}

		T &front() {
			return _front->value;
		}
		
		T &back() {
			return _back->value;
		}

		size_t size() const {
			return _size;
		}

		bool empty() {
			//return (_size == 0);
			return (_front == nullptr) && (_back == nullptr);
			//return (_size == 0) && (_front == nullptr) && (_back == nullptr);
		}

		void push_front(T data) {
			Node *new_node = new Node;
			new_node->value = data;

			if (empty()) {
				new_node->next = nullptr;
				_back = new_node;
			}
			else {
				new_node->next = _front;
			}
			_front = new_node;
			_size += 1;
		}

		void pop_front() {
			if (empty()) {
				return;
			}

			Node *node_to_delete = _front;

			if (_front->next == nullptr) {
				_front = nullptr;
				_back = nullptr;
			}
			else {
				_front = _front->next;
			}

			delete node_to_delete;
			_size -= 1;
		}

		void push_back(T data) {
			Node *new_node = new Node;
			new_node->value = data;
			new_node->next = nullptr;

			if (empty()) {
				_front = new_node;
			}
			else {
				_back->next = new_node;
			}

			_back = new_node;
			_size += 1;
		}

		void pop_back() {
			Node *node_to_delete = _back;

			if (_front->next == nullptr) {
				_front = nullptr;
				_back = nullptr;
				_size -= 1;
			}
			else {
				Node *new_back = _front;
				while (new_back->next != _back) {
					new_back = new_back->next;
				}
				new_back->next = nullptr;
				_back = new_back;
			}
			delete node_to_delete;
		}

		void print() const {
			Node *temp;
			for (temp = _front; temp != nullptr; temp = temp->next) {
				std::cout << temp->value << ' ';
			}
			std::cout << '\n';
		}

		template <typename Z>
		friend std::ostream &operator<<(std::ostream &out, const List<Z> &l);

		// lhs == rhs
		template <typename R>
		friend bool operator==(const List<R> &lhs, const List<R> &rhs);

		// lhs == rhs
		template <typename S>
		friend bool operator!=(const List<S> &lhs, const List<S> &rhs);

		bool operator==(const List<T> &l) {
			if (size() != l.size()) {
				return false;
			}
			Node *temp;
			Node *l_temp;
			/*
			 * for (temp = _front, l_temp = l._front; 
			 * 		temp != nullptr && l_temp != nullptr; 
			 * 		temp = temp->next, l_temp = l_temp->next) {
			 */
			 for (temp = _front, l_temp = l._front; 
					 temp != nullptr; 
					 temp = temp->next, l_temp = l_temp->next) {
				if (temp->value != l_temp->value) {
					return false;
				}
			 }
			 return true;
		}

		bool operator!=(const List<T> &l) {
			return !(*this == l);
		}
};

template <typename Z>
std::ostream &operator<<(std::ostream &out, const List<Z> &l) {
	for (auto temp = l._front; temp != nullptr; temp = temp->next) {
		out << temp->value << ' ';
	}

	return out;
}


