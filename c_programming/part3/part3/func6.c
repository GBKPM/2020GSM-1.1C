#include <stdio.h>

int get_Max(int x, int y) {
	if (x >= y) return x;
	else return y;
}

int main() {
	//두 수 중에서 큰수를 찾는 함수
	int a, b, c;
	int max;
	printf("input 2 number>> ");
	scanf_s("%d%d", &a, &b);
	max = get_Max(a, b);
	printf("두 수 중 큰 수는 %d입니다.\n", max);
	
	printf("input 3 number>> ");
	scanf_s("%d%d%d", &a, &b, &c);
	max = get_Max(get_Max(a, b), c);
	printf("세 수 중 큰 수는 %d입니다.\n", max);
	
	return 0;

}