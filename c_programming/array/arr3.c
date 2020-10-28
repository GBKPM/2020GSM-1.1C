#include <stdio.h>
int main() { //1 2 3 4 5
	int list[3][4] = {
		{10,20,30},
		{40,50,60}
	};
	int i, j;

	//2차원 배열의 행과 열의 총합구하기
	//1. 행의 총합구하기
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 3; j++)
			list[i][3] += list[i][j]; //sum+=a
	}
	

	//2. 열의 총합구하기
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			list[2][j] += list[i][j];
	}

	//출력
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++)
			printf("%d\t", list[i][j]);
		printf("\n");
	}
	return 0;
}