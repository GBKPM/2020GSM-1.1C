#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
int main() {
	int num;
	printf("�����Է�: ");
	scanf_s("%d", &num);
	if (num == 1)
		goto ONE;
	else if (num == 2)
		goto TWO;
	else
		goto EXIT;

ONE:
	printf("1�Դϴ�.\n");
	goto EXIT;
TWO:
	printf("2�Դϴ�.\n");
	goto EXIT;

EXIT:
	printf("��");
	return 0;
}