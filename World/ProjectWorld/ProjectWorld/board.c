#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE_S 4 //����
#define SIZE_E 6 //����

//ó���� �������ϱ⸦ ������������ �ҷ��� �ߴٰ� �ʹ� �����ο��� �ɷ��µ�...
//void rock() {
//	int a = 0, chek = 0;
//	printf("����:1, ����:2, ��:3 �Է��� ���ּ���.");
//	scanf_s("%s", &a);
//	srand((unsigned int)time(NULL));
//	int b = rand() % 3 + 1;
//	if (a > b) {
//		printf("�¸�");
//		chek = 1;
//	}
//}

int ro, b = 0, board[SIZE_S][SIZE_E], play = 0, ex = 0, aha = 0 , chek = 0;
void roll() { //�ֻ��� ������ �Լ�
	ro = 0;
	srand((unsigned int)time(NULL));
	ro = rand() % 6 + 1;
	printf("�ֻ����� ���� ���� %d�Դϴ�.\n", ro);
}

void goingf() { //1��° �Ͽ��� �ǿ��� �ֻ��� ���� ���� �̵��ϴ� ����
	if (play == 1) { //�� ������ ����
		aha = 0; //�ֻ��� ���� ���� �̵��ϴ� �Ÿ��� ��� ����
		while (aha != ro)
			aha++; //�Ÿ�++
		board[0][aha] = '1'; //�� ��ġ
		for (int i = 0; i < SIZE_S; i++) {
			for (int j = 0; j < SIZE_E; j++) {
				printf("%c", board[i][j]); //�� ���
			}
			printf("\n");
		}
		printf("����Ϸ��� ���͸� ġ�ʽÿ�..\n");
		getchar(b);
		system("cls");
	}
	if (play == 2) { //��� ������ ����
		board[0][0] = 'S'; //���� �κ��� �����̶�� ǥ��
		aha = 0;
		while (aha != ro)
			aha++;
		if (board[0][aha] == '1') { //���� �ߺ��̶��
			board[0][aha] = '3'; //3���� ǥ��
			ex = 1; //�ߺ��̶�� ���� �˸�
		}
		else //�׷��� ������
			board[0][aha] = '2'; //�� ��ġ

		for (int i = 0; i < SIZE_S; i++) {
			for (int j = 0; j < SIZE_E; j++)
				printf("%c", board[i][j]); //�� ���
			printf("\n");
		}
	}
}
void going1() { //�ǿ��� �ֻ��� ���� ���� �̵��ϴ� ���� 
	int ah = 0; //�ֻ��� ���� ���� �̵��ϴ� �Ÿ��� ��� ����
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			if (play == 1) { //�� �����϶�
				if (ex == 1) { //�ߺ������� ��
					if (board[i][j] == '3') { //3�̶�� ���� �ִ°��� ã�Ƽ�
						board[i][j] = '2'; //��� ���� �ٲ� �Ŀ�
						while (ah != ro) {
							ah++; //�Ÿ� ����
							j++; //���� �� ����
							if (j > SIZE_E) { //���� ���� ���� 6�� �Ѿ�ٸ�
								j = 1; //���� ���� 1�� �����
								i++; //���� �� ����
							}
						}
						if (board[i][j] == '2') { //���� �ߺ��̶��
							board[i][j] = '3'; //3���� ǥ��
							ex = 1; //�ߺ��̶�� ���� �˸�
						}
						else { //�׷��� ������
							board[i][j] = '1'; //�� ��ġ
							ex = 0; //�ߺ����� ����
						}
						break;
					}
				}
				else if (board[i][j] == '1') { //�ߺ����°� �ƴ϶�� 1�̶�� ���� �ִ� ���� ã�Ƽ�
					board[i][j] = '0'; //0���� ǥ��
					while (ah != ro) {
						ah++;
						j++;
						if (j > SIZE_E) {
							j = 1;
							i++;
						}
					}
					if (board[i][j] == '2') {
						board[i][j] = '3';
						ex = 1;
					}
					else
						board[i][j] = '1';
					break;
				}
			}
			else if (play == 2) { //��� ���ʶ��
				if (ex == 1) {
					if (board[i][j] == '3') {
						board[i][j] = '1';
						while (ah != ro) {
							ah++;
							j++;
							if (j > SIZE_E) {
								j = 1;
								i++;
							}
						}
						if (board[i][j] == '1') {
							board[i][j] = '3';
							ex = 1;
						}
						else {
							board[i][j] = '2';
							ex = 0;
						}
						break;
					}
				}
				else if (board[i][j] == '2') { //�ߺ����°� �ƴ϶�� ��� ���� �ִ°��� ã�Ƽ�
					board[i][j] = '0';
					while (ah != ro) {
						ah++;
						j++;
						if (j > SIZE_E) {
							j = 1;
							i++;
						}
					}
					if (board[i][j] == '1') {
						board[i][j] = '3';
						ex = 1;
					}
					else
						board[i][j] = '2';
					break;
				}
			}
		}
	}
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			printf("%c", board[i][j]); //�� ���
		}
		printf("\n");
	}
	printf("����Ϸ��� ���͸� ġ�ʽÿ�..\n");
	getchar(b);
	system("cls");
}

int main() {
	int turn = 1, fturn = 0, fro = 0, sro = 0;
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			board[i][j] = '0'; //�� ����
		}
	}
	board[SIZE_S- 1][SIZE_E- 1] = 'F'; //�������� ����
	board[0][0] = '3'; //�������� ����
	printf("�� ���� ���ϼ���.");//���̵� ���ϱ�
	scanf_s("%d", &fturn);
	getchar(b);
	//rock(); //���� ���ϱ�
	printf("�������\n");
	printf("����� 1�� ǥ��, ���� 2�� ǥ�õ˴ϴ�.\n3���� ǥ�õ� ���� ��Ű� ��� ��� �ִ°��Դϴ�. ����� ���������� 3���� ǥ�õ˴ϴ�.\n\n");
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			printf("%c", board[i][j]); //�� ���
		}
		printf("\n");
	}
	printf("���͸� ġ�ø� �����մϴ�.\n");
	getchar(b);
	system("cls");
	while (1) { //�������� ���������� ���ѹݺ�
		printf("%d��° ��", turn);
		printf("\n����� �����Դϴ�.\n");
		play = 1; //���ʸ� ���(1)���� ����

		printf("�ֻ����� �����ڽ��ϴ�.\n");
		roll(); //�ֻ��� ������ �Լ� ȣ��
		fro = fro + ro; //���� ���� �ֻ��� ���� ����

		if (turn == 1) { //���� ù��° ���̸�
			goingf(); //ù��° �� �Լ� ȣ��
		}
		else //�׷��� ������
			going1(); //�� ���� �� �Լ� ȣ��

		printf("��� �����Դϴ�.\n");
		play = 2; //���ʸ� ���(2)�� ����
		roll();
		sro = sro + ro; //����� ���� �ֻ��� ���� ����
		if (turn == 1) {
			goingf();
		}
		else
			going1();

		printf("%d��° ���� �������ϴ�.\n", turn);
		printf("���͸� ġ�ø� ���� ���� �����մϴ�.\n");
		getchar(b);
		system("cls");
		turn++; //���� ������ �� ����

		if (turn == fturn + 1) { //���� �����ٸ�
			if (fro > sro) { //���� ���� ��뺸�� �ָ� ���ٸ�
				printf("YOU WIN"); //���� �¸��� ����
				break;
			}
			else if (fro == sro) { //���� ���� ��밡 �� ���� �����ϴٸ�
				printf("���º�"); //���ºη� ����
				break;
			}
			else if (fro < sro) { //���� ��밡 ������ �ָ� ���ٸ�
				printf("YOU LOSE"); //����� �¸��� ����
				break;
			}
		}

		if (fro > SIZE_S * SIZE_E) { //���� ���� �ֻ��� ���� �����ߴٸ�
			printf("YOU WIN"); //���� �¸��� ����
			break;
		}
		else if (sro > SIZE_S * SIZE_E) { //���� ����� �ֻ��� ���� �����ߴٸ�
			printf("YOU LOSE"); //����� �¸��� ����
			break;
		}
		else if (fro > SIZE_S * SIZE_E && sro > SIZE_S * SIZE_E) {//���� ���� ��� �Ѵ��� �ֻ��� ���� �����ߴٸ�
			printf("���º�"); //���ºη� ����
			break;
		}
	}
	return 0;
}
