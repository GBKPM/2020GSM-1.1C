#include <stdio.h>
int main() {
	//���� �Է� �״�� ���, q�Է½� ����
	char i = 0;
	do {
		printf("�� ���� �Է�: ");
		i = getchar();
		getchar();
		printf("�Է��� ����: %c\n", i);
	} while (i != 'q');
	return 0;
}