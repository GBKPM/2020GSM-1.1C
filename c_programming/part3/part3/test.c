#include <stdio.h>
int main() {
	//�ڽ��� ������ ���� ������� ������ ǥ���Ǵ� ���� ������ ��������� �Ѵ�.
	//6 = 1+2+3
	//�־��� ���ڰ� ������������ �˻��ϴ� ���α׷�

	//�Է� : ������ �Է��Ͻÿ�.> 6
	//��� : 6�� ������ �Դϴ�.
	/*int n, i = 1, sum = 0;
	printf("������ �Է��Ͻÿ�.> ");
	scanf_s("%d", &n);
	while (i < n) {
		if (n % i == 0) sum += i;
		i++;
	}
	if (sum == n) printf("%d�� �������Դϴ�.\n", n);
	else printf("%d�� �������� �ƴմϴ�.\n", n);*/

	//int i, j;
	//int cnt = 0;
	//for (i = 0; i < 5; i++) {
	//	for (j = 0; j < 5; j++) {
	//		printf("%d\t", ++cnt);
	//	}
	//	printf("\n");
	//}

	/*int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5+i; j++) {
			if (i + j >= 4) printf("*\t");
			else printf("\t");
		}
		printf("\n");
	}
	for(i=0;i<5;i++)
		for (j = 0; j < 4 - i; j++) {
			printf(" ");
		}
	for (j = 0; j < (2 * i) + 1; j++) {
		printf("*");
	}
	printf("\n");*/

	//������
	int i, j;
	int cnt = 0;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", ++cnt);
		}
		printf("\n");
	}
		return 0;
}