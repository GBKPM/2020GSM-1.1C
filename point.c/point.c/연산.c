#include <stdio.h>
int main() {
	//int* p;
	//*p++; //�ּ�
	//(*p)++; //��
	//*++p; //�ּ�
	//++* p; //��


	//������ ���� ����
	int i = 10;
	int* pi = &i;
	printf("i=%d, pi=%p\n", i, pi); //����
	(*pi)++; //�� ����
	printf("i=%d, pi=%p\n", i, pi); //�� ���� ����

	printf("\n\n");

	printf("i=%d, pi=%p\n", i, pi); //����
	*pi++; //�ּ� ���� +4(int�ڷ��� ũ�⸸ŭ)
	printf("i=%d, pi=%p\n", i, pi); //�ּ� ���� ����
}