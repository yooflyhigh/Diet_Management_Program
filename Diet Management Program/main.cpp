#include "Nutrient.h"


string opening = "���̾�Ʈ ���α׷��� ���Ű��� ȯ���մϴ�.\n\n";
int main(int argc, char* argv[]){
	string input;
	One_takes user;
	cout << opening;
	cout << "���ڶ�� '����' ��� ���ڶ�� '����' ��� �����ּ���. \n >> ";
	cin >> input;
	if(! input.compare("����")){
		user.Sex(2500);
	}
	else if(! input.compare("����")){
		user.Sex(2000);
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