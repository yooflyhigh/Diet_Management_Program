#include "Main.h"


void Print::gotoxy(int x, int y){
	COORD pos = {x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}


void Print::Msg_Opening(){
	gotoxy(40,5);
	cout << "���̾�Ʈ ���α׷��� ���Ű��� ȯ���մϴ�.";
	Msg_Anykey();
	gotoxy(40,5);
	cout << "�� ���α׷��� ������, �索 �� ���κ��� ����Ǿ�";
	gotoxy(40,6);
	cout << "�Ĵ������� �ʿ��� ȯ�ڳ�";
	gotoxy(40,7);
	cout << "������ ���̾�Ʈ�� ���Ͽ� ���۵� ���α׷��Դϴ�.";
	Msg_Anykey();
	gotoxy(40,5);
	cout << "�����Ǵ� �Ĵ��� ���뷮�� ";
	gotoxy(40,6);
	cout << "�Ϸ� ���� Į�θ�(���� 2500, ���� 2000)�� �������� ���۵Ǿ�����";
	gotoxy(40,7);
	cout << "���� ����� 1/3�� ��ñ� �ٶ��ϴ�.";
	gotoxy(40,10);
	cout << "���� �����ϰڽ��ϴ�.";
	Msg_Anykey();
}


void Print::Msg_Closing(){
	gotoxy(40,5);
	cout << "�Ĵ��� ������ ��̳���?";
	gotoxy(40,6);
	cout << "���α׷��� �����մϴ�.";
	Msg_Anykey();
}


void Print::Msg_Select_sex(){
	gotoxy(40,5);
	cout << "���ڶ�� '����' ���ڶ�� '����' ��� �����ּ���.";
	gotoxy(40,20);
}


void Print::Msg_Select_day(){
	gotoxy(40,5);
	cout << "��ĥġ �Ĵ��� ���ϴ��� �Է��ϼ���";
	gotoxy(40,20);
}

string Print::Msg_Days(){
	return "���� �Ĵ�";
}

void Print::Msg_Perror(){
	system("cls");
	gotoxy(40,5);
	cout << "�߸� �Է��ϼ̽��ϴ�.";
	Msg_Anykey();
}


void Print::Msg_Anykey(int x, int y){
	gotoxy(x, y);
	cout << "[�ƹ�Ű�� ��������]";
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