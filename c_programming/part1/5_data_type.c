#include <stdio.h>
int main() {
	//�ڷ���(������Ÿ��)
	// 1. ������ : char(1byte), short(2byte), int(4byte), long(4byte)
	// 2. �Ǽ��� : float(4byte), double(8byte)
	// 3. void�� : �Լ� ���

	//���� : �ĺ���
	// 1. �پ��� ���� ������ �� �ִ� �̸��� �ο��� �޸� ������
	// int age; //�޸𸮿� �ʿ��� ���� �Ҵ�
	//������
	// -1. ���ĺ�, ����(ù���ڷ� ����� �ȵ�), ���� ����
	// 2. ������ �������� �� �� ����
	// 3. ����ϱ� ���� �̸� �����ؾ� ��
	// 4. �������� ��ҹ��ڸ� ������. (temp, Temp ���� �ٸ� ����)
	// 5. ������ �����̳� �ѱ׸��� ����� �� ����.

	//���Կ�����(=) : ������ ���� ������ �� ���
	
	/*int temp=0;
	printf("%d\n", temp);

	int num = 6; //��������� �ʱ�ȭ
	double height = 180.0;
	float weight = 50.6f;

	printf("%d %d\n", sizeof(num), sizeof(int));

	char cha = 'a';
	char chA = 'A';
	printf("%c %c\n", cha, chA);
	printf("%d %d\n", cha, chA);
	printf("%c\n", 'a' - 32);
	printf("%c\n", 'A' + 33);

	printf("%p %d\n", &num, num);

	//�빮�ڸ� �ҹ��ڷ� ��ȯ
	*/
	char cha;
	printf("�빮�ڸ� �ҹ��ڷ� ��ȯ �մϴ�.\n�빮�ڸ� �Է��ϼ��� >");
	scanf_s("%c", &cha);
	printf("%c -> %c", cha, cha + 32);
    return 0;
}