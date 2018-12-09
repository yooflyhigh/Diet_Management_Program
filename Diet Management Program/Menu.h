#pragma once
#include "Side_dish.h"
#include "Nutrient.h"

class Menu{
	Side_dish Sp;
	One_takes Ot;
public:
	vector<string> selected_menu;
	Menu();
	~Menu();
	void Random_Choice();
};

class Breakfast : public Menu{
public:
	Breakfast();
	~Breakfast();
};

class Lunch : public Menu{
public:
	Lunch();
	~Lunch();
};

class Dinner : public Menu{
public:
	Dinner();
	~Dinner();
};