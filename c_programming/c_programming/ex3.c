#include <stdio.h>
int main() {
	//scanf_s(이유는 sdl검사)

	int age;	//정수형 변수 선언
	printf("나이입력: ");
	scanf_s("%d &age");
	printf("나이는 %d입니다.", &age);
	return 0;
}