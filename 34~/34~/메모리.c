#include <stdio.h>
#include <stdlib.h> //malloc, free함수가 선언된 헤더 파일
#include <string.h> //memset 함수가 선언된 헤더 파일
#include <limits.h>
#include <AccCtrl.h>
#include <_dbdao.h>
int main() {
	//int num = 20;
	//int* numPtr;
	//numPtr = &num;
	//int* numPtr2;
	//numPtr2 = malloc(sizeof(int)); //int크기 4바이트만큼 동적 메모리 할당
	//printf("%p\n", numPtr); //변수 num의 메모리 주소 출력
	//printf("%p\n", numPtr2); //새로 할당된 메모리의 주소 출력
	//free(numPtr2); //동적으로 할당한 메모리 해제

	//메모리 값 저장
	//int* numPtr;
	//numPtr = malloc(sizeof(int)); //int크기 4바이트만큼 동적 메모리 할당
	//*numPtr = 10; //포인터 역참조후 값 할당
	//printf("%d\n", *numPtr); //포인터를 역참조하여 메모리에 저장된 값 출력
	//free(numPtr); //동적 메모리 해제

	//메모리 내용 한꺼번에 설정 //memset
	//long long* numPtr = malloc(sizeof(long long)); //long long의 크기 8바이트만큼 //동적 메모리 할당
	//memset(numPtr, 0x27, 8); //numPtr이 가리키는 메모리를 8바이트만큼 0x27로 설정

	//printf("0x%11x\n", *numPtr); //0x2727272727272727: 27이 8개 들어가 있음
	//free(numPtr); //동적으로 할당한 메모리 해제
	
	//널 포인터 사용
	//int* ptr = NULL; //포인터에 NULL 저장
	//printf("%p\n", ptr); //00000000

	////실무에서의 널
	//if (ptr == NULL) //ptr이 널이라면
	//ptr = malloc(1024); //1024바이트만큼 메모리 할당
	
	//문제 메모리 할당하기
	/*int* numPtr1 = malloc(sizeof(int));
	long long* numPtr2 = malloc(sizeof(long long));

	*numPtr1 = INT_MAX;
	*numPtr2 = LLONG_MAX;

	printf("%d %11d\n", *numPtr1, *numPtr2);
	
	free(numPtr1);
	free(numPtr2);*/

	
	return 0;
}