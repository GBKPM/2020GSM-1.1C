//https://kin.naver.com/qna/detail.nhn?d1id=1&dirId=1040101&docId=300932658&qb=7YKk67O065OcIOuEpOuqqCDstpzroKU=&enc=utf8&section=kin&rank=2&search_sort=0&spq=0
//Colored by Color Scripter cs
#include<stdio.h>
#include<stdarg.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

// KEY
#define KEY_BACK    8
#define KEY_TAB        9
#define KEY_ENTER    13
#define KEY_ESC        27
#define KEY_SPACE    32
#define KEY_LEFT    203
#define KEY_RIGHT    205
#define KEY_UP        200
#define KEY_DOWN    208

// xyprintf macro
#define xyprintf(x,y,fmt,...) gotoxy(x,y), printf(fmt,__VA_ARGS__)

// screen limits
int SCR_L = 2;  // left
int SCR_R = 76; // right
int SCR_T = 1;  // top
int SCR_B = 23; // bottom

// x,y limit
int MAX_X = 37;
int MAX_Y = 22;

int X, Y;

void gotoxy(int x, int y)
{
    COORD Pos = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void back_round() //�ܰ���
{
    xyprintf(30, 13, "���ӽ��� (���� 1���� ��������)\n");
    xyprintf(30, 14, "�������� (���� 2���� ��������)\n");
    _getch();
    if (_getch() == 2)
        return 0;
}

void game_option()
{
    while (1) {
        int nan = 0;
        int speed = 0;
        xyprintf(20, 13, "���ڰ� �������� ���̵��� �����ϴ�\n");
        xyprintf(20, 14, "������ ���̵��� �����ϰ� ����Ű�� ��������(1~6) :");
        scanf_s("%d", &nan);
        if (nan == 1) {
            speed = 150;
        }
        else if (nan == 2) {
            speed = 140;
        }
        else if (nan == 3) {
            speed = 130;
        }
        else if (nan == 4) {
            speed = 120;
        }
        else if (nan == 5) {
            speed = 110;
        }
        else if (nan == 6) {
            speed = 100;
        }
        else {
            printf("1~6������ ���ڸ� �Է��ϼ���!\n");

            continue;
        }
        system("cls");
        break;
    }
}

int getkey()
{
    int key = _getch();
    if (key == 0 || key == 0xE0) {
        key = 128 + _getch();
    }
    return key;
}

void hide()
{
    xyprintf(SCR_L + X * 2, SCR_T + Y, "  ");
}

void show()
{
    xyprintf(SCR_L + X * 2, SCR_T + Y, "��");
}

void setup(int x, int y)
{
    X = x;
    Y = y;
    show();
}

void move(int x, int y)
{
    if (X != x || Y != y) {
        hide();
        X = x;
        Y = y;
        show();
    }
}

int main()
{
    int x, y;
    int key = 0;
    int speed = 150;

    gotoxy(1, 1);
    back_round();  //���Ӹ� �ܰ��� �׸���
    game_option(); //������ ���ǵ� ����

    x = MAX_X / 2; // �߾�
    y = MAX_Y / 2;
    setup(x, y);

    while (1) {
        if (_kbhit() != 0) {  //�ƹ�Ű�� �Է¹޾����� if���� ������
            key = getkey();
        }
        if (key == KEY_ESC) break; // ESC ����
        switch (key) {
        case KEY_UP: y--; break;
        case KEY_DOWN: y++; break;
        case KEY_LEFT: x--; break;
        case KEY_RIGHT: x++; break;
        }
        
        if (y < 0 || x < 0 || MAX_Y < y || MAX_X < x) {
            break;
        }
        else {
            move(x, y);
        }
        Sleep(speed);
    }
    system("cls"); // ȭ���� ������ �����
    xyprintf(30, 10, "GAME OVER\n");
    
}