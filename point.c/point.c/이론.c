//������->�޸� �ּ� ����
//[����] �ڷ��� * �����̸�
//int* ip;
#include <stdio.h>
int main() {
	//������ �ڷ��� ��������
	int x = 10;
	int* px;
	px = &x;
	*px = 20;
	printf("x : %d\n", x);
	printf("*px : %d\n", *px);
	printf("&x : %p\n", &x);
	printf("px: %p\n", px);
	*px = 20; //x�� 20�� �ְ�
	printf("x : %d, *px : %d\n", x, *px);
	
	double dNum, * dp;
	dNum = 7.5;
	//dNum�� ���� �ּ�(%p)���
	printf("%f %p", dNum, &dNum);
	//������ �ּҿ� ������ �ּ� �Ҵ�
	dp = &dNum;
	//�����͸� �̿��� ���� �ּ� ���
	printf("%f %p", *dp, dp);
	
	
	return 0;
}
