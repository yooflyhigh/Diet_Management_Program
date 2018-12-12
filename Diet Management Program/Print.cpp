#include "Main.h"


void Print::gotoxy(int x, int y){
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void Print::Msg_Opening(){
	gotoxy(40,5);
	cout << "다이어트 프로그램에 오신것을 환영합니다.";
	Msg_Anykey();
	gotoxy(40,5);
	cout << "본 프로그램은 고혈압, 당뇨 등 성인병에 노출되어";
	gotoxy(40,6);
	cout << "식단조절이 필요한 환자나";
	gotoxy(40,7);
	cout << "개인의 다이어트를 위하여 제작된 프로그램입니다.";
	Msg_Anykey();
	gotoxy(40,5);
	cout << "제공되는 식단의 섭취량은 ";
	gotoxy(40,6);
	cout << "하루 권장 칼로리(남성 2500, 여성 2000)를 기준으로 제작되었으며";
	gotoxy(40,7);
	cout << "실제 섭취는 1/3만 드시길 바랍니다.";
	gotoxy(40,10);
	cout << "이제 시작하겠습니다.";
	Msg_Anykey();
}


void Print::Msg_Closing(){
	gotoxy(40,5);
	cout << "식단은 마음에 드셨나요?";
	gotoxy(40,6);
	cout << "프로그램을 종료합니다.";
	Msg_Anykey();
}


void Print::Msg_Select_sex(){
	gotoxy(40,5);
	cout << "남자라면 '남자' 여자라면 '여자' 라고 적어주세요.";
	gotoxy(40,20);
}


void Print::Msg_Select_day(){
	gotoxy(40,5);
	cout << "며칠치 식단을 원하는지 입력하세요";
	gotoxy(40,20);
}

string Print::Msg_Days(){
	return "일자 식단";
}

void Print::Msg_Perror(){
	system("cls");
	gotoxy(40,5);
	cout << "잘못 입력하셨습니다.";
	Msg_Anykey();
}


void Print::Msg_Anykey(int x, int y){
	gotoxy(x, y);
	cout << "[아무키나 누르세요]";
	getch();
	system("cls");
}


string Print::setUser(){
	string input;
	Msg_Opening();
	Msg_Select_sex();
	cout << ">> ";
	cin >> input;
	Msg_Anykey();

	return input;
}


int Print::setDays(){
	int day;
	Msg_Select_day();
	cout << ">> ";
	cin >> day;
	Msg_Anykey();

	return day;
}


Print::Print(){

}


Print::~Print(){

}