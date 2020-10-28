#include <stdio.h>
int main() {
	//선택정렬 1. 최소값 찾기
	int data[5] = { 94,7,67,120,1 };
	int i, j, tmp, min;

	printf("\n=====정렬 전=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);

	for (i = 0; i < 4; i++) {
		min = i;
		for (j = i + 1; j < 5; j++) {
			if (data[min] > data[j])
				min = j; //배열 요소 중 최소값이 있는 위치를 min에 대입.
			
			//최소값과 i번째 요소값 자리바꾸기
			tmp = data[min];
			data[min] = data[i];
			data[i] = tmp;
		}
	}
	printf("\n\n=====정렬 후=====\n");
	for (i = 0; i < 5; i++)
		printf("%4d", data[i]);
	//j위치정보
	return 0;
}