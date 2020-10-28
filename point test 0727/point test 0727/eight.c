#include <stdio.h>
int index(int *plist, int *pa) {
	for (int i = 0; i < 10; i++) {
		if (plist[i] == pa) {
			return i;
		}
	}
}

int main() {
	int list[10] = { 100,200,300,400,500,600 };
	int a, b;
	scanf_s("%d", &a);
	b = index(list, a);
	if (b == -1)
		printf("찾는 값이 없습니다.");
	else
		printf("%d", b);
	return 0;
}