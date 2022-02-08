#include <stdio.h> 		//printf, scanf
#include <stdlib.h>		//malloc, calloc, realloc, free

int main() {
	double *x = (double *)malloc(4 * sizeof(double));
	if (x == NULL) {
		printf("Could not allocate memory!\n");
		return -1;
	}
	//Complex *c = (Complex *)malloc(7 * sizeof(Complex));
	//List *x = (List *) malloc (1 * sizeof(List));
	//List x;
	float *y = (float *)calloc(1, sizeof(float));
	if (y == NULL) {
		printf("Could not allocate memory!\n");
		return -2;
	}
	printf("%f\n", *y);
	*y = 7.2f;
	printf("%f\n", *y);

	y = realloc(y, 7 * sizeof(float));
	if (y == NULL) {
		printf("Could not allocate memory!\n");
		return -3;
	}
	y = realloc(y, 4 * sizeof(float));
	if (y == NULL) {
		printf("Could not allocate memory!\n");
		return -4;
	}

	int i;
	for (i=0; i<4; i++) {
		*(x + i) = (i + 0.9) * (i + 1.1);
	}

	for (i=0; i<4; i++) {
		printf("%lf ", x[i]);
	}
	printf("\n");

	for (i=0; i<7; i++) {
		printf("%lf ", *(y + i));
	}
	printf("\n");

	free(x);
	free(y);
	return 0;
}
