#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Side_dish{
public:
	vector<string> name;
	vector<char> attribute;	//탄수화물 C, 단백질 P, 지방 F, 미네랄 M
	vector<int> calories;
	Side_dish();
	~Side_dish();
};
