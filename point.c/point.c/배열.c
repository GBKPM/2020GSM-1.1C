#include <stdio.h>
int main() {
	//�迭 �����ͷ� ����
	/*int cnt[6] = { 100,200,300,400,500 }, i;
	int* ptr;
	ptr = cnt; //���輳��
	printf("%p %p %p\n\n", cnt, &cnt[0], ptr); //�ּ� ���
	for (i = 0; i < 6; i++) {
		printf("%d��°\n", i);
		printf("%d\t", cnt[i]); //�迭 �̿� cnt���
		printf("%d \t%p\t", *(cnt+i), *(cnt+i)); //�迭�� ������ó�� �̿�
		printf("%d\t", ptr[i]); //�������̿� �迭ó�� ���
		printf("%d\n", *(ptr+i)); //�����͸� �����ͷ� ���
	}*/


	//�����ͷ� �迭 �����
	int arr[5] = { 0 };
	int* pa = arr;
	for (int i = 0; i < 5; i++) {
		*(pa + i) = (i + 1) * 10;
	}

	for (int i = 0; i < 5; i++) {
		printf("%d\t", *pa++);
	}


	//�迭�� ������ ���
	//�����ּ� ���� ��� X

	//���ڹ迭
	char str[20] = "started C"; //�б� ���� ����
	char* msg = "advanced C";  //���ڿ� ���� �Ұ�
	str[0] = 'S'; //����
	msg[0] = 'A'; //�Ұ���
	
	return 0;
}