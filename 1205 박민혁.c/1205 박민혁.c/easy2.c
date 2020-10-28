#include <stdio.h>
int main() {
	//14.
	/*int x = 10;
	while (x > 6) {
		printf("%d ", --x);
	}*/

	//15.!!!
	/*int i, j, s = 0, m[4][4] = {1,2,3,4,2,3,4,1,3,4,1,2,4,1,2,3 };
	for (i = 0; i < 4; i++) {
		for (j = i; j < 4; j++)
			s = s + m[i][j];
	}
	printf("%3d\n", s);*/

	//16.
	/*int arr[6] = { 1,2,3,4,5,6 };
	int i, n = 0;
	for (i = 1; i < 6; i++) {
		if (6 % i == 0)
			n += arr[i];
	}
	printf("%d", n);*/

	//17.
	/*int n, sum = 0, i = 0;
	scanf_s("%d", &n);
	while (sum < n) {
		i++;
		sum += i;
	}
	printf("%d %d", i, sum);*/

	//18.
	/*int a[5] = { 1,3,4,2,7 };
	int i, n = 0;
	for (i = 0; i < a[3]; i++) {
		n += a[i];
	}
	printf("%d", n);*/

	//19.
	/*int a = 10, b = 3;
	a = a / b;
	b = a > b && b == 3;
	printf("%d", a + b);*/

	//20.
	/*int arrA[4][2] = { 1,2,3,4,5,6,7,8 };
	int arrB[2][4] = { 0 };
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++)
			arrB[j][i] = arrA[i][j];
	}
	printf("%d", arrB[0][3]);*/

	//21.!!!
	/*int i, j;
	for (i = 0; i < 10; i++) {
		if (i > 5)
			continue;
	}
	for (j = 0; j < 10; j++) {
		if (j > 5)
			break;
	}
	printf("%d", i - j);*/

	//22.
	/*int arr[5] = { 1,2,3,4,5 };
	int i, temp;
	for (i = 0; i < 4; i++) {
		temp = i * 3;
		if (temp > 4) {
			temp %= 4;
		}
		printf("%d", arr[temp]);
	}*/

	//23.
	/*int i, j;
	for (i = 1; i < 5; i++) {
		for (j = 1; j <= i; j++) {
			printf("%d ", i + j - 1);
		}
		printf("\n");
	}*/

	//24.
	/*int a[5] = { 6,8,5,2,3 };
	int i, k;
	k = a[0];
	for (i = 1; i < 5; i++) {
		if (k > a[i])
			k = a[i];
	}
	printf("%d", k);*/

	//25.
	/*int num;
	int a = 0, b = 0, c = -1;
	printf("값을 입력하시오.");
	scanf_s("%d", &num);
	switch (num % 5) {
	case 1:
	case 2:
		printf("%d\t", num > 11 && ++b);
		printf("%d\t", num * b);
		break;
	case 3:
		printf("%d\t", !num);
	case 4:
		printf("%d\t", num *= a);
		break;
	default:
		printf("%d\t", a > num ? b : c);
	}*/
	return 0;
}