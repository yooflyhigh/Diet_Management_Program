#include <iostream>
#include <string>
using namespace std;

#define MALE 2500
#define FEMALE 2000
#define ESSENTIAL 0.75
#define OTHER 0.25
#define THREE 3
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