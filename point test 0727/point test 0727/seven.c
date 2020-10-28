#include <stdio.h>
#define SIZE 7
int arrsum(int *pa, int *psum, int n) {
	for (int i = 0; i < n; i++) {
		*psum += pa[i];
	}
}

int main() {
	int a[SIZE] = { 1,2,3,4,5,6,7 };
	int sum = 0;
	arrsum(a, &sum, SIZE);
	printf("%d", sum);
	return 0;
}