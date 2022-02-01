#include <stdio.h>
#include <stdlib.h>

struct _thing {
	int x;
	float y;
	float z;
};

typedef struct _thing Thingy;

int main() {
	int a = 1;
	float b = 2.0;
	double c = 9.1223;
	char d = 'z';
	Thingy t = {5, 8.67f, 0.35f};

	void *ptr;
	ptr = &a;
	printf("%d\n", *((int *) ptr));

	ptr = &b;
	printf("%f\n", *((float *) ptr));

	ptr = &c;
	printf("%lf\n", *((double *) ptr));

	ptr = &d;
	printf("%c\n", *((char *) ptr));

	ptr = &t;
	printf("%d, %f, %f\n", (*((Thingy *) ptr)).x, (*((Thingy *) ptr)).y, (*((Thingy *) ptr)).z);


	return 0;
}
