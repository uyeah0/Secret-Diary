#include <iostream>
#include <Windows.h>
#include <conio.h>
using namespace std;


#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define SUBMIT 4

int keyControl();
void MovePosition(int, int);

int printMenu() {
	MovePosition(4, 1);
	cout << "       o 收 收收收 收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬";
	MovePosition(4, 2);
	cout << "Ⅵ  收收收收收收收收收收                                                                                    式式式式式式式式式式式式忖 早";
	MovePosition(4, 3);
	cout << "                                                                                                             弛 早";
	MovePosition(4, 4);
	cout << "                                                                                                             弛 早";
	MovePosition(4, 5);
	cout << "早                                                                                                            弛 早";
	MovePosition(4, 6);
	cout << "                                                                                                             弛 早";
	MovePosition(4, 7);
	cout << "早                                                                                                              早";
	MovePosition(4, 8);
	cout << "早                                                                                                              早";
	MovePosition(4, 9);
	cout << "早                                                                                                              早";
	MovePosition(4, 10);
	cout << "早                                                                                                              早";
	MovePosition(4, 11);
	cout << "早                                                                                                              早";
	MovePosition(4, 12);
	cout << "早                                                                                                              早";
	MovePosition(4, 13);
	cout << "早                                                                                                              早";
	MovePosition(4, 14);
	cout << "早                                                                                                              早";
	MovePosition(4, 15);
	cout << "早                                                                                                              早";
	MovePosition(4, 16);
	cout << "早                                                                                                              早";
	MovePosition(4, 17);
	cout << "早                                                                                                              早";
	MovePosition(4, 18);
	cout << "早                                                                                                              早";
	MovePosition(4, 19);
	cout << "早                                                                                                              早";
	MovePosition(4, 20);
	cout << "早                                                                                                              早";
	MovePosition(4, 21);
	cout << "早 弛                                                                                                             ";
	MovePosition(4, 22);
	cout << "早 弛                                                                                                            早";
	MovePosition(4, 23);
	cout << "早 弛                                                                                                              ";
	MovePosition(4, 24);
	cout << "早 戌式式式式式式式式式式式                                                                                    o 收 收收收收收收收收收 ";
	MovePosition(4, 25);
	cout << " 收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收      Ⅵ 收收收收收收收收收     ";


	MovePosition(35, 4);
	cout << "                         _   ";
	MovePosition(35, 5);
	cout << "  ___  ___  ___ _ __ ___| |_ ";
	MovePosition(35, 6);
	cout << " / __|/ _ \\/ __| '__/ _ \\ __|";
	MovePosition(35, 7);
	cout << " \\__ \\  __/ (__| | |  __/ |_ ";
	MovePosition(35, 8);
	cout << " |___/\\___|\\___|_|  \\___|\\__|";



	MovePosition(43, 9);
	cout << " ___    ____   ____  ____   __ __ ";
	MovePosition(43, 10);
	cout << "|   \\  |    | /    ||    \\ |  |  |";
	MovePosition(43, 11);
	cout << "|    \\  |  | |  o  ||  D  )|  |  |";
	MovePosition(43, 12);
	cout << "|  D  | |  | |     ||    / |  ~  |";
	MovePosition(43, 13);
	cout << "|     | |  | |  _  ||    \\ |___, |";
	MovePosition(43, 14);
	cout << "|     | |  | |  |  ||  .  \\|     |";
	MovePosition(43, 15);
	cout << "|_____||____||__|__||__|\\_||____/ ";
	
	int x = 51;
	//int x1 = 51;
	int y = 19;

	MovePosition(x-4, y); // 錳 54, >蒂 轎溘п撿ж晦 陽僥縑 -2
	cout << ">     衛 濛 ж 晦";
	MovePosition(x, y+2); // 51
	cout << "綠 塵 廓 ?? 撲 薑";
	MovePosition(x, y+4);
	cout << "  謙 猿 ж 晦";

	while (1) {
		//int n = keyControl(); // 酈爾萄 檜漸お蒂 酈高戲煎 嫡嬴螃晦
		int n=1;
		switch (n)
		{
			case UP: { // 殮溘脹 高檜 UP檣 唳辦
				if (y > 19) {
					MovePosition(x - 4, y);
					cout << " ";
					y -= 2;
					MovePosition(x - 4, y);
					cout << ">";
				}
				break;
			}
			case DOWN: {
				if (y < 23) {
					MovePosition(x - 4, y);
					cout << " ";
					y += 2;
					MovePosition(x - 4, y);
					cout << ">";
				}
			}
			/*case SUBMIT: {
				return y - 19;
			}*/
		}
	}

}


int main() {
	system("mode con:cols=120 lines=28");
	//printMenu();
	int keyCode = keyControl();
	cout << "殮溘и 酈 高擎 : " << keyCode << "殮棲棻" << endl;
	//keyControl();
}

int keyControl() {
	char c;
	while (1) {
		if (_kbhit()) {               // 2. while僥寰縑憮 酈爾萄 揚溜擊 衛 if僥檜 褒ч脹棻.
			c = _getch();           // 3. 寞щ酈陛 殮溘?蝩? 陽 224 00 檜 幗ぷ縑 氈棻. 224睡攪 貍遽棻. 
			if (c == -32) {
				c = _getch();
				switch (c)
				{
				case 75:
					printf("謝煎 檜翕\n");
					return LEFT;
				case 77:
					printf("辦煎 檜翕\n");
					return RIGHT;
				case 72:
					printf("嬪煎 檜翕\n");
					return UP;
				case 80:
					printf("嬴楚煎 檜翕\n");
					return DOWN;
				case 32:
					return SUBMIT;
				}

				//}
				//if (c == 75) {
				//	//return LEFT;
				//}
				//else if (c == 77) {
				//	//return RIGHT;
				//}
				//else if (c == 72) {
				//	//return UP;
				//}
				//else if (c == 80) {
				//	//return DOWN;
				//}
				//else if (c == ' ') {
				//	//return SUBMIT;
				//	break;
				//}
			}
		}
	}
}
void MovePosition(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}

//void keyControl() {
//	char c;
//
//	while (1) {
//		if (_kbhit()) {               // 2. while僥寰縑憮 酈爾萄 揚溜擊 衛 if僥檜 褒ч脹棻.
//			c = _getch();           // 3. 寞щ酈陛 殮溘?蝩? 陽 224 00 檜 幗ぷ縑 氈棻. 224睡攪 貍遽棻. 
//            if (c == -32) {           // 4. -32煎 殮溘腎賊
//                c = _getch();        // 5. 菴曖 高 00擊 っ滌ж罹 謝辦鼻ж 轎溘
//                switch (c) {
//                case LEFT:
//                    printf("謝煎 檜翕\n");
//                    break;
//                case RIGHT:
//                    printf("辦煎 檜翕\n");
//                    break;
//                case UP:
//                    printf("嬪煎 檜翕\n");
//                    break;
//                case DOWN:
//                    printf("嬴楚煎 檜翕\n");
//                    break;
//                }
//            }
//		}
//	}
//
//}