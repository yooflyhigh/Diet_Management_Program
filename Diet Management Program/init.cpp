#include "Nutrient.h"


Nutrient::Nutrient(){	
	Daily_need_Carbohydrate = 0;
	Daily_need_Protein = 0;
	Daily_need_Fat = 0;
	Daily_need_Mineral = 0;
}

Nutrient::~Nutrient(){
}

One_takes::One_takes(){
	One_takes_Carbohydrate = 0;
	One_takes_Protein = 0;
	One_takes_Fat = 0;
	One_takes_Mineral = 0;
}
One_takes::~One_takes(){
}
void One_takes::Sex(int Calories){
	this->Daily_recommend_calories = Calories;
}

void One_takes::One_takes_calories(){
	int calories_cal = Daily_recommend_calories*ESSENTIAL;
	One_takes_Carbohydrate = calories_cal / 3;
	One_takes_Protein = calories_cal / 3;
	One_takes_Fat = calories_cal / 3;
	One_takes_Mineral = calories_cal / 3;
}