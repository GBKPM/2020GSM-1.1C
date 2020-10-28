#include <stdio.h>
int main() {
	//21. 1~10까지의 총합 구하기
	//int h=1, max=0;
	//while (h != 11) {
	//	max = max + h;
	//	h++;
	//}
	//printf("%d", max);

	//22. 2~9사이 정수 입력, 해당 정수 구구단 출력
	int dan, i = 1;
	printf("2~9사이의 정수 입력: ");
	scanf_s("%d", &dan);
	while (i != 10) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}
	return 0;
}