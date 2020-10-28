#include <stdio.h>
#define SIZE 10
void arr(int *pa, int *pb) {
	int i;
	for (i = 0; i < 10; i++) {
		pb[i] = pa[i];
	}
}
int main() {
	int a[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[SIZE] = { 0 };
	arr(a, b, SIZE);
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
		printf("%d ", b[i]);
	}
	return 0;
}