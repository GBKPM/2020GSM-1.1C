#include <stdio.h>
int main() {
	//10. !(Not)������ ���� ���� �ٲٱ�
	//int a;
	//printf("���� �Է�(0�̸� 1 �ƴϸ� 0): ");
	//scanf_s("%d", &a);
	//printf("������?: %d\n", a != 0 ? 0 : 1);

	//11. ���� Ű �Է�, ���� 20�̻� 30���� ���ÿ� Ű 150�̻� �հ�
	//int age, t;
	//double temp;
	//printf("���� �Է�: ");
	//scanf_s("%d", &age);
	//printf("Ű �Է�: ");
	//scanf_s("%d", &t);
	//temp = (age >= 20 && age <= 30) && t >= 150 ? printf("�հ�") : printf("���հ�");
	//12. Ű �Է�, 150�̻� �հ� �ƴϸ� ���հ�(���׿�����)
	int cn;
	double temp;
	printf("Ű �Է�: ");
	scanf_s("%d", &cn);
	temp = cn >= 150 ? printf("�հ�") : printf("���հ�");
	return 0;
}