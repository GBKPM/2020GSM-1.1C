#include <stdio.h>
int main() {
	//자료형(데이터타입)
	// 1. 정수형 : char(1byte), short(2byte), int(4byte), long(4byte)
	// 2. 실수형 : float(4byte), double(8byte)
	// 3. void형 : 함수 사용

	//변수 : 식별자
	// 1. 다양한 값을 저장할 수 있는 이름이 부여된 메모리 기억공간
	// int age; //메모리에 필요한 공간 할당
	//변수명
	// -1. 알파벳, 숫자(첫글자로 사용은 안됨), 밑줄 구성
	// 2. 예약어로 변수명을 할 수 없음
	// 3. 사용하기 전에 미리 선언해야 함
	// 4. 영문자의 대소문자를 구분함. (temp, Temp 서로 다른 변수)
	// 5. 변수명에 공백이나 한그릉ㄹ 사용할 수 없음.

	//대입연산자(=) : 변수에 값을 저장할 때 사용
	
	/*int temp=0;
	printf("%d\n", temp);

	int num = 6; //변수선언과 초기화
	double height = 180.0;
	float weight = 50.6f;

	printf("%d %d\n", sizeof(num), sizeof(int));

	char cha = 'a';
	char chA = 'A';
	printf("%c %c\n", cha, chA);
	printf("%d %d\n", cha, chA);
	printf("%c\n", 'a' - 32);
	printf("%c\n", 'A' + 33);

	printf("%p %d\n", &num, num);

	//대문자를 소문자로 변환
	*/
	char cha;
	printf("대문자를 소문자로 변환 합니다.\n대문자를 입력하세요 >");
	scanf_s("%c", &cha);
	printf("%c -> %c", cha, cha + 32);
    return 0;
}