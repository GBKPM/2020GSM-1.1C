#include <stdio.h>
int main() {
	//라인버퍼입력함수 
	//scnaf_s(), getchar(), get_s()
	//한 줄 전체가 입력될 때까지 기다림
	//를 치면 -> 입력버퍼의 값을 변수에 저장
	//는 입력버퍼에 그대로 존재 -> 원치 않는 문제가 발생
	// 입력함수는 입력버퍼로부터 데이터를 읽어들이는데
	//입력버퍼에 남겨진 것이 있을 때는 남겨진 데이터를 읽기 때문에

	char gender, attend;
	char name[20];

	puts("gender(M/F) : ");
	scanf_s("%c", &gender); // gender = getchar();
	puts("attend(Y/N): ");
	scanf_s("%*c%c", &attend); //%*c =getchar() 한 문자 공백 제거
	puts("name : ");
	scanf_s("%s", name, sizeof(name));

	printf("%c %c %s\n", gender, attend, name);

	return 0;
}