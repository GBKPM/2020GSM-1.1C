#include <stdio.h>
#include <stdlib.h> //malloc, free�Լ��� ����� ��� ����
#include <string.h> //memset �Լ��� ����� ��� ����
#include <limits.h>
#include <AccCtrl.h>
#include <_dbdao.h>
int main() {
	//int num = 20;
	//int* numPtr;
	//numPtr = &num;
	//int* numPtr2;
	//numPtr2 = malloc(sizeof(int)); //intũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�
	//printf("%p\n", numPtr); //���� num�� �޸� �ּ� ���
	//printf("%p\n", numPtr2); //���� �Ҵ�� �޸��� �ּ� ���
	//free(numPtr2); //�������� �Ҵ��� �޸� ����

	//�޸� �� ����
	//int* numPtr;
	//numPtr = malloc(sizeof(int)); //intũ�� 4����Ʈ��ŭ ���� �޸� �Ҵ�
	//*numPtr = 10; //������ �������� �� �Ҵ�
	//printf("%d\n", *numPtr); //�����͸� �������Ͽ� �޸𸮿� ����� �� ���
	//free(numPtr); //���� �޸� ����

	//�޸� ���� �Ѳ����� ���� //memset
	//long long* numPtr = malloc(sizeof(long long)); //long long�� ũ�� 8����Ʈ��ŭ //���� �޸� �Ҵ�
	//memset(numPtr, 0x27, 8); //numPtr�� ����Ű�� �޸𸮸� 8����Ʈ��ŭ 0x27�� ����

	//printf("0x%11x\n", *numPtr); //0x2727272727272727: 27�� 8�� �� ����
	//free(numPtr); //�������� �Ҵ��� �޸� ����
	
	//�� ������ ���
	//int* ptr = NULL; //�����Ϳ� NULL ����
	//printf("%p\n", ptr); //00000000

	////�ǹ������� ��
	//if (ptr == NULL) //ptr�� ���̶��
	//ptr = malloc(1024); //1024����Ʈ��ŭ �޸� �Ҵ�
	
	//���� �޸� �Ҵ��ϱ�
	/*int* numPtr1 = malloc(sizeof(int));
	long long* numPtr2 = malloc(sizeof(long long));

	*numPtr1 = INT_MAX;
	*numPtr2 = LLONG_MAX;

	printf("%d %11d\n", *numPtr1, *numPtr2);
	
	free(numPtr1);
	free(numPtr2);*/

	
	return 0;
}