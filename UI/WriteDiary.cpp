#include "WriteDiary.h"

void WriteDiary::Write() {

	Main main = Main();
	Menu menu = Menu();
	
	
	MYSQL* connection = NULL, conn;
	MYSQL_RES* sql_result; // select, show, describe, explain 결과 다루기
	MYSQL_ROW sql_row; // row 가리킴

	int query_stat;

	system("cls");
	char date[10] = {'\0', };
	char weather[22] = { '\0', };
	char title[62] = { '\0', };
	char body[255] = { '\0', };
	char query[255] = { '\0', };

	mysql_init(&conn);


	// 계정 연결
	connection = mysql_real_connect(&conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, NULL, 0);


	if (connection == NULL) {
		fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
	}

	//// 한글 사용

	mysql_query(connection, "set session character_set_connection=euckr;");
	mysql_query(connection, "set session character_set_results=euckr;");
	mysql_query(connection, "set session character_set_client=euckr;");

	menu.MovePosition(1, 1);
	cout << "날짜(yyyymmdd) : ";
	while (fgets(date, 10, stdin) != NULL) {
		if (strlen(date) > 8)
			break;
	}
	CHOP(date);

	menu.MovePosition(40, 1);
	cout << "날씨 : ";
	while (fgets(weather, 22, stdin) != NULL) {
		if (strlen(weather) > 0)
			break;
	}
	CHOP(weather);

	menu.MovePosition(1, 5);
	cout << "제목 (30자이내) : ";
	fgets(title, 60, stdin);
	CHOP(title);

	
	menu.MovePosition(1, 7);
	cout << "내용 : " << endl;
	menu.MovePosition(1, 9);
	fgets(body, 255, stdin);
	CHOP(body);

	sprintf(query, "insert into user_tb(DATE, WEATHER, TITLE, BODY) values " "( '%s', '%s', '%s', '%s')", date, weather, title, body);

	query_stat = mysql_query(connection, query);
	if (query_stat != 0) {
		fprintf(stderr, "Mysql connection error : %s", mysql_error(&conn));
	}


	mysql_close(connection);
	cout << "------------------------저장완료----------------------- " << endl;

	
	cout << "메인 화면으로 돌아가려면 아무 키나 누르세요." << endl;

	char ch = _getch();
	if (ch != 0) {
		system("cls");
		main.printMain();
	}
}
