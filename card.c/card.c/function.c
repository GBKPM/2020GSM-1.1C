#include <stdio.h>
int money = 10000;
void balance_inquiry() {
	printf("�ܾ��� %d�Դϴ�.\n", money);
}
void deposit_withdraw() {
	int go;
	printf("������ �ݾ��� �Է��ϼ���.\n");
	scanf_s("%d", &go);
	money = money - go;
}
void saving_account() {
	int mo;
	printf("������ �ݾ��� �Է��ϼ���.\n");
	scanf_s("%d", &mo);
	money = money + mo;
}

int main() {
	int menu, a;
	while (1) {
		printf("\n\n");
		printf("�ƹ� Ű�� ������ ���͸� ġ����.");
		scanf_s("%d", &a);
		if (a == 4)
			goto end;
		system("cls"); // ȭ���� ������ �����
		printf("1.�ܾ� ��ȸ\n2.���� ����\n3.���� ����\n4.����\n");
		printf("�޴���ư�� �Է��ϼ���: ");
		scanf_s("%d", &menu);
		switch (menu)
		{
		case 1:
			balance_inquiry();
			continue;
		case 2:
			deposit_withdraw();
			continue;
		case 3:
			saving_account();
			continue;
		case 4:
			goto end;
		default:
			printf("1~4������ ���ڸ� �Է��ϼ���\n");
			continue;
		}
	}
end:
	printf("�����մϴ�.\n");
	return 0;
}