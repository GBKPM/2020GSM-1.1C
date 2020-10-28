#include <stdio.h>
int main() { //1 2 3 4 5
			 //10 9 8 7 6
	int arr[5][5] = { 0 };
	int cnt = 0, i, j;

	for (i = 0; i < 5; i++) {
		if (i % 2 == 0) {
			for (j = 0; j < 5; j++)
				arr[i][j] = ++cnt;
		}
		else {
			for (j = 4; j >= 0; j--)
				arr[i][j] = ++cnt;
		}
	}
	
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%3d", arr[i][j]);
		printf("\n");
	}
	return 0;
}