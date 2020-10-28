//#include <stdio.h>
//int call(int a, int b);
//int main() {
//	int n, m, re;
//	scanf_s("%d %d", &n, &m);
//	re = call(n, m);
//	printf("%d", call(n, m));
//	return 0;
//}
//int call(int a, int b) {
//	return (b > a) ? a : b;
//}

//5¹ø
#include <stdio.h>
int main() {
	int re;
	int kor[5];
	int i;
	for (i = 0; i < 5; i++)
		scanf_s("%d", &kor[i]);
	re = get_Min(kor, 5);
	printf("%d", re);
}
int get_Min(int kor[], int n) {
	int min = kor[0];
	for (int i = 0; i < 4; i++) {
		if (min > kor[i + 1])
			min = kor[i + 1];
	}
	return min;
}