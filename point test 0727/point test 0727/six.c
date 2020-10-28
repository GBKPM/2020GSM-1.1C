#include <stdio.h>
#define SIZE 5
void arrsum(int* pa, int* pb, int* pc, int n) {
	for (int i = 0; i < n; i++) {
		pc[i] = pa[i] + pb[i];
	}
}

int main() {
	int a[SIZE] = { 100,200,300,400,500 };
	int b[SIZE] = { 600,700,800,900,1000 };
	int c[SIZE];
	arrsum(a, b, c, SIZE);
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", c[i]);
	}
}