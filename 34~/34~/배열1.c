#include <stdio.h>
int main() {
	int arr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	int i;
	for (i = 0; i < sizeof(arr) / sizeof(int); i++) //배열의 요소 개수만큼 반복
		arr[i] *= 2; //배열의 요소에 2를 곱해서 다시 요소에 저장
	for (i = 0; i < sizeof(arr) / sizeof(int); i++)
		printf("%3d ", arr[i]);
	

	//2차원 배열과 포인터
	/*int arr[3][4] = { 0 };
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}*/
	return 0;
}