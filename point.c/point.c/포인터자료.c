#include <stdio.h>
int main() {
	//�������� �ڷ����� ũ�� = �ּ� �ڷ����� ũ��
	//������ ũ�� = 4byte

	//������ �ּҸ� ������ ����, �ڷ����� ũ��Ȯ��
	/*int i = 10;
	char c = 69;
	double d = 12.3;
	int* ip;
	char* cp;
	float* fp;
	double* dp;
	printf("%d %d %d %d %d %d %d", sizeof(i), sizeof(c), sizeof(d), sizeof(*ip), sizeof(cp), sizeof(fp), sizeof(dp));*/
	
	//�����ͺ����� ���� �ּ� �Ҵ�
	/*char ch, * cp;
	int num, * ip;
	float f_num, * fp;
	double d_num, * dp;
	cp = &ch;
	ip = &num;
	fp = &f_num;
	dp = &d_num;

	d_num = 17.5;
	cp = &d_num;
	printf("%d", *cp);*/
	
	int data = 12345678;
	double d_num = 17.5;
	char* cp;
	cp = &data;

	printf("%d\n", *(int*)cp);
	printf("%d\n", *cp);
	cp = &d_num;
	printf("%f\n", *cp);
	printf("%f\n", *(double*)cp);
	
	return 0;
}