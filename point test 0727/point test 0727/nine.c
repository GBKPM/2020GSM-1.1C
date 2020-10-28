#include <stdio.h>
int add(int* pa, int* pb, int *pab) {
	int i = 0, j = 0, k = 0;
	while (i < 4 && j < 4) {
		if (pa[i] < pb[j])
			pab[k++] = pa[i++];
		else
			pab[k++] = pb[j++];
	}
	while (i < 4)
		pab[k++] = pa[i++];
	while (j < 4)
		pab[k++] = pb[j++];
}

int main() {
	int a[] = { 2,5,7,8 };
	int b[] = { 1,3,4,6 };
	int ab[8];
	add(a, b, ab);
	for (int i = 0; i < 8; i++) {
		printf("%d ", ab[i]);
	}
	return 0;
}