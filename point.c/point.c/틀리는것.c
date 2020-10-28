#include <stdio.h>
int main() {
	//1. 포인터를 선언하고 주소를 대입하고 사용하라.
	int* prt, num;
	*ptr = 15;

	//2. 포인터 자료형을 자신이 참조할 변수와 같은 자료형으로 선언
	double dNum = 15.12345;
	int* ptr = &dNum;
	printf("dNum:%d\n", *ptr);
				//%f	(double*)

	//3. 일반 변수는 간접참조 할 수 없다.
	int num;
	*num = 150;

	//4. 포인터 연산은 정수형 연산을 사용한다.
	int* ptr, num[5];
	ptr = &num; //배열의 이름이 주소이므로 &를 쓰지말기
	ptr = ptr + 3.5; //정수형 연산만 가능
	ptr = ptr * 3; //* % / 는 안된다.

	//5. 포인터 변수를 초기화하자.
	int* ptr; //초기화되지 않으면 포인터변수에는 쓰레기값
	*ptr = 100; //쓰레기주소에 값을 할당하면 큰 문제 발생

	//NULL로 초기화!!
	int* ptr = NULL, num;
	if (ptr != NULL)
		*ptr = 100;
	else
		ptr = &num;
	return 0;
}