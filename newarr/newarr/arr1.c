#include <stdio.h>
int main() {
	//int arr[10] = { 0 };

	//int i, score[5] = { 0 };
	////�����Է� 4��
	////�������� ����
	//for (i = 0; i < 4; i++) {
	//	printf("���� �Է� %d��°: ", i);
	//	scanf_s("%d", &score[i]);
	//	score[4] += score[i];
	//}
	//for (i = 0; i < 4; i++) {
	//	printf("%d\n", score[i]);
	//}
	//printf("����: %d", score[4]);
	
	//�迭 ����
	/*int arr[5] = { 10,30,40,70,90 };
	int new_arr[5] = { 0 };
	int i;
	for (i = 0; i < 5; i++) {
		new_arr[i] = arr[i];
	}
	printf("arr: ");
	for (i = 0; i < 5; i++) {
		printf("%5d", arr[i]);
	}
	printf("\n");
	printf("new_arr: ");
	for (i = 0; i < 5; i++) {
		printf("%5d", new_arr[i]);
	}*/
	//�ִ밪 ���ϱ�
	//int arr[5] = { 7, 1, 30, 9, 8 };
	//int i, max = 0;
	//for (i = 0; i < 5; i++) {
	//	if (max < arr[i]) max = arr[i];
	//}
	//for (i = 0; i < 5; i++)
	//	printf("%5d", arr[i]);
	//printf("\n�ִ밪: %d", max);


	int arr[5] = { 7, 1, 30, 9, 8 };
	int i;
	for (i = 0; i < 5; i++)
		if (arr[0] < arr[i + 1]) arr[0] = arr[i + 1];
		printf("\n�ִ밪: %d", arr[0]);
	return 0;
}