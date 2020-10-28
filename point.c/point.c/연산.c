#include <stdio.h>
int main() {
	//int* p;
	//*p++; //주소
	//(*p)++; //값
	//*++p; //주소
	//++* p; //값


	//포인터 증감 연산
	int i = 10;
	int* pi = &i;
	printf("i=%d, pi=%p\n", i, pi); //원래
	(*pi)++; //값 증가
	printf("i=%d, pi=%p\n", i, pi); //값 증가 이후

	printf("\n\n");

	printf("i=%d, pi=%p\n", i, pi); //원래
	*pi++; //주소 증가 +4(int자료형 크기만큼)
	printf("i=%d, pi=%p\n", i, pi); //주소 증가 이후
}