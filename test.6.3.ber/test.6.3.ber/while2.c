#include <stdio.h>
int main() {
	//21. 1~10������ ���� ���ϱ�
	//int h=1, max=0;
	//while (h != 11) {
	//	max = max + h;
	//	h++;
	//}
	//printf("%d", max);

	//22. 2~9���� ���� �Է�, �ش� ���� ������ ���
	int dan, i = 1;
	printf("2~9������ ���� �Է�: ");
	scanf_s("%d", &dan);
	while (i != 10) {
		printf("%d x %d = %d\n", dan, i, dan * i);
		i++;
	}
	return 0;
}