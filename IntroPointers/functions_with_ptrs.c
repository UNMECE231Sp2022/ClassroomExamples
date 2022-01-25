#include <stdio.h>

void mult_value(float a) {
	a *= 2;
}

void mult_ref(float *b) {
	(*b) *= 2;
}

int main() {
	float x = 5;
	printf("%f\n", x);

	mult_value(x);
	printf("%f\n", x);

	mult_ref(&x);
	printf("%f\n", x);

	return 0;
}
