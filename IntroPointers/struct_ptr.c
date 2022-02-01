#include <stdio.h>

struct _complex {
	double real;
	double imag;
};

typedef struct _complex Complex;

void print_complex(Complex c) {
	if (c.imag > 0) {
		printf("%.3lf + %.3lfj\n", c.real, c.imag);
	}
	else {
		printf("%.3lf - %.3lfj\n", c.real, -c.imag);
	}
}

int main() {
	Complex x = {3.0, 4.1};
	Complex y = {0.3, -1.4};

	print_complex(x); //3.000 + 4.100j
	print_complex(y); // 0.300 - 1.400j

	Complex *a;
	a = &y;

	(*a).real = 9.4;
	//a->real = 9.4;
	print_complex(y); // 9.400 - 1.400j
	//(*a).imag = 6.24;
	a->imag = 6.24;
	print_complex(y); // 9.400 - 6.240j

	return 0;
}




