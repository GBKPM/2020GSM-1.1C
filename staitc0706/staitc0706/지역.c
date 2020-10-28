#include <stdio.h>
int main() 
{
	int x = 10;
	int y = 20;
	for (int i = 0; i < 5; i++)
		printf("%d", i);
	printf("%d %d %d\n", x, y, i);
	//i가 for문 안에서만 선언된 지역변수이므로 컴파일 에러가 난다.
	 
	return 0;
}