#include <stdio.h>
int main() {
	//ǥ�� ��� �Լ�
	/*putchar() : �� ���ڸ� ���
	  puts() : ���ڿ� ��� - �ڵ����� �ٹٲ� ���
	  printf() */

	/*putchar('A');
	putchar('\n');
	putchar(65);
	putchar('\n');
	puts("string");*/

	//ǥ�� �Է� �Լ�
	/* getchar() : �� ���ڸ� �Է��Ͽ� ������ ����
	   gets_s() : ���ڿ��� �Է��Ͽ� �迭�� ����
	   scanf_s() : �پ��� �ڷ����� �Է��Ͽ� ������ ����*/

	char ch;
	char name[20];

	puts("���ڿ� �Է�");
	ch = getchar();  //scanf_s("%c", &ch);
	putchar(ch);  //printf("%c", ch);
	putchar('\n');
	getchar();  //enter ����
	puts("what's your name?");
	gets_s(name, sizeof(name));
	puts(name);
	return 0;
}
