#include<stdio.h>
#include<Windows.h>
void While_One() {
	printf("\n\nwhile 1���� 10���� ����ϱ�\n\n");
	int cnt = 1;
	while (cnt <= 10) {
		printf("%d", cnt);
		cnt++;
	}
}
void While_Two() {
	printf("\n\n1���� 100������ ���� ���ϱ�\n\n");
	int i = 1, sum = 0; //��������
	while (i <= 100) {
		sum = sum + i; //sum+=i;
		i++; //i=i+1;
	} 
	printf("1���� 100������ �� = %d\n", sum);
}
void While_Three() {
	printf("\n\n1~100������ �� �� 9�� ��� ����ϱ�\n\n");
	int i = 1;
	while (i <= 100) {
		if (i % 9 == 0)
			printf("%d ", i);
		i++;
	}
	printf("\n\n");
	putchar('\n');
}
void While_Four() {
	printf("\n\nŰ����κ��� �����ϳ��� �Է¹޾� ����Ѵ�.\n q�� �ԷµǸ� �� ���� �Է��� ������ Ƚ���� ����ϰ� �����ϴ� ���α׷�\n");
	char ch = 0;
	int cnt = 0;

	while (ch != 'q') {
		printf("input char >> ");
		scanf_s("%*c%c", &ch);
		cnt++;
	}//while �ݺ����� ��
	printf("cnt : %d\n\n", cnt);
}
void While_Five() {
	printf("\n\nA���� Z��ġ ����ϴ� ���α׷�");
	char ch = 'A';
	while (ch <= 'Z') {
		printf("%c ", ch++);
	}
	printf("\n");
}
int main() {
	int select;

start:
	printf("\n\n=====�ݸ񹮿���=====\n");
	printf("0:����\n");
	printf("1. while��_1\n");
	printf("2. while��_2\n");
	printf("3. while��_3\n");
	printf("4. while��_4\n");
	printf("5. while��_5\n");
	printf("=================\n");

	printf("�����ϼ���. >>   \n");
	scanf_s("%d", &select);

	switch (select) {
	case 1:
		system("cls");
		While_One();
		system("pause");
		system("cls");
		goto start;
		break;
	case 2:
		system("cls");
		While_Two();
		system("pause");
		system("cls");
		goto start;
		break;
	case 3:
		system("cls");
		While_Three();
		system("pause");
		system("cls");
		goto start;
		break;
	case 4:
		system("cls");
		While_Four();
		system("pause");
		system("cls");
		goto start;
		break;
	case 5:
		system("cls");
		While_Five();
		system("pause");
		system("cls");
		goto start;
		break;
	default:
		printf("END");
		break;
	}

	return 0;
}
void input() {
	printf("�Է� �Լ�...\n");
}
void output() {
	printf("��� �Լ�...\n");
}
void find() {
	printf("�˻� �Լ�...\n");
}