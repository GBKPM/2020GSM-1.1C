#include <stdio.h>
void auto_func() {
	int a = 0;
	a++;
	printf("%d\n", a);
}
void static_func()
{
	static int a;
	a++;
	printf("%d\n", a);
}
int main() {
	int i;
	printf("�������� ����� �Լ� \n");
	for (i = 0; i < 3; i++)
		auto_func(); //�������� ������� ����� ��
    printf("static �������� ����� �Լ� \n");
    for (i = 0; i < 3; i++)
       static_func(); //static�� ��� ����
	return 0;
}