#include "Nutrient.h"
#include "Menu.h"
#include "Side_dish.h"

string opening = "���̾�Ʈ ���α׷��� ���Ű��� ȯ���մϴ�.\n\n";
int main(int argc, char* argv[]){
	string input;
	One_takes user;
	Menu mu;

	cout << opening;
	cout << "���ڶ�� '����' ��� ���ڶ�� '����' ��� �����ּ���. \n >> ";
	cin >> input;
	if(! input.compare("����")){
		user.Sex(MALE);
	}
	else if(! input.compare("����")){
		user.Sex(FEMALE);
	}
	else{
		cout << "�߸� �Է��ϼ̽��ϴ�.";
		return 0;
	}

	user.One_takes_calories();

	mu.Random_Choice();
	cout << endl << "������ ��ħ �Ĵ��Դϴ�." << endl << "����������������������������������������������������" << endl;
	for(int i = 0 ; i < mu.selected_menu.size(); i++){
		cout << mu.selected_menu[i] << endl;
	}
	mu.Random_Choice();
	cout << endl << "������ ���� �Ĵ��Դϴ�." << endl << "����������������������������������������������������" << endl;
	for(int i = 0 ; i < mu.selected_menu.size(); i++){
		cout << mu.selected_menu[i] << endl;
	}	
	mu.Random_Choice();
	cout << endl << "������ ���� �Ĵ��Դϴ�." << endl << "����������������������������������������������������" << endl;
	for(int i = 0 ; i < mu.selected_menu.size(); i++){
		cout << mu.selected_menu[i] << endl;
	}
	return 0;
}