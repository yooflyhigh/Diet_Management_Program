#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Side_dish{
	vector<string> name;
	vector<char> attribute;	//탄수화물 C, 단백질 P, 지방 F, 미네랄 M
	vector<int> calories;
public:
	Side_dish();
	~Side_dish();
	void Side_dish_data(string Name, char Attribute, int Calories){
		name.push_back(Name);
		attribute.push_back(Attribute);
		calories.push_back(Calories);
	}
};
