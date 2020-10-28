#include <stdio.h>
int money = 10000;
void balance_inquiry() {
	printf("잔액은 %d입니다.\n", money);
}
void deposit_withdraw() {
	int go;
	printf("인출할 금액을 입력하세요.\n");
	scanf_s("%d", &go);
	money = money - go;
}
void saving_account() {
	int mo;
	printf("저축할 금액을 입력하세요.\n");
	scanf_s("%d", &mo);
	money = money + mo;
}

int main() {
	int menu, a;
	while (1) {
		printf("\n\n");
		printf("아무 키나 누르고 엔터를 치세요.");
		scanf_s("%d", &a);
		if (a == 4)
			goto end;
		system("cls"); // 화면을 깨끗이 지운다
		printf("1.잔액 조회\n2.예금 인출\n3.예금 저축\n4.종료\n");
		printf("메뉴버튼을 입력하세요: ");
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
			printf("1~4사이의 숫자를 입력하세요\n");
			continue;
		}
	}
end:
	printf("종료합니다.\n");
	return 0;
}