#include <stdio.h>
int main() {
	
	printf("String\n");
	printf("\nString");
	printf("Goot\bd\n");
	
	printf("%4d %-4d\n", 100, 9);
	printf("%.2f %.3lf\n", 3.0, 4.0);

	//����(%c), ���ڿ�(%s)
	printf("%c\n", 'a');
	printf("%s %s\n", "string", "test");

	printf("���� %c�� ����� %s�̴�.\n", '1', "one");

	//�ڷ��� char, short

	return 0;
}