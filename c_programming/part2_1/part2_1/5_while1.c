#include<stdio.h>
#include<Windows.h>
void While_One() {
	printf("\n\nwhile 1부터 10까지 출력하기\n\n");
	int cnt = 1;
	while (cnt <= 10) {
		printf("%d", cnt);
		cnt++;
	}
}
void While_Two() {
	printf("\n\n1부터 100까지의 합을 구하기\n\n");
	int i = 1, sum = 0; //누적변수
	while (i <= 100) {
		sum = sum + i; //sum+=i;
		i++; //i=i+1;
	} 
	printf("1부터 100까지의 합 = %d\n", sum);
}
void While_Three() {
	printf("\n\n1~100까지의 수 중 9의 배수 출력하기\n\n");
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
	printf("\n\n키보드로부터 문자하나를 입력받아 출력한다.\n q가 입력되면 그 동안 입력한 문자의 횟수를 출력하고 종료하는 프로그램\n");
	char ch = 0;
	int cnt = 0;

	while (ch != 'q') {
		printf("input char >> ");
		scanf_s("%*c%c", &ch);
		cnt++;
	}//while 반복문의 끝
	printf("cnt : %d\n\n", cnt);
}
void While_Five() {
	printf("\n\nA부터 Z까치 출력하는 프로그램");
	char ch = 'A';
	while (ch <= 'Z') {
		printf("%c ", ch++);
	}
	printf("\n");
}
int main() {
	int select;

start:
	printf("\n\n=====반목문예제=====\n");
	printf("0:종료\n");
	printf("1. while문_1\n");
	printf("2. while문_2\n");
	printf("3. while문_3\n");
	printf("4. while문_4\n");
	printf("5. while문_5\n");
	printf("=================\n");

	printf("선택하세요. >>   \n");
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
	printf("입력 함수...\n");
}
void output() {
	printf("출력 함수...\n");
}
void find() {
	printf("검색 함수...\n");
}