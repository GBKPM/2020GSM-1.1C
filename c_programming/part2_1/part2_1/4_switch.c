#include<stdio.h>
void input();
void output();
void find();
int main() {
	//�޴����α׷�
	char ans;
	printf("1:�Է�\n");
	printf("2:���\n");
	printf("3:�˻�\n");
	printf("4:����\n");
	printf("�����ϼ���. >>   \n");
	scanf_s("%c%*c", &ans);

	switch (ans) {
	case '1':input();
		break;
	case '2':output();
		break;
	case '3':find();
		break;
	case '4':printf("END");
		break;
	}

	return 0;
}
	void input() {
		printf("�Է� �Լ�...\n");
	}
	void output() {
		printf("��� �Լ�...\n");
	}
	void find() {
		printf("�˻� �Լ�...\n");
	}
