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

void back_round() //외곽선
{
    xyprintf(30, 13, "게임시작 (숫자 1번을 누르세요)\n");
    xyprintf(30, 14, "게임종료 (숫자 2번을 누르세요)\n");
    _getch();
    if (_getch() == 2)
        return 0;
}

void game_option()
{
    while (1) {
        int nan = 0;
        int speed = 0;
        xyprintf(20, 13, "숫자가 높을수록 난이도가 높습니다\n");
        xyprintf(20, 14, "게임의 난이도를 선택하고 엔터키를 누르세요(1~6) :");
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
            printf("1~6사이의 숫자를 입력하세요!\n");

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
    xyprintf(SCR_L + X * 2, SCR_T + Y, "■");
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
    back_round();  //게임맵 외곽선 그리기
    game_option(); //게임의 스피드 조절

    x = MAX_X / 2; // 중앙
    y = MAX_Y / 2;
    setup(x, y);

    while (1) {
        if (_kbhit() != 0) {  //아무키나 입력받았을시 if문을 실행함
            key = getkey();
        }
        if (key == KEY_ESC) break; // ESC 종료
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
    system("cls"); // 화면을 깨끗이 지운다
    xyprintf(30, 10, "GAME OVER\n");
    
}