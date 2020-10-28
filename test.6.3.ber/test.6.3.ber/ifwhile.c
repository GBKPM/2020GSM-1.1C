#include <stdio.h>
int main() {
	//절댓값 만들기
	/*int i;
	printf("input number>> ");
	scanf_s("%d", &i);
	if (i < 0) i = i * -1;
	printf("결과: %d\n", i);*/

	//소문자 대문자
	/*char a;
	printf("문자입력: ");
	scanf_s("%c", &a);
	if (a >= 'a' && a <= 'z') a -=32;
	printf("%c\n", a);*/

	//홀수 짝수 판별
	/*int n;
	printf("input number>> ");
	scanf_s("%d", &n);
	if (n % 2 == 0) printf("%d는 짝수입니다.\n", n);
	else printf("%d는 홀수입니다.\n", n);*/

	//90점이상 a 80점 이상 b 이하 노력
	//int i;
	//printf("점수 입력: ");
	//scanf_s("%d", &i);
	//if (i >= 90) printf("A\n");
	//else if (i >= 80) printf("B\n");
	//else printf("노력\n");

	//90점이상 a 80점이상 b 이하 노력
	//switch
//	int i = 0;
//	scanf_s("%d", &i);
//	switch (i / 10) {
//	case 10:
//	case 9:
//		printf("A\n");
//		break;
//	case 8:
//		printf("B\n");
//		break;
//	default:
//		printf("노력\n");
//	}

	//10부터 거꾸로 출력
	/*int i = 10;
	while (i != 0) {
		printf("%d,", i);
		i--;
	}*/
	
	//a부터 z까지 출력
	/*char i = 'a';
	while (i <= 'z') {
		printf("%c ", i);
		i++;*/
	return 0;
}