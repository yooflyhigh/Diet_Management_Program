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



void Print::Msg_Select_day(){
	gotoxy(40,5);
	cout << "��ĥġ �Ĵ��� ���ϴ��� �Է��ϼ���.";
	gotoxy(40,20);
}


string Print::Msg_Days(){
	return "���� �Ĵ�";
}


string Print::Msg_Take(int w){
	if(w == 1)	return "����";
	else if(w == 2)	return "�߽�";
	else	return "����";
}


string Print::Msg_Line(){
	return "��������������������������";
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
	Msg_Opening();
	gotoxy(40,5);
	cout << "�̸��� �Է��ϼ���.";
	gotoxy(40,10);
	cout << "���̸� �Է��ϼ���.";
	gotoxy(40,15);
	cout << "������ �Է��ϼ���.(ex. ���� or ����)";
	gotoxy(40,7);
	cout << ">> ";
	cin >> name;
	gotoxy(40,12);
	cout << ">> ";
	cin >> age;
	gotoxy(40,17);
	cout << ">> ";
	cin >> sex;
	Msg_Anykey();

	return sex;
}


int Print::setDays(){
	Msg_Select_day();
	cout << ">> ";
	cin >> days;
	Msg_Anykey();

	return days;
}


void Print::User_info(){
	gotoxy(90,0);
	cout << "����������������������������������������������";
	gotoxy(90,1);
	printf("�� �̸� ��	��%s��",name.c_str());
	gotoxy(90,2);
	cout << "����������������������������������������������";
	gotoxy(90,3);
	printf("�� ���� ��	      %d��",age);
	gotoxy(90,4);
	cout << "����������������������������������������������";
	gotoxy(90,5);
	printf("�� ���� ������      %s��",sex.c_str());
	gotoxy(90,6);
	cout << "����������������������������������������������";
	gotoxy(90,7);
	printf("�� ���� Į�θ� ��   %d��",calories);
	gotoxy(90,8);
	cout << "����������������������������������������������";
	gotoxy(90,9);
	printf("�� �Է��Ͻ� ��¥ ��   %d��",days);
	gotoxy(90,10);
	cout << "����������������������������������������������";
}


Print::Print(){

}


Print::~Print(){

}