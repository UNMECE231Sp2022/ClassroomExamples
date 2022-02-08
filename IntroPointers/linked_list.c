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

void print_list(List *n) {
	List *t;
	for (t=n; t!=NULL; t=t->next) {
		printf("%d ", t->value);
	}
	printf("\n");
}

int main() {
	List a, b, c, d;

	a.value = 2;
	a.next = &b;

	b.value = 4;
	b.next = &c;

	c.value = 6;
	c.next = &d;

	d.value = 8;
	d.next = NULL;

	print_list(&a);

	//List e = {10, NULL};
	List e;
	e.value = 10;
	e.next = NULL;

	d.next = &e;

	print_list(&a);

	return 0;
}
