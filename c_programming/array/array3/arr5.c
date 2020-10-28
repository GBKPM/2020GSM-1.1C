#include <stdio.h>
int main() {
	int arr[5][5] = { 0 };
	int cnt = 0, i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			arr[i][j] = ++cnt;
	}


	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	return 0;
}