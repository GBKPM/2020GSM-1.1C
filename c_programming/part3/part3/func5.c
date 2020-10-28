#include <stdio.h>

int add(int x, int y) {
	return x + y;
}

int mul(int x, int y) {
	return x * y;
}

int factorial(int x) {
	int i;
	long fac = 1;
	for (i = 1; i <= x; i++) {
		fac *= i;
	}
	return fac;
}

int main() {
	int a, b;
	int sum = 0, multi = 0;
	long fac = 0;

	printf("intput 2 num>> ");
	scanf_s("%d%d", &a, &b);

	sum = add(a, b);
	multi = mul(a, b);

	printf("%d + %d = %d\n", a, b, sum);
	printf("%d * %d = %d\n", a, b, multi);
	
	fac = factorial(a);
	printf("%d! = %d\n", a, fac);
	return 0;
}