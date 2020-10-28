#include <stdio.h>
int main() {
	/*int i, j, a = 65;
	for (i = 0; i < 3; i++) {
		for (j = 1; j > 0 - i; j--) {
			printf("%c", a);
			a++;
		}
		printf("\n");
	} printf("\n\n");
	int n = 1;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2 - i; j++) {
			printf(" ");
		}
		n = 1;
		for (j = 2 - i; j < 3; j++) {

			printf("%d", n);
			n++;
		}
		printf("\n");
	}
	printf("\n\n");
	printf("i: %d, j: %d", i, j);
	printf("\nn: %d", n);
	printf("\na: %c", a);*/
	/*int arr[3][3] = { 5,4,3,3,4,5,1,2,3 };
	int i, j, sum = 0;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < i + 1; j++)
			sum += arr[i][j];
	}
	printf("%d\n", sum);*/

	/*int i;
	for (i = 36; i > 0; i /= 2)
		printf("%d ", i);*/

	/*char ch = 'F';
	char i, j;
	for (i = ch; i >= 'A'; i--) {
		for (j = i; j >= i; j--)
			printf("%c ", i);
		printf("\n");
	}*/
	int arr[5][5];
	int i, j, cnt = 1;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			arr[j][i] = cnt;
			cnt++;
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}

	printf("\n\n");


	int arrB[5][5];
	cnt = 1;
	for (i = 0; i < 5; i++) {
		if (i % 2 == 1) {
			for (j = 4; j >= 0; j--) {
				arrB[i][j] = cnt;
				cnt++;
			}
		}
		else {
			for (j = 0; j < 5; j++) {
				arrB[i][j] = cnt;
				cnt++;
			}
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			printf("%d\t", arrB[i][j]);
		printf("\n");
	}
	
	return 0;
}