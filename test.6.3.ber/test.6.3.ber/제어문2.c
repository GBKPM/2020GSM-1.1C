#include <stdio.h>
int main() {
	//17. �⺻��� 1000�� ������ ���� ���� ��� ���
	//0~3�� 100% || 4~13�� 50% || 14~19�� 25% || 20�� �̻� %0
	//int age, fee = 1000;
	//printf("���̸� �Է��ϼ���: ");
	//scanf_s("%d", &age);
	//if (age <= 19 && age >= 14) fee = fee * 75 / 100;
	//else if (age <= 13 && age >= 4) fee = fee * 50 / 100;
	//else if (age >= 0 && age <= 3) fee = 0;
	//printf("����� %d�� �Դϴ�.\n\n", fee);
	//printf("0~3�� ������ 100%%\n4~13�� ������ 50%%\n14~19�� ������ 25%%\n20�� �̻� ������ 0%%");

	//�������
	//���� �� ������ ������ �� �� �� ������.
	//�ӵ��� ������
	int age, fee = 1000;
	double rate = 0.0;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);
	if (age <14) {
		if (age < 4) rate = 0;
		else rate = 0.5;
	}
	else {
		if (age < 20) rate = 0.75;
		else fee = 1.0;
	}
	printf("�������: %d��\n", (int)(fee * rate));

	return 0;
}