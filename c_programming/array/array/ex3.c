#include <stdio.h>
#include <stdlib.h> //rand() �Լ� ���� 0~32767, srand() : ���� �ʱ�ȭ���ִ� ���� ->srand(time(0))
#include <time.h> //time ����
#define SIZE 5
int main() {
	//�迭�� ������ �Է��ϴ� ���
	//1. Ű����� �Է¹ޱ�
	int arr[SIZE] = { 0 };
	int i = 0;
	//Ű����� ������ �Է¹ް�, ����ϱ�
	/*for (i = 0; i < SIZE; i++) {
		printf("input number %d : ", i);
		scanf_s("%d", &arr[i]);
		printf("%d\n", arr[i]);
	}*/

	//2. ������ ������ �Է�
	srand(time(0)); //rand ���� �ʱ�ȭ

	for (i = 0; i < SIZE; i++) {
		arr[i] = rand() % 100 + 1; //1~100����
		printf("%d\n", arr[i]);
	}
	
	return 0;
}