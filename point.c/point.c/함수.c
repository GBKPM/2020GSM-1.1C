#include <stdio.h>
int add1(int x, int y) {
	return x + y;
}
int add2(int *px, int *py) {
	return *px + *py;
}
int SWAP(int* x, int* y) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}
int SWAP3(int* x, int* y, int* z) {
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = *z;
	*z = tmp;
}
int main() {
	int x = 3, y = 4, z = 7;
	printf("%d\n", add1(x, y));
	printf("%d\n", add2(&x, &y));
	printf("Before SWAP: %d %d\n", x, y);
	SWAP(&x, &y);
	printf("After SWAP: %d %d\n", x, y);
	SWAP3(&x, &y, &z);
	printf("3 SWAP: %d %d %d\n", x, y, z);
	
}