#include <stdio.h>
int main() {
	//int num = 10;
	//printf("%p\n", &num); //�޸� �ּ� ���, 16����, %p�� %x�� ���, ������ ������ �޶���

	//������ ���� �����ϱ�
	//int* numPtr;
	//int num = 10;
	//numPtr = &num;
	//printf("%p\n", numPtr);
	//printf("%p\n", &num);

	//������ ���� ������
	/*int* numPtr;
	int num = 10;
	numPtr = &num;
	printf("%d", *numPtr);*/

	//������ �� �Ҵ�
	//int* numPtr;
	//int num = 10;
	//numPtr = &num; //num�� �޸� �ּҿ� �����Ͽ� 20�� ����

	//*numPtr = 20; //������ �����ڷ� �޸� �ּҿ� �����Ͽ� 20����

	//printf("%d\n", *numPtr); //20: ������ �����ڷ� �޸� �ּҿ� �����Ͽ� ���� ������
	//printf("%d\n", num); //20: ����	num���� �ٲ�

	//���� ������ ���
	//int* numPtr1;
	//int** numPtr2;
	//int num = 10;

	//numPtr1 = &num; //num�� �޸� �ּ� ����
	//
	//numPtr2 = &numPtr1; //numPtr1�� �޸� �ּ� ����

	//printf("%d\n", **numPtr2); //20: �����͸� �� �� �������Ͽ� num�� �޸� �ּҿ� ����

	//�����Ϳ� �ּҿ����� ���
	int* numPtr;
	int num1 = 10, num2 = 20;

	numPtr = &num1;
	printf("%d\n", *numPtr);

	numPtr = &num2;
	printf("%d\n", *numPtr);
	return 0;
}