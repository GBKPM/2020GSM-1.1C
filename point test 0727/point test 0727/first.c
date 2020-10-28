#include <stdio.h>
int add(int* px, int* py) {
	return *px + *py;
}
int main() {
	int x = 3, y = 4;
	printf("%d\n", add(&x, &y));
}