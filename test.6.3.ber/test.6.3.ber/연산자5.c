#include <stdio.h>
int main() {
	//13. 세 정수 입력 최대값 구하기(scanf_s한번 사용)
	int a, b, c, max;
	printf("세 정수 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);
	max = a < b ? b : a;
	max = max < c ? c : max;
	printf("최대값: %d", max);
	
	//14. 정수 셋 차례로 입력, 최대값 구하기
	//int a, b, c, max;
	//printf("첫번째 정수 입력: ");
	//scanf_s("%d", &a);
	//printf("두번째 정수 입력: ");
	//scanf_s("%d", &b);
	//printf("세번째 정수 입력: ");
	//scanf_s("%d", &c);
	//max = a < b ? b : a;
	//max = max < c ? c : max;
	//printf("최대값: %d", max);
	return 0;
}