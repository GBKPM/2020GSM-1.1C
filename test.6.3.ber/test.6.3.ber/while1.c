#include <stdio.h>
int main() {
	//18. ���� ����� �����Է½� ����
	//char i = 0;
	//while ((i=getchar())  != '\n') {
	//	putchar(i);
	//}

	//19. 1~9 ���� ���� �Է� ����ŭ *���
	//���� ����ٸ� 1�̳� 9�� ���� ����
	//ex. -1 = 1, 12 = 9
	/*int n, i = 0;
	printf("1~9 ������ �����Է�: ");
	scanf_s("%d", &n);
	if (n > 9) n = 9;
	else if (n < 1) n = 1;
	while (i == n) {
		printf("*");
		i++;
	}
	if (n>9) n=9; else if(n<1) n=1; while (i==n) {printf("*"); i++;}*/

	//20. 5*5�� *���
	int i = 0, j = 0;
	while (i < 5) {
		j = 0;
		while (j < 5) {
			printf("*");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}