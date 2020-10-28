#include <stdio.h>
int main() { //1 2 3 4 5
	int arr[5][5] = { 0 };
	int cnt = 0, i, j;
	
	for (i = 0; i < 5; i++) { //행 처리를 위한 바깥쪽 반복
		for (j = 0; j < 5; j++) { //열 처리를 위한 바깥쪽 반복
			arr[i][j] = ++cnt;
			printf("%3d", arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}