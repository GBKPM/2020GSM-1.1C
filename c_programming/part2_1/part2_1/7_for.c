#include<stdio.h>
int main() {
	//Hello 100번 출력하기
	//int i;
	//for (i = 0; i < 10; i++) {
	//	printf("%d\n", i+1);
	//}
	//for 1부터 100까지 합 출력하기
	//int i = 1, sum = 0; //누적변수
	//for (i = 1; i <= 100; i++) {
	//	sum = sum + i;
	//	if (i %10==0)
	//		break;
	//}
	//printf("sum : %d\n", sum);
	//printf("%d ", sum);
	//구구단 2단 찍어보기
	/*int i;
	for (i = 1; i <= 9; i++) {
		printf("2 * %d = %d\n", i, 2 * i);
	}*/

	//입력받은 단 찍어보기
	/*int i, dan;
	printf("출력 할 dan 입력 ? ");
	scanf_s("%d", &dan);
	for (i = 1; i <= 9; i++) {
		printf("%d x %d = %d\n", dan, i, dan * i);
	}*/
	//3! 찍어보기
	int i, fact = 1;
	printf("3! = ");
	for (i = 1; i < 3; i++) {
		fact *= i;
		printf("%d * ", i);
	}
	fact *= i; //fact = fact * i;
	printf("%d = %d\n", i, fact);
	//피보나치 수열 출력
	//1,1,2,3,5,8,13,...
	//변수 3개
	//오버플로우 조건
	//for("")
	/*char x = 1, y = 1, z = 0;
	printf("1, 1, ");
	for (;;) {
		z = x + y;
		if (z < 0)
			break; //continue
		printf("%d, ",z);
		x = y;
		y = z;
	}
	printf("\n");
	printf("%d\n", z);*/
	return 0;
}