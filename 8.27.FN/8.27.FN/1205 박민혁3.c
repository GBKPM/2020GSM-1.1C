#include <stdio.h>
struct data {
	char name[20];
	int height;
	double weight;
};

struct data stu[5];

void input() {
	for (int i = 0; i < 5; i++) {
		scanf_s("%s %d %d", stu[i].name, stu[i].height, stu[i].weight);
	}
}

void sort() {
	
}

void output() {
	for (int i = 0; i < 5; i++) {
		printf("%s %d %d", stu[i].name, stu[i].height, stu[i].weight);
	}
}

int main() {
	//5���� �̸��� Ű, �����Ը� �Է¹޾� Ű�� ���� ������� 
	//������������ �����Ͽ� ����ϴ� ���α׷�
	
	input(); //5���� �̸�, Ű, ������ �Է¹޴� �Լ�
	sort(); //�����ϴ� �Լ�: Ű-������������
	output(); //5���� �̸�, Ű, ������ ����ϴ� �Լ�
}