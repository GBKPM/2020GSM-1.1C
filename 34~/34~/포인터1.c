#include <stdio.h>
int main() {
	//int num = 10;
	//printf("%p\n", &num); //메모리 주소 출력, 16진수, %p나 %x로 출력, 실행할 때마다 달라짐

	//포인터 변수 선언하기
	//int* numPtr;
	//int num = 10;
	//numPtr = &num;
	//printf("%p\n", numPtr);
	//printf("%p\n", &num);

	//포인터 변수 역참조
	/*int* numPtr;
	int num = 10;
	numPtr = &num;
	printf("%d", *numPtr);*/

	//역참조 후 할당
	//int* numPtr;
	//int num = 10;
	//numPtr = &num; //num의 메모리 주소에 접근하여 20을 저장

	//*numPtr = 20; //역참조 연산자로 메모리 주소에 접근하여 20저장

	//printf("%d\n", *numPtr); //20: 역참조 연산자로 메모리 주소에 접근하여 값을 가져옴
	//printf("%d\n", num); //20: 실제	num값도 바뀜

	//이중 포인터 사용
	//int* numPtr1;
	//int** numPtr2;
	//int num = 10;

	//numPtr1 = &num; //num의 메모리 주소 저장
	//
	//numPtr2 = &numPtr1; //numPtr1의 메모리 주소 저장

	//printf("%d\n", **numPtr2); //20: 포인터를 두 번 역참조하여 num의 메모리 주소에 접근

	//포인터와 주소연산자 사용
	int* numPtr;
	int num1 = 10, num2 = 20;

	numPtr = &num1;
	printf("%d\n", *numPtr);

	numPtr = &num2;
	printf("%d\n", *numPtr);
	return 0;
}