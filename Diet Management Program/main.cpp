#include "Nutrient.h"


string opening = "다이어트 프로그램에 오신것을 환영합니다.\n\n";
int main(int argc, char* argv[]){
	string input;
	One_takes user;
	cout << opening;
	cout << "남자라면 '남자' 라고 여자라면 '여자' 라고 적어주세요. \n >> ";
	cin >> input;
	if(! input.compare("남자")){
		user.Sex(2500);
	}
	else if(! input.compare("여자")){
		user.Sex(2000);
	}
	else{
		cout << "잘못 입력하셨습니다.";
		return 0;
	}
	user.One_takes_calories();
	printf("%d \n",user.One_takes_Carbohydrate);
	printf("%d \n",user.One_takes_Fat);
	printf("%d \n",user.One_takes_Protein);
	printf("%d \n",user.One_takes_Mineral);

	return 0;
}