#include <stdio.h>
int main() {
	//scanf_s() �Լ� : Ű����κ��� �Էµ� ���� �о�ͼ�
	//���Ĺ��ڿ� �°� ������ ����
	/*����������
	 %c : ���� �Ѱ� scanf_s("%c", &ch);
	 %d : ������
	 %f(float), %lf(double) : �Ǽ���
	 %s: ���ڿ� scanf_s("%s", name, sizeof(name));	
	*/
	int age;   //��������
	printf("input age: ");
	scanf_s("%d", &age);
	printf("age : %d \n", age);

	double height;
	printf("input height : ");
	scanf_s("%lf", &height);
	printf("height : %f\n", height);

	//���ڿ� ���ڿ�
	char grade;
	char name[20];
	printf("input grade: ");
	scanf_s("%*c%c", &grade);

	printf("input name: ");
	scanf_s("%s", name, sizeof(name));

	printf("name: %s, grade: %c\n\n", name, grade);




	return 0;

}