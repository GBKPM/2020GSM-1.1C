#include <stdio.h>
int main(void) {
	//26. ����(����) �Է±��� �Է��� ���� ���
	//char i = 0;
	//do {
	//	printf("���ڸ� �Է��ϼ���: ");
	//	scanf_s(" %c", &i);
	//	printf("�Է��� ����: %c\n", i);
	//} while (i == getchar());
	//27. 0~9�ݺ�, ��� ������ ���� break���
	//��� : 0,1,2,3,4,
	/*int a = 0;
	do {
		printf("%d,", a);
		a++;
		if (a == 5) break;
	} while (a < 10);*/
	//28. �� ���� continue�� ���
	int a = 0;
	do {
		if (a >= 5) {
			a++;
			continue;
		}
		printf("%d,", a);
		a++;
	} while (a<10);
	
	return 0;
}