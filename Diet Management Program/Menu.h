#pragma once
#include "Main.h"


class Menu{
	Side_dish Sd;
	One_takes Ot;
public:
	vector<string> selected_menu;
	vector<char> selected_Nut;
	Menu();
	~Menu();
	void Random_Choice(Print pr,int days);
	
};