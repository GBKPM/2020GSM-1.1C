#include <stdio.h>
int SWAP(int* x, int* y) {
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main() {
	int a = 100, b = 200;
	printf("before a: %d, b: %d\n", a, b);
	SWAP(&a, &b);
	printf("After a: %d, b: %d", a, b);

	
	return 0;
}