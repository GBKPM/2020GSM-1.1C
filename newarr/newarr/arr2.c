#include <stdio.h>
int main() {
	//2진수와 8진수 

	//2진수
	//int dec = 0;
	//int bin[20] = { 0 };
	//int p = 0, i;
	//printf("십진수 입력: ");
	//scanf_s("%d", &dec);
	//while (1) {
	//	bin[p] = dec % 2;
	//	p++;
	//	dec = dec / 2;
	//	if (dec == 0) break;
	//}
	//printf("2진수: ");
	//for (i = p - 1; i >= 0; i--)
	//	printf("%d", bin[i]);

	//2진수 1101을 10진수로 변환
	/*int p = 0, i, dec = 0, bin[4] = { 1,1,0,1 };
	for (i = sizeof(bin) / sizeof(int) - 1; i >= 0; i--) {
		if (bin[i] == 1)
			dec += 1 << p;
		p++;
	}
	printf("%d\n", dec);*/

	//8진수 //codeup
	//int dec = 0, p = 0, i;
	//int bin[20] = { 0 };
	//printf("십진수 입력: ");
	//scanf_s("%d", &dec);
	//while (1) {
	//	bin[p] = dec % 8;
	//	p++;
	//	dec = dec / 8;
	//	if (dec == 0) break;
	//}
	//printf("8진수: ");
	//for (i = p - 1; i >= 0; i--)
	//	printf("%d", bin[i]);
	return 0;
}