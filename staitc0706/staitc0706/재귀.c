//���(��ȯ)
//�ݺ��� ǥ�� ����, �ڷᱸ������ ���� ��� 
//���� ���� �ʿ�
#include <stdio.h>
//void hello(int a) {
//	if (a == 0) return;
//	printf("Hello\n");
//	hello(a - 1);
//}
//int main() {
//	hello(5);
//	return 0;
//}

//void hello(int i) {
//	if (i == 11) return;
//	printf("%d ", i);
//	hello(i + 1);
//}
//int main() {
//	hello(1);
//	return 0;
//}

//void call(int a) {
//	if (a == 0) return;
//	printf("%d ", a);
//	call(a - 1);
//}
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	call(n);
//	return 0;
//}

//int call(int a, int b) {
//	if (b == a) return 1;
//	else return b + call(a, b - 1);
//}
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	printf("%d", call(1, n));
//	return 0;
//}

//int call(int a) {
//	if (a==1) return 1;
//	else return a * call(a - 1);
//}
//int main() {
//	int n;
//	scanf_s("%d", &n);
//	printf("%d", call(n));
//	return 0;
//}

//�Ǻ���ġ ����
//int fibo(int a) {
//	if (a == 1 || a == 2) return 1;
//	else return fibo(a - 1) + fibo(a - 2);
//}
//int main() {
//	int n;
//	scanf_s("%d", &n);
//    for (int i = 1; i <= n; i++)
//        printf("%d ", fibo(i));
//	return 0;
//}

//�������� 2������ ����ϱ�
void dodo(int n)
{
    if (n / 2 == 0) return;
       dodo(n / 2);
        printf("%d", n % 2);
}

int main()
{
    int n;
    printf("integer = ");
    scanf_s("%d", &n);
    dodo(n);
    return 0;
}