#include <stdio.h>
int main() {
	/*printf("\"""C:\\Download\\hello.cpp""\"\n");
	printf("\\n");*/

	/*int t, a = 0, b = 0;
	printf("�� �Է�: ");
	scanf_s("%d", &t);
	a = t / 60;
	b = t % 60;
	printf("%d/%d", a, b);*/
	
	/*int a, b;
	printf("input 2 number >> ");
	scanf_s("%d %d", &a, &b);

	if (a % 2 == 0) printf("¦��+");
	else printf("Ȧ��+");

	if (b % 2 == 0) printf("¦��=");
	else printf("Ȧ��=");

	if ((a + b) % 2 == 0) printf("¦��");
	else printf("Ȧ��");*/

	/*int a, b, c, i;
	printf("�ͳ� ���� 3�� �Է�>> ");
	scanf_s("%d %d %d", &a, &b, &c);
	while (1) {
		if (a <= 170) {
			printf("CRASH");
			break;
		}
		else printf("PASS ");

		if (b <= 170) {
			printf("CRASH");
			break;
		}

		if (c <= 170) {
			printf("CRASH");
			break;
		}
	}*/

	/*int t, s, sum = 0, temp = 0;
st:
	printf("���� ���� ���ð�: ");
	scanf_s("%d", &t);
	if (t > 90) {
		printf("90�� �̳��� ������ �ּ���\n");
		goto st;
	}
	printf("�츮���� ����: ");
	scanf_s("%d", &s);
	
	temp = t / 5;
	sum = s + temp;
	printf("�츮���� ���� ������ %d�� �Դϴ�.", sum);*/

	/*int a, b, c;
	printf("input 3 number>> ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > c) {
		if (a > b) {
			if (b > c) printf("%d", b);
			else printf("%d", c);
		}
		else printf("%d", a);
	}
	else if (a < c) {
		if (b < c) {
			if (a > b) printf("%d", b);
			else printf("%d", a);
		}
	}
	else  if (b < c) printf("%d", c);
	else printf("%d", b);*/

	/*char a[20];
	double d;
	int b;
	char c;
	printf("�̸� ���� �μ��ڵ� ����Ű");
	getchar(a);
	scanf_s("%d", &b);
	scanf_s("%c", &c);
	scanf_s("%f", &d);
	printf("%s\n", a);
	printf("%d\n", b);*/
	
	int a = 0;
	int sum = 0;
	while (1) {
		a++;
		printf("%d ", a);
		sum += a;
		if (a == 10000) break;
	}
	printf("\n%d", sum);
	return 0;
}