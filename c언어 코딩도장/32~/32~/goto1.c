#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main() {
	int num;
	printf("숫자입력: ");
	scanf_s("%d", &num);
	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto EXIT;

ONE:
	printf("1입니다.\n");
	goto EXIT;
TWO:
	printf("2입니다.\n");
	goto EXIT;

EXIT:
	printf("끝");
	return 0;
}