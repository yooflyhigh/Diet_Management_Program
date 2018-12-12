#pragma once
#include "Main.h"


class Print{
public:
	string name;
	int age;
	string sex;
	int days;
	int calories;

	Print();
	~Print();
	void User_info();
	void Msg_Opening();
	void Msg_Closing();
	void Msg_Select_day();
	void Msg_Perror();
	void Msg_Anykey(int x =100, int y =29);
	void gotoxy(int x, int y);
	string Msg_Days();
	string Msg_Take(int w);
	string Msg_Line();
	string setUser();
	int setDays();
};