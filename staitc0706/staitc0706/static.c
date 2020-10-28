#include <stdio.h>
void auto_func() {
	int a = 0;
	a++;
	printf("%d\n", a);
}
void static_func()
{
	static int a;
	a++;
	printf("%d\n", a);
}
int main() {
	int i;
	printf("지역변수 사용한 함수 \n");
	for (i = 0; i < 3; i++)
		auto_func(); //지역변수 사라졌다 생겼다 함
    printf("static 지역변수 사용한 함수 \n");
    for (i = 0; i < 3; i++)
       static_func(); //static은 계속 저장
	return 0;
}