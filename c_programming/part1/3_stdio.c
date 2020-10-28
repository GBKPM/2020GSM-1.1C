#include <stdio.h>
int main() {
	//표준 출력 함수
	/*putchar() : 한 문자를 출력
	  puts() : 문자열 출력 - 자동으로 줄바꿈 기능
	  printf() */

	/*putchar('A');
	putchar('\n');
	putchar(65);
	putchar('\n');
	puts("string");*/

	//표준 입력 함수
	/* getchar() : 한 문자를 입력하여 변수에 저장
	   gets_s() : 문자열을 입력하여 배열에 저장
	   scanf_s() : 다양한 자료형을 입력하여 변수에 저장*/

	char ch;
	char name[20];

	puts("문자열 입력");
	ch = getchar();  //scanf_s("%c", &ch);
	putchar(ch);  //printf("%c", ch);
	putchar('\n');
	getchar();  //enter 제거
	puts("what's your name?");
	gets_s(name, sizeof(name));
	puts(name);
	return 0;
}
