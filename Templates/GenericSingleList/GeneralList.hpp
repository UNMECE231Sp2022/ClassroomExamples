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

		T &front() const {
			return _front->value;
		}
		
		T &back() const {
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

		void push_front(T data);
		void pop_front();

		void push_back(T data);
		void pop_back();
};



















