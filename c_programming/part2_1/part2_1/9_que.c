#include<stdio.h>
int main() {
	//80점 이상 합격 그 외 불합격
	//int point;

	//printf("점수는? : ");
	//scanf_s("%d", &point);

	//if (point >= 80)
	//	printf("합격");
	//else
	//	printf("불합격");

	//입력받은 점수를 수우미양가로 평가
	/*int point;
	printf("점수는? : ");
	scanf_s("%d", &point);

	if (point >= 90)
		printf("수\n\n");
	else if (point >= 80)
		printf("우\n\n");
	else if (point >= 70)
		printf("미\n\n");
	else if (point >= 60)
		printf("양\n\n");
	else
		printf("가\n\n");*/

	//주사위 두 번 던져 이기고 비기고 지는 프로그램 작성
	//int A, B;
	//printf("주사위를 던져서 나온 두가지 숫자는? : ");
	//scanf_s("%d%d", &A, &B);

	//if (A >= 4 && B >= 4)
	//	printf("이겼습니다.\n\n");
	//if (A >= 4 && B < 4)
	//	printf("비겼습니다.\n\n");
	//if (A < 4 && B >= 4)
	//	printf("비겼습니다.\n\n");
	//if(A < 4 && B < 4)
	//	printf("졌습니다.\n\n");

	//1~12 정수, 월의 날수 출력
	//int A, B;
	//printf("월을 입력하세요 : ");
	//scanf_s("%d", &A);
	//switch (A) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 10:
	//case 12:
	//	B = 31;
	//	break;
	//case 2:
	//	B = 28;
	//	break;
	//default:
	//	B = 30;
	//	break;
	//}
	//printf("%d월의 날수는 %d일입니다.\n", A, B);

	//1, 2, 3 없으면 모르겠다
	/*int a;
	printf("번호를 입력하세요 : ");
	scanf_s("%d", &a);
	if (a == 1)
		printf("dog\n\n");
	else if (a == 2)
		printf("cat\n\n");
	else if (a >= 3)
		printf("chick\n\n");
	else
		printf("I don't know.\n\n");*/

	//1~20까지 출력
	/*int cnt = 1;
	while (1) {
		printf("%d ", cnt);
		cnt++;
		if (cnt > 20)
			break;
	}*/

	//정수입력, 합 구하기
	//int i = 1, sum = 0, num = 0;
	//printf("input number > ");
	//scanf_s("%d", &num);
	//while (i <= num)
	//{
	//	sum = sum + i;
	//	i++;
	//}
	//printf("%d\n", sum);

	//80점 합격, 미만 불합격, 1~100사이 아닌 수 입력 시 종료
	/*int point;
	printf("점수는? : ");
	scanf_s("%d", &point);
	while (point < 100, point > 0) {
		if (point >= 80)
			printf("합격");
		else
			printf("불합격");
	}*/
	
	//정수 입력 하다가 0입력시 0제외 수, 합계, 평균 출력

	//1~100 사이의 모든 3의 배수 합 출력
	int i = 1, sum = 0;
	while (i <= 33) {
		for (i = 1; i <= 33; i++) {
			printf("%d\n", 3 * i);
		}
	}
	return 0;
}