#include <stdio.h>
int main() {
	int i, j, s = 2, e = 2, cnt = 0;
	int arr[5][5] = { 0 };
	for (i = 0; i < 5; i++) {
		for (j = s; j <= e; j++) {
			arr[i][j] = ++cnt;
		}
		if (i < 2) {
			s--;
			e++;
		}
		else {
			s++;
			e--;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
}