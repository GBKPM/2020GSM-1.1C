#include <stdio.h>
int main() {
	//1.
	/*int a[2][3] = { 1,2,3,4,5 };
	printf("%d", a[1][1]);
	printf("\n");*/

	//2.
	/*int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 2; j++) {
			printf("Hello World\n");
		}
	}
	printf("\n");*/

	//3.
	/*printf("%f\n", (float)(5 / 2));
	printf("%f\n", 5.0 / 2);
	printf("%f\n", (float)5 / 2);
	printf("\n");*/

	//4.
	/*int num = 1032, nmg = 1;
	while (num > 0) {
		nmg = num % 10;
		num = num / 10;
		printf("%d", nmg);
	}
	printf("\n");*/

	//5.
	/*int arr[10] = { 10,20,30,40,50,60,70,80,90,100 };
	int i, cnt = 0;
	for (i = 0; i < 10; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
			cnt++;
	}
	printf("%d", cnt);*/

	//6.
	/*char a = 'A';
	int num = 0;
	num = a + sizeof(num);
	printf("%c", num);*/

	//7.
	/*int arr[10] = { 2,7,5,9,1 };
	int i, cnt = 0;
	for (i = 0; i < 5; i++) {
		if (arr[i] <= 5)
			cnt++;
	}
	printf("%d", cnt);*/

	//8.
	/*int arr1[4] = { 1,1,0,0 };
	int arr2[4] = { 0,1,0,1 };
	int result[4] = { 0, };
	int i;
	for (i = 0; i < 4; i++) {
		if (arr1[i] > arr2[i] || arr1[i] < arr2[i])
			result[i] = 1;
	}
	for (i = 0; i < 4; i++) {
		printf("%d\t", result[i]);
	}*/

	//9.
	/*int a, b;
	scanf_s("%d%d", &a, &b);
	printf("%d\n", a << b);*/

	//10.
	/*int i = -1;
	int arr[5] = { 15,13,8,1,12 };
	while (i < 4) {
		i++;
		switch (arr[i] / 2) {
		case 0: printf("a");
		case 1: printf("n");
		case 2: printf("g"); break;
		case 3: printf("k"); break;
		case 4: printf("j"); break;
		case 5: printf("u"); break;
		default: break;
		}
	}*/

	//11.
	/*int x = 5, a, b = 5;
	a = ++x * x;
	b = x * 10;
	x = b - a;
	printf("%d", x);*/

	//12.
	/*int i, a = 0;
	for (i = 1; i < 10; i++) {
		if (i % 2 == 0)
			a++;
	}
	printf("%d", i + a);*/

	//13.
	/*int n = 1;
	while (n <= 10) {
		printf("%d  %d\n", n, n * n);
		n++;
	}
	printf("\n");
	for (n = 1; n <= 10; n++) {
		printf("%d  %d\n", n, n * n);
	}*/
	return 0;
}