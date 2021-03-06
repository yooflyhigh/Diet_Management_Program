#pragma once
#include "Main.h"


class Nutrient{
protected :
	int Daily_recommend_calories;
	int Daily_need_Carbohydrate;
	int Daily_need_Protein;
	int Daily_need_Fat;
	int Daily_need_Mineral;
public :
	Nutrient();
	~Nutrient();
	int getDaily_rec_cal();
	virtual void One_takes_calories() = 0;
};


class One_takes : public Nutrient{
public:
	int One_takes_Carbohydrate;
	int One_takes_Protein;
	int One_takes_Fat;
	int One_takes_Mineral;
	One_takes();
	~One_takes();
	void Sex(int Calories);
	void One_takes_calories();
};