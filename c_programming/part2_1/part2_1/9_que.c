#include<stdio.h>
int main() {
	//80�� �̻� �հ� �� �� ���հ�
	//int point;

	//printf("������? : ");
	//scanf_s("%d", &point);

	//if (point >= 80)
	//	printf("�հ�");
	//else
	//	printf("���հ�");

	//�Է¹��� ������ ����̾簡�� ��
	/*int point;
	printf("������? : ");
	scanf_s("%d", &point);

	if (point >= 90)
		printf("��\n\n");
	else if (point >= 80)
		printf("��\n\n");
	else if (point >= 70)
		printf("��\n\n");
	else if (point >= 60)
		printf("��\n\n");
	else
		printf("��\n\n");*/

	//�ֻ��� �� �� ���� �̱�� ���� ���� ���α׷� �ۼ�
	//int A, B;
	//printf("�ֻ����� ������ ���� �ΰ��� ���ڴ�? : ");
	//scanf_s("%d%d", &A, &B);

	//if (A >= 4 && B >= 4)
	//	printf("�̰���ϴ�.\n\n");
	//if (A >= 4 && B < 4)
	//	printf("�����ϴ�.\n\n");
	//if (A < 4 && B >= 4)
	//	printf("�����ϴ�.\n\n");
	//if(A < 4 && B < 4)
	//	printf("�����ϴ�.\n\n");

	//1~12 ����, ���� ���� ���
	//int A, B;
	//printf("���� �Է��ϼ��� : ");
	//scanf_s("%d", &A);
	//switch (A) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 10:
	//case 12:
	//	B = 31;
	//	break;
	//case 2:
	//	B = 28;
	//	break;
	//default:
	//	B = 30;
	//	break;
	//}
	//printf("%d���� ������ %d���Դϴ�.\n", A, B);

	//1, 2, 3 ������ �𸣰ڴ�
	/*int a;
	printf("��ȣ�� �Է��ϼ��� : ");
	scanf_s("%d", &a);
	if (a == 1)
		printf("dog\n\n");
	else if (a == 2)
		printf("cat\n\n");
	else if (a >= 3)
		printf("chick\n\n");
	else
		printf("I don't know.\n\n");*/

	//1~20���� ���
	/*int cnt = 1;
	while (1) {
		printf("%d ", cnt);
		cnt++;
		if (cnt > 20)
			break;
	}*/

	//�����Է�, �� ���ϱ�
	//int i = 1, sum = 0, num = 0;
	//printf("input number > ");
	//scanf_s("%d", &num);
	//while (i <= num)
	//{
	//	sum = sum + i;
	//	i++;
	//}
	//printf("%d\n", sum);

	//80�� �հ�, �̸� ���հ�, 1~100���� �ƴ� �� �Է� �� ����
	/*int point;
	printf("������? : ");
	scanf_s("%d", &point);
	while (point < 100, point > 0) {
		if (point >= 80)
			printf("�հ�");
		else
			printf("���հ�");
	}*/
	
	//���� �Է� �ϴٰ� 0�Է½� 0���� ��, �հ�, ��� ���

	//1~100 ������ ��� 3�� ��� �� ���
	int i = 1, sum = 0;
	while (i <= 33) {
		for (i = 1; i <= 33; i++) {
			printf("%d\n", 3 * i);
		}
	}
	return 0;
}