#include <stdio.h>
int main() {
	//6. 세 정수를 입력받아 총합 출력(+=사용)
	//(변수 추가 or 프로그램 수정x)
	//int num, total = 0;

	////여기에 들어갈 코드
	//printf("정수 첫번째: ");
	//scanf_s("%d", &num);
	//total += num;
	//printf("정수 두번째: ");
	//scanf_s("%d", &num);
	//total += num;
	//printf("정수 세번째: ");
	//scanf_s("%d", &num);
	//total += num;

	//printf("Total : %d\n", total);
	

	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j <= 5; j++) {
			printf(" \t");
		}
		for (j = 0; j <=4 - i; j++) {
			printf("*\t");
		}
		printf("\n");
	}
	return 0;
}