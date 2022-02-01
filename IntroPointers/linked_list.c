#include <stdio.h>

struct _human {
	char name[50];
	struct _human *next_human;
};

struct _list {
	int value;
	struct _list *next;
};

typedef struct _list List;

int main() {

	return 0;
}
