#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Side_dish{
	vector<string> name;
	vector<char> attribute;	//ź��ȭ�� C, �ܹ��� P, ���� F, �̳׶� M
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
