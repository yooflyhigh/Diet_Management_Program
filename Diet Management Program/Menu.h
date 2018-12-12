#pragma once
#include "Main.h"


class Menu{
	Side_dish Sp;
	One_takes Ot;
	Print pr;
public:
	vector<string> selected_menu;
	Menu();
	~Menu();
	void Random_Choice(Menu mu,int days);
	
};