#include <stdio.h>
int main() {
	
	printf("String\n");
	printf("\nString");
	printf("Goot\bd\n");
	
	printf("%4d %-4d\n", 100, 9);
	printf("%.2f %.3lf\n", 3.0, 4.0);

	//문자(%c), 문자열(%s)
	printf("%c\n", 'a');
	printf("%s %s\n", "string", "test");

	printf("숫자 %c는 영어로 %s이다.\n", '1', "one");

	//자료형 char, short

	return 0;
}