#include "Nutrient.h"
#include "Menu.h"
#include "Side_dish.h"

string opening = "���̾�Ʈ ���α׷��� ���Ű��� ȯ���մϴ�.\n\n";
int main(int argc, char* argv[]){
	Menu Init;
	string input;

	One_takes user;
	Init.data_insert();
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
	printf("%d \n",user.One_takes_Carbohydrate);
	printf("%d \n",user.One_takes_Fat);
	printf("%d \n",user.One_takes_Protein);
	printf("%d \n",user.One_takes_Mineral);

	return 0;
}