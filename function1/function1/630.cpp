#include <stdio.h>
#include <string.h>
void func1() {
	printf("python ");
}
void func2(void) {
	printf("is ");
}
void func3() {
	printf("too ");
}
void func4();
int main() {
	//어떤 기능을 수행하는 독립적인 실행단위
	//하나의 함수로 응용 프로그램을 만드면
	//여러가지 문제가 생김
	//기능별로 함수를 나눠서 작성하고 함수를 필요할 때마다 호출하는 구조적 프로그래밍
	func1();
	func2();
	func3();
	func4();
	scanf_s("%d");
	return 0;
}
void func4() {
	printf("easy ");
}