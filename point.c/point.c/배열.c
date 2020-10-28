#include <stdio.h>
int main() {
	//배열 포인터로 접근
	/*int cnt[6] = { 100,200,300,400,500 }, i;
	int* ptr;
	ptr = cnt; //관계설정
	printf("%p %p %p\n\n", cnt, &cnt[0], ptr); //주소 찍기
	for (i = 0; i < 6; i++) {
		printf("%d번째\n", i);
		printf("%d\t", cnt[i]); //배열 이용 cnt찍기
		printf("%d \t%p\t", *(cnt+i), *(cnt+i)); //배열을 포인터처럼 이용
		printf("%d\t", ptr[i]); //포인터이용 배열처럼 찍기
		printf("%d\n", *(ptr+i)); //포인터를 포인터로 찍기
	}*/


	//포인터로 배열 만들기
	int arr[5] = { 0 };
	int* pa = arr;
	for (int i = 0; i < 5; i++) {
		*(pa + i) = (i + 1) * 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t", *pa++);
	}


	//배열은 포인터 상수
	//시작주소 변경 허용 X

	//문자배열
	char str[20] = "started C"; //읽기 쓰기 가능
	char* msg = "advanced C";  //문자열 변경 불가
	str[0] = 'S'; //가능
	msg[0] = 'A'; //불가능
	
	return 0;
}