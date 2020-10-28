#include <stdio.h>
int main() {
	//1.
	//int i = 1;
	//while (i != 100) {
	//	if (i % 9 == 0) printf("%d\n", i);
	//	i++;
	//}

	//2.
	//int i = 0, sum = 0, a;
	//double avg;
	//while (i != 5) {
	//	printf("input number >> ");
	//	scanf_s("%d", &a);
	//	sum += a;
	//	i++;
	//}
	//avg = (double)sum / 5;
	//printf("합: %d\n평균: %.2f\n", sum, avg);

	//3.
	//int ga = 1;
	//double l = 0;
	//do {
	//	l = l + 3.7854;
	//	printf("%d갤런은 %.4f리터\n", ga, l);
	//	ga++;
	//} while (ga != 101);

	//4.
	/*int sum = 0, n = 2;
	do {
		sum += n ^ 2;
		n = n + 2;
	} while (sum > 5000);
	printf("%d", n);*/

	//5.
	//int x = 252, y = 105;
	//while (x != y) {
	//	if (x > y)
	//		x = x - y;
	//	else y = y - x;
	//}
	//printf("%d", x);

	//5.2.
	/*int x = 252, y = 105;
	while (x % y != 0) {
		if (x > y)
			x = x - y;
		else y = y - x;
	}
	printf("%d", y);*/
	//6.
	//int a;
	//printf("input number >> ");
	//scanf_s("%d", &a);
	//if (a % a == 0 && a % 1 == 0)
	//	printf("소수입니다.\n");
	//else 
	//	printf("소수가 아닙니다.\n");


	//7.
	int i, temp = 0;
	for (i = 50; i <= 100; i++) {
		if ((i % 3 == 1) && (i % 5 == 4) && i % 2 == 0 && (i / 10 + i % 10) % 2 == 0)
			printf("%d\n", i);
	}
	pr();	
	return 0;
}
int pr(a) {
	printf("%d", a);
}