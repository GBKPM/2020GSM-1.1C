#include<stdio.h>
void input();
void output();
void find();
int main() {
	//메뉴프로그램
	char ans;
	printf("1:입력\n");
	printf("2:출력\n");
	printf("3:검색\n");
	printf("4:종료\n");
	printf("선택하세요. >>   \n");
	scanf_s("%c%*c", &ans);

	switch (ans) {
	case '1':input();
		break;
	case '2':output();
		break;
	case '3':find();
		break;
	case '4':printf("END");
		break;
	}

	return 0;
}
	void input() {
		printf("입력 함수...\n");
	}
	void output() {
		printf("출력 함수...\n");
	}
	void find() {
		printf("검색 함수...\n");
	}
