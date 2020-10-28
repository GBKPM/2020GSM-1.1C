#include<stdio.h>
int main() {
	//if ~ else if ~ else 점수를 입력받아 학점출력하기
	//90점이상이면 A, 80점이상이면 B, 70점이상이면 C, 70점미만이면 노력
	/*int point;

	printf("test? : ");
	scanf_s("%d", &point);

	if (point == 100)
		printf("대단해요!!!");
	else if (point >= 90)
		printf("A\n\n");
	else if (point >= 80)
		printf("B\n\n");
	else if (point >= 70)
		printf("C\n\n");
	else
		printf("노력\n\n");*/
		// 0~100점사이의 점수만 입력받아서 학점출력하기
		// 0~100 이외의 점수가 입력되면 "점수는 0~100점 사이를 입력하세요.
	//int score;
	//printf("input score : ");
	//scanf_s("%d", &score);
	//if (score>=0 && score<=100)
	//	printf("%d점이면 학점은~~\n", score);
	//else
	//	printf("점수는 0~100점 사이를 입력하세요");
	//if (score == 100)
	//	printf("A!!! 대단해요!!!");
	//else if (score >= 90)
	//	printf("A\n\n");
	//else if (score >= 80)
	//	printf("B\n\n");
	//else if (score >= 70)
	//	printf("C\n\n");
	//else if (score < 0);
	//printf("노력하시기를...\n\n");
		//짝수 홀수를 구분하여 출력하고, 짝수 값이 100이상이면 "100보다 크다" 출력
	// 홀수 값이 100보다 작으면 "100보다 작다"출력

	int num;
	printf("input number : ");
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("EVEN\n");
	if (num > 100)
		printf("100보다 큽니다.\n");
	else
		printf("ODD\n");
	if (num < 100)
		printf("100보다 작습니다.\n");
	

	return 0;
}