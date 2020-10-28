#include <stdio.h>
int main() {
	//int i;
	//for (i = 1; i <= 100; i++) {
	//	if (i % 3 == 0 && i % 5 == 0)
	//		printf("FizzBuzz\n"); //맨 먼저 쳐야함
	//	else if (i % 3 == 0)
	//		printf("Fizz\n");
	//	else if (i % 5 == 0)
	//		printf("Buzz\n");
	//	else
	//		printf("%d\n", i);
	//}

	////논리연산자 사용x
	//for (int i = 1; i <= 100; i++) {
	//	if (i % 15 == 0)
	//		printf("FizzBuzz\n"); //이부분이 차이남
	//	else if (i % 3 == 0)
	//		printf("Fizz\n");
	//	else if (i % 5 == 0)
	//		printf("Buzz\n");
	//	else
	//		printf("%d\n", i);
	//}

	//코드 단축(삼항)
	for (int i = 0; ++i <= 100;)
		printf(i % 3 ? i % 5 ? "%d\n" : "Buzz\n" : i % 5 ? "Fizz\n" : "FizzBuzz\n", i);
	return 0;
}