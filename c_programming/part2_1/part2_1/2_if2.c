#include<stdio.h>
int main() {
	//if ~ else if ~ else ������ �Է¹޾� ��������ϱ�
	//90���̻��̸� A, 80���̻��̸� B, 70���̻��̸� C, 70���̸��̸� ���
	/*int point;

	printf("test? : ");
	scanf_s("%d", &point);

	if (point == 100)
		printf("����ؿ�!!!");
	else if (point >= 90)
		printf("A\n\n");
	else if (point >= 80)
		printf("B\n\n");
	else if (point >= 70)
		printf("C\n\n");
	else
		printf("���\n\n");*/
		// 0~100�������� ������ �Է¹޾Ƽ� ��������ϱ�
		// 0~100 �̿��� ������ �ԷµǸ� "������ 0~100�� ���̸� �Է��ϼ���.
	//int score;
	//printf("input score : ");
	//scanf_s("%d", &score);
	//if (score>=0 && score<=100)
	//	printf("%d���̸� ������~~\n", score);
	//else
	//	printf("������ 0~100�� ���̸� �Է��ϼ���");
	//if (score == 100)
	//	printf("A!!! ����ؿ�!!!");
	//else if (score >= 90)
	//	printf("A\n\n");
	//else if (score >= 80)
	//	printf("B\n\n");
	//else if (score >= 70)
	//	printf("C\n\n");
	//else if (score < 0);
	//printf("����Ͻñ⸦...\n\n");
		//¦�� Ȧ���� �����Ͽ� ����ϰ�, ¦�� ���� 100�̻��̸� "100���� ũ��" ���
	// Ȧ�� ���� 100���� ������ "100���� �۴�"���

	int num;
	printf("input number : ");
	scanf_s("%d", &num);
	if (num % 2 == 0)
		printf("EVEN\n");
	if (num > 100)
		printf("100���� Ů�ϴ�.\n");
	else
		printf("ODD\n");
	if (num < 100)
		printf("100���� �۽��ϴ�.\n");
	

	return 0;
}