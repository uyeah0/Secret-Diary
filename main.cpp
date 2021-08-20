#include<iostream>
#include<windows.h>
#include<conio.h>
#define MAGIC_KEY 224
#define SPACE 32
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

using namespace std;

void gotoxy(int x, int y) {
	COORD Pos; //x, y를 가지고 있는 구조체 
	Pos.X = x; 
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}


int keyControl() {
	int temp; // getch함수는 엔터를 입력하지 않아도 바로 반환
	int x = 0;
	int y = 0;
	while (true) {
		temp = _getch();
		if (temp == MAGIC_KEY)
		{
			switch (_getch())
			{
			case UP:
				return UP;
			case DOWN:
				return DOWN;
			default:
				cout << "방향키로 이동해주세요" << endl;
			}

		}
	}
}

int menu() {
	int x = 24; 
	int y = 3;/*
	gotoxy(24, 1);
	cout << "나의 일기장" << endl;
	cout << endl << endl;

	gotoxy(22-1, 3);
	cout << "> 일기쓰기" << endl;
	gotoxy(22, 4);
	cout << "일기보기/수정" << endl;
	gotoxy(22, 5);
	cout << "일기삭제" << endl;
	gotoxy(22, 6);
	cout << "도움말" << endl;
	gotoxy(22, 7);
	cout << "종료" << endl;*/

	gotoxy(24, 1);
	cout << "나의 콘솔 다이어리" << endl << endl;

	gotoxy(22, 3);
	cout << "1. 일기쓰기" << endl;
	gotoxy(22, 4);
	cout << "2. 일기목록(보기, 수정, 삭제)" << endl;
	gotoxy(22, 5);
	cout << "3. 도움말" << endl;
	gotoxy(22, 6);
	cout << "4. 종료하기" << endl << endl;
	

	int menu;
	gotoxy(22, 8);
	cout << "메뉴 입력 >> ";
	cin >> menu;
	switch (menu)
	{
	case 1: return 1;
	case 2:	return 2;
	case 3: return 3;
	case 4: return 4;
	default:
		return 0; break;
	}
}

int main() {

	int menuCode = menu();
	cout << menuCode << endl;


	return 0;
}
