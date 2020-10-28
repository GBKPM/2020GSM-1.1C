//#include<stdio.h>
//int main() {
//	int score;
//	printf("input : ");
//	scanf_s("%d", &score);
//	if (score>=0 && score<=100)
//		printf("입력한 정수는 0에서 100사이에 있습니다.\n");
//	else
//		printf("입력한 정수는 0~100사이의 수가 아닙니다.");
//	return 0;
//}



#include<stdio.h>
int main() {
	int A, B;
	printf("월을 입력하세요 : ");
	scanf_s("%d", &A);
	switch (A) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 10:
	case 12:
		B = 31;
		break;
	case 2:
		B = 28;
		break;
	default:
		B = 30;
		break;
	}
	printf("%d월의 일수는 %d일입니다.\n", A, B);
	return 0;
}