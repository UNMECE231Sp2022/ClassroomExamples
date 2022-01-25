#include <stdio.h>

/*
 * char == 1 byte
 * int == 4 bytes
 * float == 4 bytes
 * double == 8 bytes
 */

int main() {
	double *x; // 8 bytes or 32 bits, 1 byte == 8 bits
	double y = 43.2172; // 8 bytes
	x = &y;

	printf("x: %p\t&x: %p\n", x, &x);
	printf("y: %.4lf\t&y: %p\n", y, &y);
	printf("*x: %.5lf\n", *x);

	*x = *x / 4.0;

	printf("y: %.4lf\n", y);
	printf("*x: %.4lf\n", *x);

	return 0;
}
