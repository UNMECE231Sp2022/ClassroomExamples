#include <stdio.h>
#include "maths.h"
#include "quad.h"

int main() {
	double x = 12;
	double sq_result = square(x);
	double cu_result = cube(x);
	double qu_result = tetra(x);

	printf("%.1lf * %.1lf = %.2lf\n", x, x, sq_result);
	printf("%.1lf * %.1lf * %.1lf = %.2lf\n", x, x, x, cu_result);
	printf("%.1lf ^ 4 = %.2lf\n", x, qu_result);
	printf("Goodbye!\n");

	return 0;
}
