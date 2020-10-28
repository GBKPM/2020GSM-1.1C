#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE_S 4 //세로
#define SIZE_E 6 //가로

//처음에 순서정하기를 가위바위보로 할려고 했다가 너무 단조로워서 걸렀는데...
//void rock() {
//	int a = 0, chek = 0;
//	printf("가위:1, 바위:2, 보:3 입력을 해주세요.");
//	scanf_s("%s", &a);
//	srand((unsigned int)time(NULL));
//	int b = rand() % 3 + 1;
//	if (a > b) {
//		printf("승리");
//		chek = 1;
//	}
//}

int ro, b = 0, board[SIZE_S][SIZE_E], play = 0, ex = 0, aha = 0 , chek = 0;
void roll() { //주사위 굴리기 함수
	ro = 0;
	srand((unsigned int)time(NULL));
	ro = rand() % 6 + 1;
	printf("주사위를 굴린 값은 %d입니다.\n", ro);
}

void goingf() { //1번째 턴에서 판에서 주사위 값을 토대로 이동하는 변수
	if (play == 1) { //내 차례의 시작
		aha = 0; //주사위 값을 토대로 이동하는 거리를 담는 변수
		while (aha != ro)
			aha++; //거리++
		board[0][aha] = '1'; //말 배치
		for (int i = 0; i < SIZE_S; i++) {
			for (int j = 0; j < SIZE_E; j++) {
				printf("%c", board[i][j]); //판 출력
			}
			printf("\n");
		}
		printf("계속하려면 엔터를 치십시오..\n");
		getchar(b);
		system("cls");
	}
	if (play == 2) { //상대 차례의 시작
		board[0][0] = 'S'; //시작 부분을 시작이라고 표시
		aha = 0;
		while (aha != ro)
			aha++;
		if (board[0][aha] == '1') { //만약 중복이라면
			board[0][aha] = '3'; //3으로 표시
			ex = 1; //중복이라는 것을 알림
		}
		else //그렇지 않으면
			board[0][aha] = '2'; //말 배치

		for (int i = 0; i < SIZE_S; i++) {
			for (int j = 0; j < SIZE_E; j++)
				printf("%c", board[i][j]); //판 출력
			printf("\n");
		}
	}
}
void going1() { //판에서 주사위 값을 토대로 이동하는 변수 
	int ah = 0; //주사위 값을 토대로 이동하는 거리를 담는 변수
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			if (play == 1) { //내 차례일때
				if (ex == 1) { //중복상태일 때
					if (board[i][j] == '3') { //3이라는 말이 있는곳을 찾아서
						board[i][j] = '2'; //상대 말로 바꾼 후에
						while (ah != ro) {
							ah++; //거리 증가
							j++; //가로 수 증가
							if (j > SIZE_E) { //만약 가로 수가 6을 넘어섰다면
								j = 1; //가로 수를 1로 만들고
								i++; //세로 수 증가
							}
						}
						if (board[i][j] == '2') { //만약 중복이라면
							board[i][j] = '3'; //3으로 표시
							ex = 1; //중복이라는 것을 알림
						}
						else { //그렇지 않으면
							board[i][j] = '1'; //말 배치
							ex = 0; //중복상태 없음
						}
						break;
					}
				}
				else if (board[i][j] == '1') { //중복상태가 아니라면 1이라는 말이 있는 곳을 찾아서
					board[i][j] = '0'; //0으로 표시
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
			else if (play == 2) { //상대 차례라면
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
				else if (board[i][j] == '2') { //중복상태가 아니라면 상대 말이 있는곳을 찾아서
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
			printf("%c", board[i][j]); //판 출력
		}
		printf("\n");
	}
	printf("계속하려면 엔터를 치십시오..\n");
	getchar(b);
	system("cls");
}

int main() {
	int turn = 1, fturn = 0, fro = 0, sro = 0;
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			board[i][j] = '0'; //판 생성
		}
	}
	board[SIZE_S- 1][SIZE_E- 1] = 'F'; //도착지점 지정
	board[0][0] = '3'; //시작지점 지정
	printf("턴 수를 정하세요.");//난이도 정하기
	scanf_s("%d", &fturn);
	getchar(b);
	//rock(); //순서 정하기
	printf("보드게임\n");
	printf("당신은 1로 표시, 상대는 2로 표시됩니다.\n3으로 표시된 곳은 당신과 상대 모두 있는곳입니다. 현재는 시작지점이 3으로 표시됩니다.\n\n");
	for (int i = 0; i < SIZE_S; i++) {
		for (int j = 0; j < SIZE_E; j++) {
			printf("%c", board[i][j]); //판 출력
		}
		printf("\n");
	}
	printf("엔터를 치시면 시작합니다.\n");
	getchar(b);
	system("cls");
	while (1) { //종료조건 만족때까지 무한반복
		printf("%d번째 턴", turn);
		printf("\n당신의 차례입니다.\n");
		play = 1; //차례를 당신(1)으로 저장

		printf("주사위를 굴리겠습니다.\n");
		roll(); //주사위 굴리는 함수 호출
		fro = fro + ro; //나의 현재 주사위 값을 저장

		if (turn == 1) { //만약 첫번째 턴이면
			goingf(); //첫번째 턴 함수 호출
		}
		else //그렇지 않으면
			going1(); //그 외의 턴 함수 호출

		printf("상대 차례입니다.\n");
		play = 2; //차례를 상대(2)로 저장
		roll();
		sro = sro + ro; //상대의 현재 주사위 값을 저장
		if (turn == 1) {
			goingf();
		}
		else
			going1();

		printf("%d번째 턴이 끝났습니다.\n", turn);
		printf("엔터를 치시면 다음 턴을 시작합니다.\n");
		getchar(b);
		system("cls");
		turn++; //턴이 끝나면 턴 증가

		if (turn == fturn + 1) { //턴이 끝났다면
			if (fro > sro) { //만약 내가 상대보다 멀리 갔다면
				printf("YOU WIN"); //나의 승리로 종료
				break;
			}
			else if (fro == sro) { //만약 나와 상대가 간 값이 동일하다면
				printf("무승부"); //무승부로 종료
				break;
			}
			else if (fro < sro) { //만약 상대가 나보다 멀리 갔다면
				printf("YOU LOSE"); //상대의 승리로 종료
				break;
			}
		}

		if (fro > SIZE_S * SIZE_E) { //만약 나의 주사위 값이 도착했다면
			printf("YOU WIN"); //나의 승리로 종료
			break;
		}
		else if (sro > SIZE_S * SIZE_E) { //만약 상대의 주사위 값이 도착했다면
			printf("YOU LOSE"); //상대의 승리로 종료
			break;
		}
		else if (fro > SIZE_S * SIZE_E && sro > SIZE_S * SIZE_E) {//만약 나와 상대 둘다의 주사위 값이 도착했다면
			printf("무승부"); //무승부로 종료
			break;
		}
	}
	return 0;
}
