#include <stdio.h>
int num1; //초기화를 하지 않아도 0이 들어감
int num2;
void call() {
	num1 = 10;
	num2 = num1 * 2;
	printf("%d\n", num2);
}
int main()
{
	call();
	printf("main : %d\n", num2);
	return 0;
}