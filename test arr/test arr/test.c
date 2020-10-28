#include <stdio.h>
int main() {
	//배열 선언하기, 입력받기, 출력하기
	//int arr[5] = { 0 };
	//int i;
	//for (i = 0; i < 5; i++) {
	//	printf("%d번째 수 입력: ", i);
	//	scanf_s("%d", &arr[i]);
	//}
	//printf("\n");
	//for (i = 0; i < 5; i++)
	//	printf("%d ", arr[i]);
	
	/*int i;
	double arr[5] = { 1.0,2.1,3.2,4.3,5.4 };
	for (i = 0; i < 5; i++) {
		printf("%.1f\t", arr[4 - i]);
	}
	printf("\n");
	for (i = 4; i >= 0; i--) {
		printf("%.1f\t", arr[i]);
	}*/

	/*int arrA[3] = { 1,2,3 };
	int arrB[10];
	int i;
	
	for (i = 0; i < 10; i++) {
		arrB[i] = arrA[i % 3];
	}
	for (i = 0; i < 10; i++) {
		printf("%3d", arrB[i]);
	}*/

	/*int arr[10] = { 1,2 };
	int i;
	for (i = 0; i < 8; i++) {
		arr[i+2] = arr[i] + arr[i + 1];
	}
	for (i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}*/
	
	/*int num[3][4] = { {1}, {5,6},{9,10,11} };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			printf("%d\t", num[i][j]);
		}
		printf("\n");
	}*/

	/*int i, j;
	int cnt = 0;
	int arr[4][5] = { 0 };
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			cnt++;
			arr[i][j] = cnt;
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}*/

	int arr[3][2] = { 1,2,3,4,5,6 };
	int num[2][3] = { 0 };
	int i, j;
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++) {
			num[i][j] = arr[i][j];
			printf("%d", num[i][j]);
		}
		printf("\n");
	}
	return 0;
}