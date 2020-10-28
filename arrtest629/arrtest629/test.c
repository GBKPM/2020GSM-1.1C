#include <stdio.h>
int main() {
	/*int arr[4][4] = { 0 };
	int i, j, temp = 1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			arr[j][i] = temp;
			temp++;
		}
	}

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}*/

	int arr[3][3];
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if ((i + j) % 2 == 0)
				printf("# ");
			/*if (i == 1 && j == 1)
				printf(" ");
			if (i == j || i + j == 2)
				printf("# ");*/
		}
		printf("\n");
	}
	return 0;
}