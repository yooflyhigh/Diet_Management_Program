#pragma once
#include "Main.h"


class Print{
public:
	Print();
	~Print();
	void Msg_Opening();
	void Msg_Closing();
	void Msg_Select_sex();
	void Msg_Select_day();
	string Print::Msg_Days();
	void Msg_Perror();
	void Msg_Anykey(int x =100, int y =29);
	string setUser();
	int setDays();
	void gotoxy(int x, int y);
};