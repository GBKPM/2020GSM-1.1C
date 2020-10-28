#include <stdio.h>
int main() {
	//문자 입력 그대로 출력, q입력시 종료
	char i = 0;
	do {
		printf("한 문자 입력: ");
		i = getchar();
		getchar();
		printf("입력한 문자: %c\n", i);
	} while (i != 'q');
	return 0;
}