#include <stdio.h>
int main() {
	//교과서 98쪽
	//int i = 13, j = 5;
	//if (-1) putchar('A');
	//if (1) putchar('B');
	//if (13) putchar('C');
	//if (0) putchar('D');
	//if (i < j) {
	//	putchar('E');
	//	putchar('F');
	//}
	//if (i > j) 
	//	putchar('G');
	//putchar('H');

	//puts("");
	//puts("");
	//
	////교과서 99쪽
	//int standard = 80, score = 76;
	//if (standard < score)
	//	putchar('P');
	//else
	//	putchar('F');

	//puts("");
	//puts("");
	//
	////교과서 100쪽
	//standard = 173;
	//int height = 168;
	//if (standard > height)
	//	printf("평균 이하\n");
	//else if (standard == height)
	//	printf("평균\n");
	//else
	//	printf("평균 이상\n");

	//교과서 101쪽
	int score;
	char grade;
	puts("점수를 입력하세요(1~100)");
	putchar('>');
	scanf_s("%d", &score);
	switch (score / 10) {
	case 10:
	case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}
	printf("학점은 %c입니다.", grade);
	return 0;
}