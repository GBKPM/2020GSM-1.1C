#include <stdio.h>

//void pint_Line() {
//	printf("======================\n");
//}


int main() {
	//함수 : 특정한 작업을 수행하기 위한 프로그램 단위
	//종류 : 표준라이브러리 함수(main(), printf(),scanf_s()...) vs 사용자정의 함수 : 사용자가 직접 정의해서 사용하는 함수
	//함수 특징 : 이름, 입력값(매개변수 있거나, void), 반환형
	pint_Line(); //함수호출
	pint_Line();
	pint_Line();

	return 0;
}
void pint_Line() { //함수원형(프로토타입 선언)
	printf("======================\n");
}