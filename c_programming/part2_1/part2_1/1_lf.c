#include<stdio.h>
int main() {
	/*if 절대값 구하기*/
	/*int num;
	printf("input integer : ");
	scanf_s("%d", &num);
	if (num < 0) {
		num = num * -1;
		//num = -num;
	}
	printf("input number(절대값) : %d\n", num);*/

	//소문자를 대문자로 바꾸기
	/*char ch;
	printf("소문자를 입력하시오 : ");
	scanf_s("%c", &ch);
	if (ch >= 'a' && ch <= 'z')
		ch -= 32; //ch = ch - 32;
	printf("%c\n", ch);*/

	/*if~else 홀수 짝수 판별하기*/
	/*int a;
	printf("input number : ");
	scanf_s("%d", &a);
	if (a%2==0)
	{
		printf("%d는 짝수", a);
	}
	else
	{
		printf("%d는 홀수", a);
	}*/

	//(과제) 점수를 입력받아 80점 이상이면 합격, 아니면 불합격 출력하기
	int a;
	printf("점수는? ");
	scanf_s("%d", &a);
	if (a >= 80) {
		printf("합격");
	}
	else {
		printf("불합격");
	}
	return 0;
}