//포인터->메모리 주소 저장
//[형식] 자료형 * 변수이름
//int* ip;
#include <stdio.h>
int main() {
	//포인터 자료형 간접참조
	int x = 10;
	int* px;
	px = &x;
	*px = 20;
	printf("x : %d\n", x);
	printf("*px : %d\n", *px);
	printf("&x : %p\n", &x);
	printf("px: %p\n", px);
	*px = 20; //x에 20을 넣고
	printf("x : %d, *px : %d\n", x, *px);
	
	double dNum, * dp;
	dNum = 7.5;
	//dNum의 값과 주소(%p)찍기
	printf("%f %p", dNum, &dNum);
	//포인터 주소에 변수의 주소 할당
	dp = &dNum;
	//포인터를 이용한 값과 주소 찍기
	printf("%f %p", *dp, dp);
	
	
	return 0;
}
