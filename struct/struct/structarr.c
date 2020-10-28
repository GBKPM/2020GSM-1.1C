#include <stdio.h>
struct Point2D {
	int x;
	int y;
};
int main() {
	struct Point2D p[100];
	
	p[0].x = 20;
	p[0].y = 30;
	p[1].x = 40;
	p[1].y = 50;
	p[2].x = 60;
	p[2].y = 70;

	printf("%d %d\n", p[0].x, p[0].y);
	printf("%d %d\n", p[1].x, p[1].y);
	printf("%d %d\n", p[2].x, p[2].y);
	return 0;
}