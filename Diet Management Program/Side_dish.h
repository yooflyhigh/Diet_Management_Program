#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Side_dish{
public:
	vector<string> name;
	vector<char> attribute;	//ź��ȭ�� C, �ܹ��� P, ���� F, �̳׶� M
	vector<int> calories;
	Side_dish();
	~Side_dish();
};
