#include <stdio.h>
int main() {
	//대입연산자와 데이터 교환
	// = : 대입연산자
	// 1-value = r-value : r-value값을 1-value에 대입(저장)
	//1-value에는 저장공간을 갖는 것들이 와야함(변수, 배열 등)

	int x = 45, y = 98;
	int temp;
	printf("before x = %d, y = %d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("after x = %d,y = %d\n", x, y);

	//복합대입연산자
	// x=x+y x+=y
	// x=x-y x-=y
	// x=x*y x*=y
	// x=x/y x/=y

	return 0;
}