#include<stdio.h>
int main() {
	//���ѷ����� ����Ͽ� 1���� 10���� ����ϱ�
	/*int cnt = 1;
	while (1) {
		printf("%d ", cnt);
		cnt++;
		if (cnt > 10)
			break;
	}*/
	
	//Ű����� �Էµ� ���� 3���� �� �ݺ����� �������� �� ������ ���� ����ϰ�,
	//��, ������ �ԷµǸ� �ٽ� �Է� �ޱ� ���� continue���� ����ؼ� �ۼ��غ���.
	//continue��break ���� �˱�
	/*int num, cnt = 0, sum = 0;
	while (1) {
		printf("input number > ");
		scanf_s("%d", &num);
		if (num < 0)
			continue;
		sum += num;
		cnt++;
		if (cnt == 3)
			break;
	}
	printf("sum : %d\n", sum);*/
	
	//do~while 1���� 10���� ����ϱ�
	/*int cnt = 1;
	do {
		printf("%d ", cnt);
		cnt++;
	} while (cnt <= 10);*/

	//10���� 1���� ����ϴ� ���α׷�
	/*int cnt = 10;
	do {
		printf("%d ", cnt);
		cnt--;
	} while (cnt >= 1);
	return 0;*/

	//do~while Z���� A���� ����ϴ� ���α׷�
	char ch = 'Z';
		do {
			printf("%c ", ch--);
		} while (ch >= 'A');

		return 0;
}