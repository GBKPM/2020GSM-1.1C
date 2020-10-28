#include <stdio.h>
void swap(char **app, char**bpp) {
	char* temp;
	temp = *app;
	*app= *bpp;
	*bpp = temp;
	
}
int main() {
	/*char str[] = "apple";
	char* p = str;
	//char fr[3][10] = { "apple", "banana", "carrot" };
	char *fr[3] = { "apple", "banana", "carrot" };
	for (int i = 0; i < 3; i++) {
		printf("%s\n", fr[i]);
	}*/

	/*int a = 10;
	int* p = &a;
	int** pp = &p;
	int*** ppp = &pp;
	printf("%d\n", a);
	*p = 20;
	printf("%d\n", a);
	**pp = 30;
	printf("%d\n", a);
	***ppp = 40;
	printf("%d\n", a);*/


	//이중 포인터 활용
	char* ap = "Hello";
	char* bp = "world";
	printf("before : %s %s!\n", ap, bp);
	//swap 사용자 정의 함수 만들기
	/*char* temp;
	temp = ap;
	ap = bp;
	bp = temp;*/
	swap(&ap, &bp);
	printf("after : %s %s!\n", ap, bp);
	
	return 0;
}