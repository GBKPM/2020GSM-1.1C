#include <stdio.h>
int main(void) {
	//26. 엔터(개행) 입력까지 입력한 문자 출력
	//char i = 0;
	//do {
	//	printf("문자를 입력하세요: ");
	//	scanf_s(" %c", &i);
	//	printf("입력한 문자: %c\n", i);
	//} while (i == getchar());
	//27. 0~9반복, 출력 다음과 같이 break사용
	//출력 : 0,1,2,3,4,
	/*int a = 0;
	do {
		printf("%d,", a);
		a++;
		if (a == 5) break;
	} while (a < 10);*/
	//28. 위 문제 continue문 사용
	int a = 0;
	do {
		if (a >= 5) {
			a++;
			continue;
		}
		printf("%d,", a);
		a++;
	} while (a<10);
	
	return 0;
}