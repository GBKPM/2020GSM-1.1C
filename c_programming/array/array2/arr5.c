#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	char star[50] = ""; //����0�϶� * ���� �߰�
	char percent[50] = ""; //����0�϶� % ���� �߰�
	char sharp[50] = ""; //����0�϶� # ���� �߰�
	int s = 0, p = 0, sh = 0;
	int i, randNum;
	
	srand((unsigned)time(0));//���� �ʱ�ȭ �κ� unsigned�� ����X��� ��
	//�迭���ٰ� ���� ����...
	for (i = 0; i < 50; i++) {
		randNum = rand() % 3;
		switch (randNum) {
		case 0:
			star[s] = '*';
			s++;
			break;
		case 1:
			percent[p] = '%';
			p++;
			break;
		case 2:
			sharp[sh] = '#';
			sh++;
			break;
		}
	}

	//�� �迭 ���
	printf("star : %s, count : %d\n", star, s);
	printf("percent : %s, count : %d\n", percent, p);
	printf("sharp : %s, count : %d\n", sharp, sh);
	return 0;
}