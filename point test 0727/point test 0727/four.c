#include <stdio.h>
void convert(double *pg, double *ps, int n) {
	for (int i = 0; i < n; i++) {
		ps[i] = (pg[i] * 100) / 4.3;
	}
}
int main() {
	double grades[10] = { 2.3, 3.4, 4.3, 3.5, 4.0, 1.5, 3.6, 4.3, 2.4, 4.1 };
	double scores[10] = { 0.0 };
	convert(grades, scores, 10);
	for (int i = 0; i < 10; i++) {
		printf("%.2f\t", scores[i]);
	}
}