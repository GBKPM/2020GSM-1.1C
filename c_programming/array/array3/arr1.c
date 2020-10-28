#include <stdio.h>
int main() {
	//2차원배열 선언 및 초기화
	//int data[2][3] = { {1,2,3},{4,5,6} }; //1 2 3\n 4 5 6
	//int data[2][3] = { 1,2,3,4,5,6 };
	//int data[][3] = { 1,2,3,4,5,6 }; //행 생략가능 열 생략 불가능
	//int data[2][3] = { 4,5 }; //4,5,0\n0,0,0

	//교과서 118쪽 스스로 해결하기
	int i, j;
	int a[2][3] = { 1,2,3,4,5,6 };
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			printf("%d\t", a[i][j]);
		printf("\n");
	}

	printf("배열전체의 크기 : %d\n", sizeof(a));
	printf("한 행의 크기 : %d\n", sizeof(a[0]));
	printf("배열 원소 하나의 크기 : %d\n", sizeof(a[0][0])); 
	return 0;
}