#include "main.h"


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
	int temp = Daily_recommend_calories*ESSENTIAL;
	One_takes_Carbohydrate = (temp / THREE) / THREE;
	One_takes_Protein = (temp / THREE) / THREE;
	One_takes_Fat = (temp / THREE) / THREE;

	temp = Daily_recommend_calories*OTHER;
	One_takes_Mineral = (temp / THREE) / THREE;
}