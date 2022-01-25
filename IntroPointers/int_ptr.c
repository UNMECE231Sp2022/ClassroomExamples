#include <stdio.h>

int main() {
	int *x; // 8 bytes or 32 bits, 1 byte == 8 bits
	int y = 7; // 4 bytes
	x = &y;

	printf("x: %p\t&x: %p\n", x, &x);
	printf("y: %d\t&y: %p\n", y, &y);
	printf("*x: %d\n", *x);

	return 0;
}
